#include "fireworksEnemy.h"



fireworksEnemy::fireworksEnemy(double x, double y, int hp, double radius):
	Enemy(x, y, hp, radius, 3), nextPos(Random(Window::Width()), Random(Window::Height()-100)),  count(0)
{
}


fireworksEnemy::~fireworksEnemy()
{
}


void fireworksEnemy::draw() {
	Circle(pos, radius).draw(Color(255, 160, 0));
}

void fireworksEnemy::shot(Player& player, EnemyBulletManager& ebm) {
	//花火のように周りに弾を打つ。
	if (pos == nextPos) {//ここで待ち時間を調整できる
		if (count == 0) {
			if (rand() % 5 != 0) {
				nextPos = Vec2(Random(Window::Width()), Random(Window::Height() - 100));
			}
			else {
				double bulletSpeed = 5;
				for (int i = 0; i < 8; i++) {//できてるかわからない
					double radian = i * 45 * Pi / 180;
					ebm.add(pos.x, pos.y, 5, sin(radian)*bulletSpeed, cos(radian)*bulletSpeed);
				}
				count++;
				return;
			}
		}
		else if (count <= 60) {
			count++;
			return;
		}
		else {
			count = 0;
			nextPos = Vec2(Random(Window::Width()), Random(Window::Height() - 100));
		}
	}
}

void fireworksEnemy::update(Player& player) {//ランダムな位置に移動し、ランダムなタイミングで弾を打つ
	double x = this->nextPos.x - this->pos.x;
	double y = -(this->nextPos.y - this->pos.y);
	double radian = atan2(y, x);

	if (sqrt(x*x + y*y) < speed) {
		this->pos.x += x;
		this->pos.y += -y;
	}
	else {
		this->pos.x += cos(radian)*speed;
		this->pos.y += -sin(radian)*speed;
	}

}