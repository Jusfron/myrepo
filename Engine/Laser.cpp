#include "Laser.h"
#include "Graphics.h"

void Laser::Draw(Graphics& gfx)
{
	if (exists)
	{
		gfx.PutPixel(0 + x, 0 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 1 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 3 + y, 255, 0, 0);
	}
}

void Laser::Fire( int TurretX )
{
	if (!exists)
	{
		exists = true;
		x = TurretX + 7;
		y = 300;
	}
}

void Laser::Update()
{
	if (exists)
	{
		y = y - vy;
	}
}

void Laser::ClampToScreen()
{
	if (exists && y < 20)
	{
		exists = false;
	}
}

bool Laser::Impact(int AlienX, int AlienY, int AlienWidth, int AlienHeight)
{
	const int left = AlienX;
	const int right = AlienX + AlienWidth;
	const int bottom = AlienY + AlienHeight;
	const int top = AlienY;
	if (x < right && x > left && y > top && y < bottom)
	{
		return true;
	}
	else
	{
		return false;
	}
}
