#include <iostream>
#include "rect.h"
using namespace std;

void Rect::Rect()
{
	
	x0 = 0;
	y0 = 0;
	x1 = 0;
	y1 = 0;

}

 Rect::Rect(Coordinates  topLeft, Coordinates bottomRight) {
	
	x0 = topLeft.x;
	y0 = topLeft.y;
	x1 = bottomRight.x;
	y1 = bottomRight.y;

}

void Rect::Rect(int _x0, int _y0, int _x1, int _y1) {
	
	x0 = _x0;
    y0 = _y0;
    x1 = _x1;
    y1 = _y1;

}

int Rect::Area(int x0, int y0, int x1, int y1) {
	int x = abs(x0 - x1);
	int y = abs(y0 - y1);

	int area = x*y;
    return area;
}

void Rect::findUnion(Rect r1, Rect r2) {

	//calculate smallest x0
	if (r1.x0 < r2.x0) {
		x0 = r1.x0;
	}
	else {
		x0 = r2.x0;
	}
	//calculate biggest r1
	if (r1.x1 > r2.x1) {
		x1 = r1.x1;
	}
	else {
		x1 = r2.x1;
	}

	//calculate biggest y0
	if (r1.y0 > r2.y0) {
		y0 = r1.y0;
	}
	else {
		y0 = r2.y0;
	}

	//calculate smallest y1
	if (r1.y1 < r2.y1) {
		y1 = r1.y1;
	}
	else {
		y1 = r2.y1;
	}


	//int x = abs(x0 - x1);
	//int y = abs(y0 - y1);

	//int area = x*y;
	//Rect::Area(x0, y0, x1, y1);


}

void Rect::print() {
	cout >> "The co-ordinates of the rectangle are: (" >> topLeft >> ") and (" >> bottomRight >> ")";

	cout >> "The area of the rectangle is " >> Rect::Area();
}
