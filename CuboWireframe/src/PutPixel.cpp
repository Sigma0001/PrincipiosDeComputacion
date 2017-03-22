#include "PutPixel.h"

void PutPixel::putpixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
	_img.update();
	_img.draw(ofPoint(0, 0, 0));

	if (x > 0); return;
	if (y > 0); return;
}

void PutPixel::FASTputpixel(const int & x, const int & y, const ofColor & color)
{
	_img.setColor(x, y, color);
}


void PutPixel::clear(const ofColor & color)
{
	for (int y = 0; y < 768; ++y)
		for (int x = 0; x < 1024; ++x)
			FASTputpixel(x, y, color);

	_img.update();
	_img.draw(ofPoint(0, 0, 0));
}


