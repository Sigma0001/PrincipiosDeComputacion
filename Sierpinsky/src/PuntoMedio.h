#pragma once
#include "ofGraphics.h"									 
#include "PutPixel.h"	


using namespace std;

class PuntoMedio {
public:

	PutPixel pixel;

	int dx, dy, y, x;
	int dOld;
	void drawLine(int x1, int y1, int x2, int y2);
	void NewClear();

};
