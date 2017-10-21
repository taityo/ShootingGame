#pragma once
#include <Siv3D.hpp>
#include "Enemy.h"
#include <math.h>

class fireworksEnemy:public Enemy
{
private:
	Vec2 nextPos;
	int count;
public:
	fireworksEnemy(double x, double y, int hp, double radius);
	~fireworksEnemy();
	void update(Player& player);
	void shot(Player& player);
	void draw();
};

