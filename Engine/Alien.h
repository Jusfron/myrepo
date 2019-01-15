#pragma once
#include "Graphics.h"

class Alien
{
public:
	void Draw( Graphics& gfx );
	void Update();
	void CheckPos();
	void Destroy();
	int GetWidth();
	int GetHeight();
	void SetSprite(int sprite_in);
private:
	int x;
	int y;
	int sprite;
	int vx = 1;
	int vy;
	int direction = 0;
	bool destroyed = false;
	static constexpr int width = 12;
	static constexpr int height = 8;
};