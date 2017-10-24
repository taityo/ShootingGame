#include "PlayerBullet.h"



PlayerBullet::PlayerBullet(double x, double y, double radius, double xs, double ys):
	Bullet(x, y, radius, xs, ys)
{
}


PlayerBullet::~PlayerBullet()
{
}

void PlayerBullet::draw() {
	Circle(this->pos, this->radius).draw(Color(0, 0, 255));
}