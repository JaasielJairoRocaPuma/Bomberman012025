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
	int a;
	for (int i = 0; i < 12; i++) {
		ABloque* bloque2 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(-1790.0f + i * 125, -1400.0f, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
		if (i == 0||i==11) { a = 30; } else { a = 20; }
		for (int j = 0; j < a; j++) {
			if (i==0){ 
				ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(-1790.0f + i * 250, -1400.0f + j * 100, 126.0f), FRotator(0.0f, 0.0f, 0.0f)); 
			}
			if (i == 11) {
				ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(-1790.0f + i * 250, -1400.0f + j * 100, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
			}
			else {
				ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(-1790.0f + i * 250, -1400.0f + j * 250, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
				bloque->bPuedeMoverse = true;
				if (numeroBloqueConMovimiento < 4) {
					bloque->bPuedeSubir = true;
					numeroBloqueConMovimiento++;
				}
			}
			
		}
	}
	/*
	for (int j = 0; j < 20; j++)
	{
		float RandomX = FMath::RandRange(-1790.0f, 500.0f); // Rango deseado para la coordenada X
		float RandomY = FMath::RandRange(-1400.0f, 500.0f); // Rango deseado para la coordenada Y

		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(),FVector(RandomX, RandomY, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
		

        //ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(-1790.0f , -1400.0f + j * 250, 126.0f), FRotator(0.0f, 0.0f, 0.0f));
		if (numeroBloqueConMovimiento < 1) {
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
		if (numeroBloqueConMovimiento < 3) {
			muro->bPuedeMoverse = true;
			numeroBloqueConMovimiento++;
		}
	}*/

	

	
}
