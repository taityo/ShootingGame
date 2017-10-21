#pragma once
#include<Siv3D.hpp>
#include <math.h>

class Object
{
public:
	Vec2 pos;
	int hp;
	double radius;
	Object(double x, double y, int hp, double radius);
	~Object();
	virtual void draw() = 0;
};

