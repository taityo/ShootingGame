#pragma once
#include "Enemy.h"

class MostShotEnemy:public Enemy
{//player�̂�������ɑł�������
public:
	MostShotEnemy(double x, double y, int hp, double radius);
	~MostShotEnemy();
	void update(Player& player);
	void shot(Player& player);
	void draw();
};

