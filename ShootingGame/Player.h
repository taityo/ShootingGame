#pragma once
#include "Object.h"
#include "PlayerBulletManager.h"

class Player:public Object
{
private:
	double speed;
	double bulletSpeed;
	int bulletCount;
public:
	Player(double x, double y, int hp, double radius, double speed);
	~Player();
	void update();
	void draw();
	void shot(PlayerBulletManager& pbm);
};

