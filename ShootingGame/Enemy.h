#pragma once
#include"Object.h"
#include "Player.h"

class Enemy:public Object
{
public:
	double speed;
	Enemy(double x, double y, int hp, double radius, double speed);
	~Enemy();
	virtual void shot(Player& player) = 0;
	virtual void update(Player& player) = 0;
};

