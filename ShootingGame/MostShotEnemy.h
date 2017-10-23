#pragma once
#include "Enemy.h"

class MostShotEnemy:public Enemy
{//player‚Ì‚¢‚é•ûŒü‚É‘Å‚¿‘±‚¯‚é
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

