#pragma once
#include <vector>
#include "Enemy.h"
#include "Player.h"
#include "EnemyBulletManager.h"
#include "ApproacheEnemy.h"
#include "fireworksEnemy.h"
#include "MostShotEnemy.h"

class EnemyManager
{
private:
	std::vector<Enemy*>enemies;
public:
	EnemyManager();
	~EnemyManager();
	void add(int num);
	void draw();
	void update(Player& player);
	void shot(Player& player, EnemyBulletManager& ebm);
};

