#include "EnemyBullet.h"



EnemyBullet::EnemyBullet(double x, double y, double radius, double xs, double ys) :
	Bullet(x, y, radius, xs, ys)
{
}


EnemyBullet::~EnemyBullet()
{
}

void EnemyBullet::draw() {
	Circle(pos, radius).draw(Color(255, 0, 0));
}