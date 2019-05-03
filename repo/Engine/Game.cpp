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


Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	head1(600, 450, 1, 1, 400, 1,lightgreen),
	darkgreen(0, 50, 0),
	lightgreen(0,200,0),
	perc(L"perc.wav"),
	strings(L"strings.wav"),
	so(L"so.wav")
{

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
	if (!keysPressedLastFrame) {
		if (wnd.kbd.KeyIsPressed(VK_SPACE)) {
			keysPressedLastFrame = true;
			playsolo = true;
		}
	}
	else  {
		keysPressedLastFrame = false;
	}

	/*----------------------MUSIC----------------------------*/
	if (playsolo) {	
		if (!sopl) {
			so.Play();
			sopl = true;
		}
		
		static float solo_timer = 0.0f;
		if ((solo_timer += deltaTime) > 34.0f)
		{
			playsolo = false;
			sopl = false;
			solo_timer = 0.0f;
		}
	}
	else {
		static float start_timer = 0.0f;
		if ((start_timer += deltaTime) > 7.999f)
		{
			startstrings = true;
		}
		static float timer_musicloop = 0.0f;
		if ((timer_musicloop += deltaTime) > 7.999f)
		{
			timer_musicloop = 0.0f;
			percpl = false;
			stringspl = false;
		}
		if (!percpl && !playsolo) {
			perc.Play();
			percpl = true;
		}
		if (!stringspl&&startstrings) {
			strings.Play();
			stringspl = true;
		}
	}
	/*----------------------MUSIC----------------------------*/
	static float timer_new_characters = 0.0f;
	if ((timer_new_characters += deltaTime) > 0.5f)
	{
		timer_new_characters = 0.0f;
		
			SpawnNewCharacters();

			for (size_t i = characters.size(); i < character_pos.size(); i++) {
				characters.emplace_back(int(character_pos[i].pos.x), int(character_pos[i].pos.y), randChar.Get<int>(0, 41), darkgreen);
			}
			
	}
	

	for (size_t i = 0; i < character_pos.size(); i++) {
		character_pos[i].Update(deltaTime);
		characters[i].SetX(int(character_pos[i].pos.x));
		characters[i].SetY(int(character_pos[i].pos.y));
	}
	for (int i = 0; i < 59; i++) {
		overlap_characters[i].clear();//clears all overlap character elements
	}
	for (int i = 0; i < character_pos.size(); i++)//was this the reason for not drawing sector 26?
	{

		if ((int)character_pos[i].pos.y >= gfx.ScreenHeight - 18) {
			character_pos.erase(character_pos.begin() + i);
			characters.erase(characters.begin() + i);
		}
		std::vector<int> head_sector_check = head1.HeadSectorDetection((int)character_pos[i].pos.x, (int)character_pos[i].pos.y);//declares a temporary vector for head sector detection
		for (int a = 0; a < head_sector_check.size(); a++) {//loops through detected sectors
			
			switch (head_sector_check[a]) { // pushes the values of particular characters in their sector
			case 0:
				overlap_characters[0].push_back(characters[i]);
				break;
			case 1:
				overlap_characters[1].push_back(characters[i]);
				break;
			case 2:
				overlap_characters[2].push_back(characters[i]);
				break;
			case 3:
				overlap_characters[3].push_back(characters[i]);
				break;
			case 4:
				overlap_characters[4].push_back(characters[i]);
				break;
			case 5:
				overlap_characters[5].push_back(characters[i]);
				break;
			case 6:
				overlap_characters[6].push_back(characters[i]);
				break;
			case 7:
				overlap_characters[7].push_back(characters[i]);
				break;
			case 8:
				overlap_characters[8].push_back(characters[i]);
				break;
			case 9:
				overlap_characters[9].push_back(characters[i]);
				break;
			case 10:
				overlap_characters[10].push_back(characters[i]);
				break;
			case 11:
				overlap_characters[11].push_back(characters[i]);
				break;
			case 12:
				overlap_characters[12].push_back(characters[i]);
				break;
			case 13:
				overlap_characters[13].push_back(characters[i]);
				break;
			case 14:
				overlap_characters[14].push_back(characters[i]);
				break;
			case 15:
				overlap_characters[15].push_back(characters[i]);
				break;
			case 16:
				overlap_characters[16].push_back(characters[i]);
				break;
			case 17:
				overlap_characters[17].push_back(characters[i]);
				break;
			case 18:
				overlap_characters[18].push_back(characters[i]);
				break;
			case 19:
				overlap_characters[19].push_back(characters[i]);
				break;
			case 20:
				overlap_characters[20].push_back(characters[i]);
				break;
			case 21:
				overlap_characters[21].push_back(characters[i]);
				break;
			case 22:
				overlap_characters[22].push_back(characters[i]);
				break;
			case 23:
				overlap_characters[23].push_back(characters[i]);
				break;
			case 24:
				overlap_characters[24].push_back(characters[i]);
				break;
			case 25:
				overlap_characters[25].push_back(characters[i]);
				break;
			case 26:
				overlap_characters[26].push_back(characters[i]);
				break;
			case 27:
				overlap_characters[27].push_back(characters[i]);
				break;
			case 28:
				overlap_characters[28].push_back(characters[i]);
				break;
			case 29:
				overlap_characters[29].push_back(characters[i]);
				break;
			case 30:
				overlap_characters[30].push_back(characters[i]);
				break;
			case 31:
				overlap_characters[31].push_back(characters[i]);
				break;
			case 32:
				overlap_characters[32].push_back(characters[i]);
				break;
			case 33:
				overlap_characters[33].push_back(characters[i]);
				break;
			case 34:
				overlap_characters[34].push_back(characters[i]);
				break;
			case 35:
				overlap_characters[35].push_back(characters[i]);
				break;
			case 36:
				overlap_characters[36].push_back(characters[i]);
				break;
			case 37:
				overlap_characters[37].push_back(characters[i]);
				break;
			case 38:
				overlap_characters[38].push_back(characters[i]);
				break;
			case 39:
				overlap_characters[39].push_back(characters[i]);
				break;
			case 40:
				overlap_characters[40].push_back(characters[i]);
				break;
			case 41:
				overlap_characters[41].push_back(characters[i]);
				break;
			case 42:
				overlap_characters[42].push_back(characters[i]);
				break;
			case 43:
				overlap_characters[43].push_back(characters[i]);
				break;
			case 44:
				overlap_characters[44].push_back(characters[i]);
				break;
			case 45:
				overlap_characters[45].push_back(characters[i]);
				break;
			case 46:
				overlap_characters[46].push_back(characters[i]);
				break;
			case 47:
				overlap_characters[47].push_back(characters[i]);
				break;
			case 48:
				overlap_characters[48].push_back(characters[i]);
				break;
			case 49:
				overlap_characters[49].push_back(characters[i]);
				break;
			case 50:
				overlap_characters[50].push_back(characters[i]);
				break;
			case 51:
				overlap_characters[51].push_back(characters[i]);
				break;
			case 52:
				overlap_characters[52].push_back(characters[i]);
				break;
			case 53:
				overlap_characters[53].push_back(characters[i]);
				break;
			case 54:
				overlap_characters[54].push_back(characters[i]);
				break;
			case 55:
				overlap_characters[55].push_back(characters[i]);
				break;
			case 56:
				overlap_characters[56].push_back(characters[i]);
				break;
			case 57:
				overlap_characters[57].push_back(characters[i]);
				break;
			case 58:
				overlap_characters[58].push_back(characters[i]);
				break;
			
			default:
				break;
			}
		}
	}

}

void Game::SpawnNewCharacters()//Former SpawnNewSnow
{
	RandomGenerator<std::mt19937> randG;
	std::vector<int> indices_x;
	
	for (int c = 0; c < 30; c++) // c is number of new characters
	{
		bool found = true;
		int randX;
		float randSpeed = randG.Get<float>(8.25f, 25.0f);
		while (found)
		{
		  randX = randG.Get<int>(0, Graphics::ScreenWidth-14);

		  //checks if any of the elements of indices_x equals new value of randX, if not it is then inserted into indices_x
		  auto& it = std::find(indices_x.begin(), indices_x.end(), randX);// searches for an element of equal value
		  if (it == indices_x.end())
		  {
			  found = false;
		  }
		}
		indices_x.push_back(randX);
		character_pos.emplace_back(Vec2f((float)randX,0.0f ), Vec2f( 0.0f,1.0f ), randSpeed);
	}
}
void Game::ComposeFrame()
{
	
	for (size_t i = 0; i < characters.size(); i++) {
		characters[i].Draw(gfx);
	}
	head1.Draw(gfx, overlap_characters);
	
	
}
