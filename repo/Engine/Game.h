/******************************************************************************************
 *	Chili DirectX Framework Version 16.07.20											  *
 *	Game.h																				  *
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
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include <vector>
#include "Character.h" //Former Shape.h split into Snow(Character.h) and Vec2f.h
#include "Fonts.h"
#include "ChilisHead.h"
#include "randomGenerator.h"
#include  "Sound.h"
class Game
{
public:
	Game(class MainWindow& wnd);
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();

	/********************************/
	/*  User Functions              */
	/********************************/
	void SpawnNewCharacters();/*Former SpawnNewSnow by MrGodin adapted
from his snow day program: https://forum.planetchili.net/viewtopic.php?f=3&t=3881 */
private:
	MainWindow& wnd;
	Graphics gfx;
	RandomGenerator<std::mt19937> randChar;
	Color darkgreen,lightgreen;
	std::vector<Character> character_pos;//former m_snow by MrGodin, contains x and y position of characters
	std::vector<PixelFont> characters;
	std::vector<PixelFont> overlap_characters[59];//creates an array of vectors containig pixel font characters for each of 59 head sectors(0 to 58)

	// pseudo frame timer
	const float deltaTime = 1.0f / 60.0f;
	int x_char, y_char;

	Sound perc, strings, so, ss;/*percussion,strings by danielray: https://forum.planetchili.net/viewtopic.php?f=3&t=4510,
	//also special thanks to Marioverehrer https://www.youtube.com/watch?v=FQsjoxtia8 for adaptation and https://www.nch.com.au/notation/index.html for their scoresheet program  */
	bool keysPressedLastFrame = false;
	bool playsolo = false;
	bool startstrings = false;
	bool percpl = false, stringspl = false, sopl = false;//audioplay variables 
	head head1;

	/********************************/
	/*  User Variables              */
	/********************************/
};
