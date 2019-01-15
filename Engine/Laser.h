#pragma once
#include "Graphics.h"

class Laser
{
public:
	void Draw( Graphics& gfx );
	void Fire( int TurretX );
	void Update();
	void ClampToScreen();
	bool Impact(int AlienX, int AlienY, int AlienWidth, int AlienHeight);
	int x;
	int y;
	int vy = 5;
	bool exists = false;
};