#include "PuntoMedio.h"

void PuntoMedio::NewClear()
{

	pixel._img.allocate(1024, 768, ofImageType::OF_IMAGE_COLOR_ALPHA);

	pixel.clear(ofColor::black);
}



void PuntoMedio::drawLine(int x1, int y1, int x2, int y2) {


	dx = x2 - x1;
	dy = y2 - y1;

	dOld = 0;

	y = y1;
	x = x1;

	

	if (y2 >= y1 && x2 >= x1)
	{

		if (dx> dy)
		{
			for (int x = x1; x <= x2; x++)
			{
				pixel.putpixel(x, y, ofColor::green);
			
				if (dOld > 0) {
					dOld = dOld + dy - dx;
					y++;
				}
				else dOld = dOld + dy;
			}
		}

		else if (dx <= dy)
		{
			for (int y = y1; y <= y2; y++)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld > 0)
				{
					dOld = dOld + dx - dy;
					x++;
				}
				else dOld = dOld + dx;
			}
		}
	}
	else if (y2 >= y1 && x2 < x1)
	{

		if (dx > dy *-1)
		{
			for (int y = y1; y <= y2; y++)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld < 0)
				{
					dOld = dOld + dx - dy * -1;
					x--;
				}
				else dOld = dOld + dx;
			}
		}
		else if (dx <= dy *-1)
		{

			for (int x = x1; x >= x2; x--)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld < 0)
				{
					dOld = dOld - dy - dx;
					y++;
				}
				else dOld = dOld - dy;
			}
		}
	}
	else if (y2 < y1 && x2 <= x1)
	{

		if (dx < dy) {
			for (int x = x1; x >= x2; x--)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld < 0)
				{
					dOld = dOld + dy - dx;
					y--;
				}
				else dOld = dOld + dy;
			}
		}

		else if (dx >= dy)
		{
			for (int y = y1; y >= y2; y--)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld < 0)
				{
					dOld = dOld + dx - dy;
					x--;
				}
				else dOld = dOld + dx;
			}
		}
	}
	else if (y2 < y1 && x2 > x1)
	{

		if (dx *-1 > dy)
		{
			for (int y = y1; y >= y2; y--)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld > 0)
				{
					dOld = dOld + dx - dy*-1;
					x++;
				}
				else dOld = dOld + dx;
			}
		}

		else if (dx *-1 <= dy)
		{
			for (int x = x1; x <= x2; x++)
			{
				pixel.putpixel(x, y, ofColor::green);
				
				if (dOld > 0)
				{
					dOld = dOld - dy - dx;
					y--;
				}
				else dOld = dOld - dy;
			}
		}
	}
}
