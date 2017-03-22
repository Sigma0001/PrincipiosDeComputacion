#pragma once
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"
#include "Vec3.h"
#include "Vec4.h"
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
		float cX, cY, mX,mY,mZ;

		Vec4 F1, F2, F3, F4, F5, F6;
		Vec4 R1, R2, R3, R4, R5, R6;
		Vec4 B1, B2, B3, B4, B5, B6;
		Vec4 L1, L2, L3, L4, L5, L6;
		Vec4 T1, T2, T3, T4, T5, T6;
		Vec4 Bo1, Bo2, Bo3, Bo4, Bo5, Bo6;

		int level;
		void moveTo(const float x, const float y);
		void lineTo(const int x, const int y);
		void poligon(const float cX, const float cY, const int radius, const int sides);

		//void triangle(const Vec3 & a, const Vec3 & b, const Vec3 & c);
		void ofApp::triangle(const Vec4 & a, const Vec4 & b, const Vec4 & c);
};
