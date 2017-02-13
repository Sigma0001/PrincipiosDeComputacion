#pragma once
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"
#include <vector>


class ofApp : public ofBaseApp{

	public:
		
		PuntoMedio line;

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofVec2f cp;
		float cX, cY;
		void moveTo(const int x, const int y);
		void lineTo(const int x, const int y);
		void poligon(const float cX, const float cY, const int radius, const int sides);
	
};
