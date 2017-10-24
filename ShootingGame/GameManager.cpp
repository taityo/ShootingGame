#include "GameManager.h"



GameManager::GameManager():player(Player(Window::Width() / 2, Window::Height() - 50, 100, 15, 5))
{
}


GameManager::~GameManager()
{
}

void GameManager::add() {
	for (int i = 0; i < 5; i++) {
		em.add(rand() % 3);
	}
}

void GameManager::draw() {
	player.draw();
	em.draw();
	ebm.draw();
	pbm.draw();
}

void GameManager::update() {
	player.update();
	em.update(player);
	ebm.update();
	pbm.update();
}

void GameManager::shot() {
	em.shot(player, ebm);
	player.shot(pbm);
}