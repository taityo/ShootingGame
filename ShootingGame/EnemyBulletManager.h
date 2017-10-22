#pragma once
#include "EnemyBullet.h"
#include <vector>

class EnemyBulletManager
{
private:
	std::vector<EnemyBullet> enemyBullets;
public:
	EnemyBulletManager();
	~EnemyBulletManager();
	void add(double x, double y, double radius, double xs, double ys);
	void draw();
	void update();
};

