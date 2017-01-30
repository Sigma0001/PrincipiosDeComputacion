#pragma once
#include "ofGraphics.h"									 

using namespace std;

class PuntoMedio {
public:
	int dx, dy, y, x;
	int dOld;
	void drawLine(int x1, int y1, int x2, int y2);

};
