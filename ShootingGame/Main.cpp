﻿# include <Siv3D.hpp>
#include "Player.h"
#include "fireworksEnemy.h"
#include "ApproacheEnemy.h"
#include "MostShotEnemy.h"
#include "EnemyBulletManager.h"

void Main()
{
	const Font font(30);
	Player player(Window::Width()/2, Window::Height()-50, 100, 15, 5);
	fireworksEnemy fe(Random(Window::Width()), 0, 10, 30);
	ApproacheEnemy ae(Random(Window::Width()), Random(Window::Height() - 100), 10, 30);
	EnemyBulletManager ebm;

	while (System::Update())
	{
		ae.shot(player, ebm);

		player.draw();
		fe.draw();
		ae.draw();
		ebm.draw();

		player.update();
		fe.update(player);
		ae.update(player);
		ebm.update();
	}
}
