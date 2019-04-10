#include "Coin.hpp"

/// Created by Jeong 2019.03.01

void Coin::setup()
{
	coin.load("images/COIN.png");
	coin.rotate90(3);

	isTagged = false;
	x = 0;
	y = 0;
}
void Coin::update()
{
	if ( isTagged )
	{
		x += INTERVAL;
		if ( x >= 1920 + 1150 )
		{
			x = 0;
			isTagged = false;
		}
	
	}
}
void Coin::draw()
{
	coin.draw(x, y, 1920,1080);
}
void Coin::onTagged()
{
	isTagged = true;
}