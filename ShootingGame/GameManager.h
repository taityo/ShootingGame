#pragma once
#include "EnemyBulletManager.h"
#include "EnemyManager.h"
#include "Player.h"
#include "PlayerBulletManager.h"

class GameManager
{
private:
	Player player;
	PlayerBulletManager pbm;
	EnemyManager em;
	EnemyBulletManager ebm;
	int score;
public:
	GameManager();
	~GameManager();
	void add();
	void update();
	void draw();
	void shot();
};

