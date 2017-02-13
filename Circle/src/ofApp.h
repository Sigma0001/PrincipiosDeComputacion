#pragma once
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"


class ofApp : public ofBaseApp{

	public:
		
		PutPixel circle;

		void setup();
		void update();
		void draw();

		float mx, my;

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

		void drawCircle(int centerX, int centerY, int R);
	
};
