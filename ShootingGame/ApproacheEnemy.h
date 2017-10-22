#pragma once
#include "Enemy.h"
#include "Player.h"

class ApproacheEnemy:public Enemy
{
private:
	int bulletCount;
	bool bulletFlag;
public:
	ApproacheEnemy(double x, double y, int hp, double radius);
	~ApproacheEnemy();
	void update(Player& player);
	void draw();
	void shot(Player& player, EnemyBulletManager& ebm);
};

