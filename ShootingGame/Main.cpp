# include <Siv3D.hpp>
#include "Player.h"
#include "fireworksEnemy.h"

void Main()
{
	const Font font(30);
	Player player(Window::Width()/2, Window::Height()-50, 100, 15, 5);
	fireworksEnemy fe(Random(Window::Width()), 0, 10, 30);


	while (System::Update())
	{
		player.draw();
		fe.draw();

		player.update();
		fe.update(player);
	}
}
