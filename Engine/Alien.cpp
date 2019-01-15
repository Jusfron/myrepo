#include "Alien.h"
#include "Graphics.h"

void Alien::Draw( Graphics& gfx)
{
	switch (sprite)
	{
	case 1:
		gfx.PutPixel(4 + x, 0 + y, 160, 64, 192);
		gfx.PutPixel(5 + x, 0 + y, 160, 64, 192);
		gfx.PutPixel(6 + x, 0 + y, 160, 64, 192);
		gfx.PutPixel(7 + x, 0 + y, 160, 64, 192);
		gfx.PutPixel(1 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(3 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(4 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(5 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(6 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(7 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(8 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(10 + x, 1 + y, 160, 64, 192);
		gfx.PutPixel(0 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(1 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(3 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(4 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(5 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(6 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(7 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(8 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(10 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(11 + x, 2 + y, 160, 64, 192);
		gfx.PutPixel(0 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(1 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(5 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(6 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(10 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(11 + x, 3 + y, 160, 64, 192);
		gfx.PutPixel(0 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(1 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(3 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(4 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(5 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(6 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(7 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(8 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(10 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(11 + x, 4 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 5 + y, 160, 64, 192);
		gfx.PutPixel(3 + x, 5 + y, 160, 64, 192);
		gfx.PutPixel(4 + x, 5 + y, 160, 64, 192);
		gfx.PutPixel(7 + x, 5 + y, 160, 64, 192);
		gfx.PutPixel(8 + x, 5 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 5 + y, 160, 64, 192);
		gfx.PutPixel(1 + x, 6 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 6 + y, 160, 64, 192);
		gfx.PutPixel(5 + x, 6 + y, 160, 64, 192);
		gfx.PutPixel(6 + x, 6 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 6 + y, 160, 64, 192);
		gfx.PutPixel(10 + x, 6 + y, 160, 64, 192);
		gfx.PutPixel(2 + x, 7 + y, 160, 64, 192);
		gfx.PutPixel(3 + x, 7 + y, 160, 64, 192);
		gfx.PutPixel(8 + x, 7 + y, 160, 64, 192);
		gfx.PutPixel(9 + x, 7 + y, 160, 64, 192);
		break;
	case 2:
		gfx.PutPixel(4 + x, 0 + y, 0, 160, 192);
		gfx.PutPixel(5 + x, 0 + y, 0, 160, 192);
		gfx.PutPixel(6 + x, 0 + y, 0, 160, 192);
		gfx.PutPixel(7 + x, 0 + y, 0, 160, 192);
		gfx.PutPixel(1 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(2 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(3 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(4 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(5 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(6 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(7 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(8 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(9 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(10 + x, 1 + y, 0, 160, 192);
		gfx.PutPixel(0 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(1 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(2 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(3 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(4 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(5 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(6 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(7 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(8 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(9 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(10 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(11 + x, 2 + y, 0, 160, 192);
		gfx.PutPixel(0 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(1 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(2 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(5 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(6 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(9 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(10 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(11 + x, 3 + y, 0, 160, 192);
		gfx.PutPixel(0 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(1 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(2 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(3 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(4 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(5 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(6 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(7 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(8 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(9 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(10 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(11 + x, 4 + y, 0, 160, 192);
		gfx.PutPixel(3 + x, 5 + y, 0, 160, 192);
		gfx.PutPixel(4 + x, 5 + y, 0, 160, 192);
		gfx.PutPixel(7 + x, 5 + y, 0, 160, 192);
		gfx.PutPixel(8 + x, 5 + y, 0, 160, 192);
		gfx.PutPixel(2 + x, 6 + y, 0, 160, 192);
		gfx.PutPixel(3 + x, 6 + y, 0, 160, 192);
		gfx.PutPixel(5 + x, 6 + y, 0, 160, 192);
		gfx.PutPixel(6 + x, 6 + y, 0, 160, 192);
		gfx.PutPixel(8 + x, 6 + y, 0, 160, 192);
		gfx.PutPixel(9 + x, 6 + y, 0, 160, 192);
		gfx.PutPixel(0 + x, 7 + y, 0, 160, 192);
		gfx.PutPixel(1 + x, 7 + y, 0, 160, 192);
		gfx.PutPixel(10 + x, 7 + y, 0, 160, 192);
		gfx.PutPixel(11 + x, 7 + y, 0, 160, 192);
		break;
	case 3:
		gfx.PutPixel(2 + x, 0 + y, 0, 255, 0);
		gfx.PutPixel(8 + x, 0 + y, 0, 255, 0);
		gfx.PutPixel(3 + x, 1 + y, 0, 255, 0);
		gfx.PutPixel(7 + x, 1 + y, 0, 255, 0);
		gfx.PutPixel(2 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(3 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(4 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(5 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(6 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(7 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(8 + x, 2 + y, 0, 255, 0);
		gfx.PutPixel(1 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(2 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(4 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(5 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(6 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(8 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(9 + x, 3 + y, 0, 255, 0);
		gfx.PutPixel(0 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(1 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(2 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(3 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(4 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(5 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(6 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(7 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(8 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(9 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(10 + x, 4 + y, 0, 255, 0);
		gfx.PutPixel(0 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(2 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(3 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(4 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(5 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(6 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(7 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(8 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(10 + x, 5 + y, 0, 255, 0);
		gfx.PutPixel(0 + x, 6 + y, 0, 255, 0);
		gfx.PutPixel(2 + x, 6 + y, 0, 255, 0);
		gfx.PutPixel(8 + x, 6 + y, 0, 255, 0);
		gfx.PutPixel(10 + x, 6 + y, 0, 255, 0);
		gfx.PutPixel(3 + x, 7 + y, 0, 255, 0);
		gfx.PutPixel(4 + x, 7 + y, 0, 255, 0);
		gfx.PutPixel(6 + x, 7 + y, 0, 255, 0);
		gfx.PutPixel(7 + x, 7 + y, 0, 255, 0);

		break;
	case 4:
		gfx.PutPixel(2 + x, 0 + y, 255, 0, 0);
		gfx.PutPixel(9 + x, 0 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 1 + y, 255, 0, 0);
		gfx.PutPixel(3 + x, 1 + y, 255, 0, 0);
		gfx.PutPixel(8 + x, 1 + y, 255, 0, 0);
		gfx.PutPixel(11 + x, 1 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(2 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(3 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(4 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(5 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(6 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(7 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(8 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(9 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(11 + x, 2 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(1 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(2 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(4 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(5 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(6 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(7 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(9 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(10 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(11 + x, 3 + y, 255, 0, 0);
		gfx.PutPixel(0 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(1 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(2 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(3 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(4 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(5 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(6 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(7 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(8 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(9 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(10 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(11 + x, 4 + y, 255, 0, 0);
		gfx.PutPixel(1 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(2 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(3 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(4 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(5 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(6 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(7 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(8 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(9 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(10 + x, 5 + y, 255, 0, 0);
		gfx.PutPixel(2 + x, 6 + y, 255, 0, 0);
		gfx.PutPixel(9 + x, 6 + y, 255, 0, 0);
		gfx.PutPixel(1 + x, 7 + y, 255, 0, 0);
		gfx.PutPixel(10 + x, 7 + y, 255, 0, 0);
		break;
	}
}

void Alien::Update()
{
	if (direction == 0)
	{
		x = x + vx;
	}
	else
	{
		x = x - vx;
	}
}

void Alien::CheckPos()
{
	if (x > 770)
	{
		direction = 1;
		y += 20;
	}
}

void Alien::Destroy()
{
	destroyed = true;
}

int Alien::GetWidth()
{
	return width;
}

int Alien::GetHeight()
{
	return height;
}

void Alien::SetSprite(int sprite_in)
{
	switch (sprite_in)
	{
	case 1:
		sprite = 1;
		break;
	case 2:
		sprite = 2;
		break;
	case 3:
		sprite = 3;
		break;
	case 4:
		sprite = 4;
		break;
	}
}
