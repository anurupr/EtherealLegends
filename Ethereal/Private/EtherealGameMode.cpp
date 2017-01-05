// © 2014 - 2016 Soverance Studios
// http://www.soverance.com

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Ethereal.h"
//#include "EtherealGameInstance.h"
#include "Characters/Player/EtherealPlayerMaster.h"
#include "EtherealPlayerController.h"
#include "EtherealPlayerState.h"
#include "EtherealGameState.h"
#include "EtherealGameMode.h"

AEtherealGameMode::AEtherealGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set Default Classes

	// These are commented out for now because I'm still using the BPs

	//DefaultPawnClass = AEtherealPlayerMaster::StaticClass();

	//PlayerControllerClass = AEtherealPlayerController::StaticClass();

	PlayerStateClass = AEtherealPlayerState::StaticClass();

	GameStateClass = AEtherealGameState::StaticClass();

}

