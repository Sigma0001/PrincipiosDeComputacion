#pragma once
#include "ofMain.h"

class PutPixel {
public:
	void putpixel(const int& x, const int& y, const ofColor& color);
	void clear(const ofColor& color);
	


	ofImage _img;
	void FASTputpixel(const int& x, const int& y, const ofColor& color);

};