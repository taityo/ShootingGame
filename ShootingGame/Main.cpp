# include <Siv3D.hpp>
#include "Player.h"
#include "fireworksEnemy.h"
#include "ApproacheEnemy.h"
#include "MostShotEnemy.h"
#include "EnemyBulletManager.h"
#include "EnemyManager.h"

void Main()
{
	const Font font(30);
	Player player(Window::Width()/2, Window::Height()-50, 100, 15, 5);
	EnemyBulletManager ebm;
	EnemyManager em;

	for (int i = 0; i < 5; i++) {
		em.add(rand() % 3);
	}

	while (System::Update())
	{
		em.shot(player, ebm);

		player.draw();
		em.draw();
		ebm.draw();

		player.update();
		em.update(player);
		ebm.update();
	}
}
