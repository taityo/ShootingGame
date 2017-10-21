#include "Enemy.h"



Enemy::Enemy(double x, double y, int hp, double radius, double speed) :
	Object::Object(x, y, hp, radius), speed(speed)
{
}


Enemy::~Enemy()
{
}