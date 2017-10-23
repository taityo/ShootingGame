#include "EnemyManager.h"



EnemyManager::EnemyManager()
{
}


EnemyManager::~EnemyManager()
{
}

void EnemyManager::add(int num) {
	if (num == 0) {
		enemies.push_back(new ApproacheEnemy(Random(Window::Width()), Random(100), 10, 30));
	}
	else if (num == 1) {
		enemies.push_back(new fireworksEnemy(Random(Window::Width()), Random(Window::Height() - 100), 10, 30));
	}
	else if (num == 2) {
		enemies.push_back(new MostShotEnemy(Random(Window::Width()), Random(100), 10, 30));
	}
}

void EnemyManager::draw() {
	for (std::vector<Enemy*>::iterator itr = enemies.begin(); itr != enemies.end(); itr++) {
		(*itr)->draw();
	}
}

void EnemyManager::update(Player& player) {
	for (std::vector<Enemy*>::iterator itr = enemies.begin(); itr != enemies.end(); itr++) {
		(*itr)->update(player);
	}
}

void EnemyManager::shot(Player& player, EnemyBulletManager& ebm) {
	for (std::vector<Enemy*>::iterator itr = enemies.begin(); itr != enemies.end(); itr++) {
		(*itr)->shot(player, ebm);
	}
}