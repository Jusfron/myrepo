/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "Alien.h"
#include "Laser.h"
#include "Background.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
	alien0.x = 100;
	alien0.y = 100;
	alien0.sprite = 1;

	alien1.x = 120;
	alien1.y = 100;
	alien1.sprite = 2;

	alien2.x = 140;
	alien2.y = 100;
	alien2.sprite = 3;

	alien3.x = 160;
	alien3.y = 100;
	alien3.sprite = 4;

	turret.x = 390;
	turret.y = 300;
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	alien0.Update();
	alien1.Update();
	alien2.Update();
	alien3.Update();

	alien0.direction = UpdateAlienDirection(alien0.x, alien1.x, alien2.x, alien3.x, alien0.direction);
	alien1.direction = UpdateAlienDirection(alien0.x, alien1.x, alien2.x, alien3.x, alien0.direction);
	alien2.direction = UpdateAlienDirection(alien0.x, alien1.x, alien2.x, alien3.x, alien0.direction);
	alien3.direction = UpdateAlienDirection(alien0.x, alien1.x, alien2.x, alien3.x, alien0.direction);

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		turret.x = turret.x - turret.vx;
	}
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		turret.x = turret.x + turret.vx;
	}
	turret.ClampToScreen();

	if (wnd.kbd.KeyIsPressed(VK_SPACE))
	{
		laser0.Fire(turret.x);
	}
	laser0.Update();
	laser0.ClampToScreen();
	if (laser0.Impact(alien0.x, alien0.y, alien0.width, alien0.height) && laser0.exists && !alien0.destroyed)
	{
		alien0.destroyed = true;
		laser0.exists = false;
	}
	if (laser0.Impact(alien1.x, alien1.y, alien1.width, alien1.height) && laser0.exists && !alien1.destroyed)
	{
		alien1.destroyed = true;
		laser0.exists = false;
	}
	if (laser0.Impact(alien2.x, alien2.y, alien2.width, alien2.height) && laser0.exists && !alien2.destroyed)
	{
		alien2.destroyed = true;
		laser0.exists = false;
	}
	if (laser0.Impact(alien3.x, alien3.y, alien3.width, alien3.height) && laser0.exists && !alien3.destroyed)
	{
		alien3.destroyed = true;
		laser0.exists = false;
	}
}

int Game::UpdateAlienDirection(int Alien0X, int Alien1X, int Alien2X, int Alien3X, int direction)
{
	for (int i = 0; i < aliennum; ++i)
	{
		if ( alien[i].x)
	}
	if (Alien0X > 700 ||
		Alien1X > 700 ||
		Alien2X > 700 ||
		Alien3X > 700)
	{
		alien0.y += 2;
		alien1.y += 2;
		alien2.y += 2;
		alien3.y += 2;
		return 1;
	}
	else if (Alien0X < 100 ||
		Alien1X < 100 ||
		Alien2X < 100 ||
		Alien3X < 100)
	{
		alien0.y += 2;
		alien1.y += 2;
		alien2.y += 2;
		alien3.y += 2;
		return 0;
	}
	else
	{
		return direction;
	}
}


void Game::ComposeFrame()
{
	for (int i = 0; i < aliennum; ++i)
	{
		if (!alien[i].destroyed)
		{
			alien[i].Draw(gfx);
		}
	}

	turret.Draw(gfx);

	for (int i = 0; i < lasernum; ++i)
	{
		if (laser[i].exists)
		{
			laser[i].Draw(gfx);
		}
	}
}
