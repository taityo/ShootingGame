# include <Siv3D.hpp>
#include "GameManager.h"

void Main()
{
	const Font font(30);
	GameManager gm;
	gm.add();

	while (System::Update())
	{
		gm.shot();
		gm.draw();
		gm.update();
	}
}
