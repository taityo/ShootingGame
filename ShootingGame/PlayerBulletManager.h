#pragma once
#include <vector>
#include "PlayerBullet.h"

class PlayerBulletManager
{
private:
	std::vector<PlayerBullet> playerBullets;
public:
	PlayerBulletManager();
	~PlayerBulletManager();
	void add(double x, double y, double radius, double xs, double ys);
	void update();
	void draw();
};

