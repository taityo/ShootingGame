#include "EnemyBulletManager.h"



EnemyBulletManager::EnemyBulletManager()
{
}


EnemyBulletManager::~EnemyBulletManager()
{
}

void EnemyBulletManager::draw() {
	for (std::vector<EnemyBullet>::iterator itr = enemyBullets.begin(); itr != enemyBullets.end(); itr++) {
		itr->draw();
	}
}

void EnemyBulletManager::update() {
	for (std::vector<EnemyBullet>::iterator itr = enemyBullets.begin(); itr != enemyBullets.end(); itr++) {
		itr->update();
	}
}

void EnemyBulletManager::add(double x, double y, double radius, double xs, double ys) {
	this->enemyBullets.push_back(EnemyBullet(x, y, radius, xs, ys));
}