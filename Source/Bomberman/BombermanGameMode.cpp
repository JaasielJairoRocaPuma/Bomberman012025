#include "BombermanGameMode.h"
#include "BombermanCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h" // Asegúrate de incluir el encabezado de la clase ABloque
#include "Muro.h"

ABombermanGameMode::ABombermanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABombermanGameMode::BeginPlay()
{
	Super::BeginPlay(); // Asegúrate de llamar a la implementación base de BeginPlay

	int numeroBloqueConMovimiento = 0;

	for (int j = 0; j < 20; j++)
	{
		float RandomX = FMath::RandRange(-1500.0f, 500.0f); // Rango deseado para la coordenada X
		float RandomY = FMath::RandRange(-1500.0f, 500.0f); // Rango deseado para la coordenada Y

		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(),FVector(RandomX, RandomY, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
		

        //ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(-1500.0f , -1050.0f + j * 250, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
		if (numeroBloqueConMovimiento < 2) {
			bloque->bPuedeMoverse = true;
			numeroBloqueConMovimiento++;
		}
	}
	numeroBloqueConMovimiento = 0;

	for (int j = 0; j < 10; j++)
	{
		float RandomX = FMath::RandRange(-1500.0f, 500.0f); // Rango deseado para la coordenada X
		float RandomY = FMath::RandRange(-1000.0f, 200.0f); // Rango deseado para la coordenada Y
		AMuro* muro = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), FVector(RandomX, RandomY, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
		if (numeroBloqueConMovimiento < 2) {
			muro->bPuedeMoverse = true;
			numeroBloqueConMovimiento++;
		}
	}

	

	
}
