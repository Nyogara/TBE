/*
 * Copyright (C) 2008-2017 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITY_M2STORES_H
#define TRINITY_M2STORES_H

#include "Define.h"
#include "Position.h"
#include <vector>

struct FlyByCamera
{
    uint32 timeStamp;
    Position locations;
};

TC_GAME_API void LoadM2Cameras(std::string const& dataPath);

TC_GAME_API std::vector<FlyByCamera> const* GetFlyByCameras(uint32 cinematicCameraId);

#endif
