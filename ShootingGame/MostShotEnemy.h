#pragma once
#include "Enemy.h"

class MostShotEnemy:public Enemy
{//playerのいる方向に打ち続ける
private:
	int count;
	double bulletSpeed;
public:
	MostShotEnemy(double x, double y, int hp, double radius);
	~MostShotEnemy();
	void update(Player& player);
	void shot(Player& player, EnemyBulletManager& ebm);
	void draw();
};

