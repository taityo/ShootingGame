#include "Bullet.h"



Bullet::Bullet(double x, double y, double radius, double xs, double ys) :
	Object(x, y, 0, radius), speed(xs, ys)
{
}


Bullet::~Bullet()
{
}
