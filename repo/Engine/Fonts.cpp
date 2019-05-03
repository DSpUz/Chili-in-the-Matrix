#pragma once
#include "Fonts.h"

/* PIXEL FONT FUNCTIONS------------------------------------------
----------------------------------------------------------------*/


 PixelFont::PixelFont(int in_x, int in_y, int char_nr, Color col)
	 :
 x (in_x),
 y (in_y),
 char_case_nr(char_nr),
 c (col)
 {
}

int PixelFont::GetX()
{
	return x;
}

int PixelFont::GetY()
{
	return y;
}

int PixelFont::GetCharNr()
{
	return char_case_nr;
}

void PixelFont::SetX(int x_pos)
{
	x = x_pos;
}



void PixelFont::SetY(int ypos)
{
	y = ypos;
}

void PixelFont::Draw(Graphics& gfx) const
{
	switch (char_case_nr)
	{
	case 0: // A
		DrawBlock(gfx,x + 6, y, c);

		DrawBlock(gfx,x + 3, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 3, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 1: // B	
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 2: //C
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 3: //D
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 9, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		break;
	case 4: //E
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 5: //F
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		break;
	case 6: //G
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 7://H
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 8: //I
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x + 6, y + 3, c);

		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 6, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 9: //J
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x + 6, y + 3, c);

		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 6, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		break;
	case 10: //K
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 9, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 11: //L
		DrawBlock(gfx,x, y, c);

		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 12: //M
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 3, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 13: //N
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 3, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 14: //O
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 15: //P
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		break;
	case 16: //Q
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 9, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 17: //R
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 18: //S
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 19: //T
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x + 6, y + 3, c);

		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 6, y + 12, c);

		DrawBlock(gfx,x + 6, y + 15, c);
		break;
	case 20: //U
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 21: //V
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x + 3, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);

		DrawBlock(gfx,x + 3, y + 12, c);
		DrawBlock(gfx,x + 9, y + 12, c);

		DrawBlock(gfx,x + 6, y + 15, c);
		break;
	case 22: //W
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 6, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 23: // X
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x + 3, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);

		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 3, y + 12, c);
		DrawBlock(gfx,x + 9, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 24: //Y
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 6, y + 12, c);

		DrawBlock(gfx,x + 6, y + 15, c);
		break;
	case 25: //Z
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 3, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 26: // 0
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 3, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 27: // 1
		DrawBlock(gfx,x + 6, y, c);

		DrawBlock(gfx,x + 3, y + 3, c);
		DrawBlock(gfx,x + 6, y + 3, c);

		DrawBlock(gfx,x + 6, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 6, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 28: //2
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x + 3, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		DrawBlock(gfx,x + 12, y + 15, c);
		break;
	case 29: //3
		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x + 12, y + 12, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 30: // 4
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x + 6, y + 3, c);
		DrawBlock(gfx,x + 9, y + 3, c);

		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 3, y + 12, c);
		DrawBlock(gfx,x + 6, y + 12, c);
		DrawBlock(gfx,x + 9, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 31: // 5
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);


		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 32: // 6
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x + 3, y + 3, c);


		DrawBlock(gfx,x, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 3, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 33: // 7
		DrawBlock(gfx,x, y, c);
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);
		DrawBlock(gfx,x + 12, y, c);

		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 3, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		break;
	case 34: // 8
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 3, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 9, y + 15, c);
		break;
	case 35: // 9
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 3, y + 9, c);
		DrawBlock(gfx,x + 6, y + 9, c);
		DrawBlock(gfx,x + 9, y + 9, c);
		DrawBlock(gfx,x + 12, y + 6, c);

		DrawBlock(gfx,x + 12, y + 9, c);

		DrawBlock(gfx,x + 12, y + 12, c);

		DrawBlock(gfx,x + 9, y + 15, c);
		DrawBlock(gfx,x + 6, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		break;
	case 36: // .
		DrawBlock(gfx,x, y + 12, c);
		DrawBlock(gfx,x + 3, y + 12, c);
		DrawBlock(gfx,x, y + 15, c);
		DrawBlock(gfx,x + 3, y + 15, c);
		break;
	case 37: // ,
		DrawBlock(gfx,x, y + 9, c);
		DrawBlock(gfx,x + 3, y + 9, c);
		DrawBlock(gfx,x + 3, y + 12, c);
		DrawBlock(gfx,x, y + 15, c);
		break;
	case 38: // '
		DrawBlock(gfx,x, y, c);

		DrawBlock(gfx,x, y + 3, c);
		break;
	case 39: // !
		DrawBlock(gfx,x, y, c);

		DrawBlock(gfx,x, y + 3, c);

		DrawBlock(gfx,x, y + 6, c);

		DrawBlock(gfx,x, y + 9, c);

		DrawBlock(gfx,x, y + 15, c);
		break;
	case 40: // -
		DrawBlock(gfx,x, y + 6, c);
		DrawBlock(gfx,x + 3, y + 6, c);
		DrawBlock(gfx,x + 6, y + 6, c);
		break;
	case 41: // ?
		DrawBlock(gfx,x + 3, y, c);
		DrawBlock(gfx,x + 6, y, c);
		DrawBlock(gfx,x + 9, y, c);

		DrawBlock(gfx,x, y + 3, c);
		DrawBlock(gfx,x + 12, y + 3, c);

		DrawBlock(gfx,x + 9, y + 6, c);

		DrawBlock(gfx,x + 6, y + 9, c);

		DrawBlock(gfx,x + 6, y + 15, c);
	default:
		break;
	}
}

void PixelFont::DrawBlock(Graphics& gfx,int x, int y, Color c)const
/* Draws square 3x3 pixel block which all the pixel font characters
are made of */
{
	for (int xPos = x; xPos <= (x + 1); xPos++)
	{
		for (int yPos = y; yPos <= (y + 1); yPos++)
		{
			gfx.PutPixel(xPos, yPos, c);
		}
	}
}

