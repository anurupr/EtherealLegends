// © 2014 - 2016 Soverance Studios. All Rights Reserved.

#pragma once

#include "Characters/EtherealCharacterMaster.h"
#include "Characters/Player/WeaponModes.h"
#include "EtherealPlayerState.h"
#include "EtherealPlayerMaster.generated.h"

/**
 * 
 */
UCLASS()
class ETHEREAL_API AEtherealPlayerMaster : public AEtherealCharacterMaster
{
	GENERATED_BODY()

public:
	
	AEtherealPlayerMaster(const FObjectInitializer& ObjectInitializer);

	// BeginPlay Override
	virtual void BeginPlay() override;

	/** Casts this spell. */
	//UFUNCTION(BlueprintCallable, Category = Controls)
	//void Cast();	

	/** The current Weapon Mode, used for determining animations for the currently bound weapon. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defaults)
	EWeaponModes WeaponMode;

	/** A reference to the Ethereal Player State. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Defaults)
	AEtherealPlayerState* EtherealPlayerState;
};
