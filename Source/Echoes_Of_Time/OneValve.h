// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OneValve.generated.h"

UCLASS()
class ECHOES_OF_TIME_API AOneValve : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOneValve();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Valve Comp")
		UStaticMeshComponent* valve;

	UPROPERTY(VisibleAnywhere, Category = "Box Comp")
		class UBoxComponent* boxComp;

	UFUNCTION()
		void OpenValve(float dt);

	UFUNCTION(BlueprintCallable, Category = "Valve")
		void ToggleValve();

	UPROPERTY(EditAnywhere, Category = "ValveTag")
		FString ValveTag;

	UFUNCTION()
		void CloseValve(float dt);

	bool opening;
	bool closing;
	float rotSpeed;
	float maxRot;
	float addRot;
	float currentRot;
};
