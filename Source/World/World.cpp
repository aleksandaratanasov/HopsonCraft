#include "World.h"

#include <iostream>
#include <SFML/Graphics.hpp>

#include "../Renderer/RMaster.h"
#include "../Maths/General_Maths.h"
#include "../Camera.h"
#include "../Player/Player.h"
#include "../Physics/Ray.h"
#include "../Util/Random.h"
#include "../HUD/HUD.h"

World::World(const Camera& camera, HUD& hud)
:   m_p_hud         (&hud)
,   m_p_camera      (&camera)
{ }






