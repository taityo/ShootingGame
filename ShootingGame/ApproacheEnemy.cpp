#include "ApproacheEnemy.h"



ApproacheEnemy::ApproacheEnemy(double x, double y, int hp, double radius):
	Enemy::Enemy(x, y, hp, radius, 2), bulletCount(0), bulletFlag(false)
{
}


ApproacheEnemy::~ApproacheEnemy()
{
}

void ApproacheEnemy::update(Player& player) {//Playerに近づいていく
	double x = player.pos.x - this->pos.x;
	double y = -(player.pos.y - this->pos.y);
	double radian = atan2(y, x);
	this->pos.x += this->speed*cos(radian);
	this->pos.y += -this->speed*sin(radian);
}

void ApproacheEnemy::draw() {
	Circle(this->pos, this->radius).draw(Color(255, 0, 0));
}

void ApproacheEnemy::shot(Player& player, EnemyBulletManager& ebm) {//playerがいたら、打ち続ける
	//一回撃ったら、少し待つ必要がある可能性がある。
	if (bulletFlag && bulletCount != 20) {
		bulletCount++;
		return;
	}
	else {
		bulletFlag = false;
		bulletCount = 0;
	}

	if (pos.x + radius >= player.pos.x && pos.x - radius <= player.pos.x) {
		double ys = 5;
		if (pos.y > player.pos.y)ys *= -1;

		ebm.add(pos.x, pos.y, 5, 0, ys);
		bulletFlag = true;
		bulletCount++;
	}
}