#include "MostShotEnemy.h"



MostShotEnemy::MostShotEnemy(double x, double y, int hp, double radius):
	Enemy(x, y, hp, radius, 0)
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

void MostShotEnemy::shot(Player& player) {

}