//
//  Creature.cpp
//  Project2
//
//  Created by William Meaton on 19/01/2016.
//
//

#include "Creature.hpp"

Creature::Creature(const Math::Vector2D &position, bool visible = true, float health = 0): GameObject(position, visible), health(health){
}