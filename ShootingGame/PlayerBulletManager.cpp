#include "PlayerBulletManager.h"



PlayerBulletManager::PlayerBulletManager()
{
}


PlayerBulletManager::~PlayerBulletManager()
{
}

void PlayerBulletManager::add(double x, double y, double radius, double xs, double ys) {
	playerBullets.push_back(PlayerBullet(x, y, radius, xs, ys));
}

void PlayerBulletManager::draw() {
	for (std::vector<PlayerBullet>::iterator itr = playerBullets.begin(); itr != playerBullets.end(); itr++) {
		itr->draw();
	}
}

void PlayerBulletManager::update() {
	for (std::vector<PlayerBullet>::iterator itr = playerBullets.begin(); itr != playerBullets.end(); itr++) {
		itr->update();
	}
}
