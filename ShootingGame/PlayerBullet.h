#pragma once
#include "Bullet.h"

class PlayerBullet:public Bullet
{
public:
	PlayerBullet(double x, double y, double radius, double xs, double xy);
	~PlayerBullet();
};

