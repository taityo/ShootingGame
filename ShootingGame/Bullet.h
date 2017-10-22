#pragma once
#include "Object.h"

class Bullet:public Object
{
public:
	Vec2 speed;
	Bullet(double x, double y, double radius, double xs, double xy);
	~Bullet();
	void update();
	void draw();
};

