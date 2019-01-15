#pragma once
#include "Graphics.h"

class Alien
{
public:
	void Draw( Graphics& gfx );
	void Update();
	int x;
	int y;
	int sprite;
	int vx = 1;
	int vy;
	int direction = 0;
	static constexpr int width = 12;
	static constexpr int height = 8;
	bool destroyed = false;
};