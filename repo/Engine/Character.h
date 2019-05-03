/*former Snow class by MrGodin*/
#pragma once
#include "Vec2f.h"
class Character
{
public:
	Vec2f dir;
	Vec2f pos;
	float speed;
	Character() {}
	Character(Vec2f p, Vec2f d, float s)
		:pos(p), dir(d), speed(s)
	{}
	void Update(const float& dt)
	{
		pos += dir * speed * dt; // adds  direction vector multiplied by speed scalar to the position vector
	}
	
};