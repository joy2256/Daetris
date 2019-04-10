#pragma once
#include "ofMain.h"
class Coin
{
private:
	ofImage coin;
	bool isTagged;
	float x, y;
	const float INTERVAL = 10;

public:
	void setup();
	void update();
	void draw();
	void onTagged();
};