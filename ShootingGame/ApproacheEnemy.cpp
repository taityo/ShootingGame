#include "ApproacheEnemy.h"



ApproacheEnemy::ApproacheEnemy(double x, double y, int hp, double radius):
	Enemy::Enemy(x, y, hp, radius, 2)
{
}


ApproacheEnemy::~ApproacheEnemy()
{
}

void ApproacheEnemy::update(Player& player) {//Player‚É‹ß‚Ã‚¢‚Ä‚¢‚­
	double x = player.pos.x - this->pos.x;
	double y = -(player.pos.y - this->pos.y);
	double radian = atan2(y, x);
	this->pos.x += this->speed*cos(radian);
	this->pos.y += -this->speed*sin(radian);
}

void ApproacheEnemy::draw() {
	Circle(this->pos, this->radius).draw(Color(255, 0, 0));
}

void ApproacheEnemy::shot(Player& player) {//player‚ª‚¢‚½‚çA‘Å‚¿‘±‚¯‚é

}