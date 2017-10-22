#pragma once
#include "Bullet.h"

class EnemyBullet:public Bullet
{
public:
	EnemyBullet(double x, double y, double radius, double xs, double ys);
	~EnemyBullet();
};

