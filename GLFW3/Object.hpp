//
//  Object.hpp
//  Project2
//
//  Created by William Meaton on 19/01/2016.
//
//

#ifndef Object_hpp
#define Object_hpp

#include <stdio.h>
#include "GameObject.hpp"

class Object : public GameObject{
protected:
    Object(Math::Vector2D position, bool visible);
};

#endif /* Object_hpp */