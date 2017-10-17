#pragma once
#include "coordinates.h"
class Rect
{
	public
		int x0, y0, x1, y1;

	Rect();
	Rect(Coordinates  topLeft, Coordinates bottomRight);
	Rect(int x0, int y0, int x1, int y1);
	int Area(int x0, int y0, int x1, int y1);
	Rect findUnion(Rect r1, Rect r2);
	void print();
};