#pragma once
#include "Graphics.h"
#include "Colors.h"
#include <vector>
#include  "Fonts.h"


class head {
public:
	head(int x, int y, int w, int h, int size,int skip_coef, Color c);

	std::vector<int> HeadSectorDetection(int xchar, int ychar) const;
	bool OverlapDetection(int xcell, int ycell, int xchar, int ychar,int char_nr) const;
	bool InnerSectorOverlap(int xcell, int ycell, int xchar, int ychar, int sect_nr) const;
	int SectorDetection(int xcell, int ycell, int xchar,int ychar) const;
	void Draw(Graphics& gfx, std::vector<PixelFont> overlapping_characters[]) const;
	void DrawCell(Graphics& gfx, int posx, int posy,bool collision, Color c) const;
	void DrawLine(Graphics& gfx, int posx, int posy, int l,int spacing, std::vector<PixelFont> characters_in_sector) const;
	void DrawCol(Graphics& gfx, int posx, int posy, int h, int spacing, std::vector<PixelFont> characters_in_sector) const;
	void DrawSteepR(Graphics& gfx, float steep_x, int posx, int posy, int l, int spacing, std::vector<PixelFont> characters_in_sector) const;
private:
	int center_x;
	int center_y;
	int xdim;
	int ydim;
	int s;
	int spacing;
	Color col;

};