#include "MostShotEnemy.h"



MostShotEnemy::MostShotEnemy(double x, double y, int hp, double radius) :
	Enemy(x, y, hp, radius, 0), count(0),bulletSpeed(4)
{
}


MostShotEnemy::~MostShotEnemy()
{
}

void MostShotEnemy::draw() {
	Circle(pos, radius).draw(Color(90, 120, 80));
}

void MostShotEnemy::update(Player& player) {

}

void MostShotEnemy::shot(Player& player, EnemyBulletManager& ebm) {
	count %= 20;
	if (count == 0) {
		double x = player.pos.x - this->pos.x;
		double y = -(player.pos.y - this->pos.y);
		double radian = atan2(y, x);
		x = cos(radian)*bulletSpeed;
		y = -sin(radian)*bulletSpeed;
		ebm.add(pos.x, pos.y, 5, x, y);
	}
	count++;
}