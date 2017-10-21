#include "Player.h"



Player::Player(double x, double y, int hp, double radius, double speed) :
	Object::Object(x, y, hp, radius), speed(speed)
{
}


Player::~Player()
{
}

void Player::update() {
	if (Input::KeyUp.pressed)pos.y -= speed;
	if (Input::KeyDown.pressed)pos.y += speed;
	if (Input::KeyRight.pressed)pos.x += speed;
	if (Input::KeyLeft.pressed)pos.x -= speed;
}

void Player::draw() {
	Circle(pos, radius).draw(Color(0, 0, 255));
}

void Player::shot() {//’e‚ðŒü‚¢‚Ä‚¢‚é•ûŒü‚Ö‘Å‚Â

}