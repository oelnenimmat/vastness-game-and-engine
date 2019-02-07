/*
Leo Tamminen
Created 21/01/2019
*/

#pragma once

#include <string>

#include "PlayerController.hpp"

namespace Game
{
    enum EntityType
    {
        NONE,
        PLAYER,

        // Keep this last, so we can use it to count these
        COUNT
    };

    std::string entityTypeNames[EntityType::COUNT] =
    {
        "NONE",
        "PLAYER",
    };

    EntityType GetEntityType(std::string name)
    {
        for (int i = 0; i < EntityType::COUNT; i++)
        {
            if (name.compare(entityTypeNames[i]) == 0)
            {
                return (EntityType) i;
            }
        }
        return EntityType::NONE;
    }
}