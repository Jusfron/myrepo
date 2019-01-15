#pragma once
#include "Graphics.h"

class Turret
{
public:
	void Draw(Graphics& gfx);
	void ClampToScreen();
	int x;
	int y;
	int vx = 2;
	static constexpr int width = 15;
	static constexpr int height = 9;
};