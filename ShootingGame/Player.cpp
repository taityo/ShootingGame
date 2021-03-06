#include "Player.h"



Player::Player(double x, double y, int hp, double radius, double speed) :
	Object::Object(x, y, hp, radius), speed(speed), bulletSpeed(5), bulletCount(0)
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

void Player::shot(PlayerBulletManager& pbm) {//弾を向いている方向へ打つ
	//とりあえず前に弾を打つ
	if (Input::KeySpace.pressed) {
		if (bulletCount == 0) {//20毎に一発撃たせたい
			pbm.add(pos.x, pos.y, 5, 0, -bulletSpeed);
		}
		bulletCount++;
		bulletCount %= 10;
	}
	else {
		bulletCount = 0;
	}
}