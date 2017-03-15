#pragma once
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"
#include "Vec3.h"
#include <vector>
#include "Matrix3.h"


class ofApp : public ofBaseApp{

	public:
		
		PuntoMedio line;
		Vec3 mid;
		

		std::vector<Vec3> vect;
		std::vector<Vec3> rot;


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

		void SGasket(const Vec3&a, const Vec3&b, const Vec3&c, const int& level);

		ofVec2f cp;
		float cX, cY;
		Vec3 T1,T2,T3,C,mC;
		int level;
		void moveTo(const int x, const int y);
		void lineTo(const int x, const int y);
		void poligon(const float cX, const float cY, const int radius, const int sides);

		void triangle(const Vec3 & a, const Vec3 & b, const Vec3 & c);
	
};
