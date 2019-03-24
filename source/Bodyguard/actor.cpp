// Copyright (C) 2019 Eric Mitchem <ericmitchem@gmail.com>. All Rights Reserved.

#include "API/ARK/Ark.h"
#include "actor.hpp"

bool IsCharacter(AActor* actor)
{
    if(actor == nullptr) {
        Log::GetLog()->error("{}:{}: actor is null", __func__, __LINE__);
        return false;
    }

    return actor->IsA(APrimalCharacter::GetPrivateStaticClass());
}

bool IsDino(AActor* actor)
{
    if(actor == nullptr) {
        Log::GetLog()->error("{}:{}: actor is null", __func__, __LINE__);
        return false;
    }

    return actor->IsA(APrimalDinoCharacter::GetPrivateStaticClass());
}

bool IsPlayer(AActor* actor)
{
    if(actor == nullptr) {
        Log::GetLog()->error("{}:{}: actor is null", __func__, __LINE__);
        return false;
    }

    return actor->IsA(AShooterCharacter::GetPrivateStaticClass());
}

APrimalCharacter* AsCharacter(AActor* actor)
{
    return static_cast<APrimalCharacter*>(actor);
}

APrimalDinoCharacter* AsDino(AActor* actor)
{
    return static_cast<APrimalDinoCharacter*>(actor);
}

AShooterCharacter* AsPlayer(AActor* actor)
{
    return static_cast<AShooterCharacter*>(actor);
}

bool IsOnPlayerTeam(AActor* actor)
{
    if(actor == nullptr) {
        Log::GetLog()->error("{}:{}: actor is null", __func__, __LINE__);
        return false;
    }

    return actor->TargetingTeamField() >= 50000;
}