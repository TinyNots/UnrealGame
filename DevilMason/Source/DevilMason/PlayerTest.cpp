// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTest.h"

// Sets default values
APlayerTest::APlayerTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = VisualMesh;
	SpringArm->SetupAttachment(VisualMesh);
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void APlayerTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerTest::Move(float value)
{
	FVector2D mouse_pos;
	GEngine->GameViewport->GetMousePosition(mouse_pos);

}

