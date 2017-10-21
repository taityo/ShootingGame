#pragma once
#include "Object.h"

class Player:public Object
{
private:
	double speed;
public:
	Player(double x, double y, int hp, double radius, double speed);
	~Player();
	void update();
	void draw();
	void shot();
};

