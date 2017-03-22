#include "ofApp.h"
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"
#include "Matrix3.h"
#include <iostream>

using namespace std;


//--------------------------------------------------------------
void ofApp::setup() {

	line.NewClear();

	cX = 512.0f;
	cY = 384.0f;
		
	mX	=  20.0f;
	mY	=  20.0f;
	mZ	=  20.0f;

	//Front
	F1 = { -mX +512.0f,mY + 384.0f, mZ, 1.0f };
	F2 = { -mX + 512.0f, mY + 384.0f, mZ, 1.0f };
	F3 = { mX + 512.0f, mY + 384.0f, mZ, 1.0f };

	F4 = { mX + 512.0f, mY + 384.0f, mZ, 1.0f };
	F5 = { mX + 512.0f, mY + 384.0f, mZ, 1.0f };
	F6 = { mX + 512.0f, mY + 384.0f, mZ, 1.0f };

	//Right
	R1 = { -mX + 512.0f, mY + 384.0f, mZ, 1.0f };
	R2 = { -mX + 512.0f, -mY + 384.0f,mZ, 1.0f };
	R3 = { -mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
			
	R4 = { -mX + 512.0f, mY + 384.0f, mZ, 1.0f };
	R5 = { -mX + 512.0f, mY + 384.0f, -mZ, 1.0f };
	R6 = { -mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };

	//Back
	B1 = { mX + 512.0f, mY + 384.0f, -mZ, 1.0f };
	B2 = { mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
	B3 = { -mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
	
	B4 = { -mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
	B5 = { -mX + 512.0f, mY + 384.0f, -mZ, 1.0f };
	B6 = { mX + 512.0f, mY + 384.0f, -mZ, 1.0f };

	//Left
	L1 = { mX + 512.0f,mY + 384.0f, mZ, 1.0f };
	L2 = { mX + 512.0f, -mY + 384.0f, mZ, 1.0f };
	L3 = { mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
		   
	L4 = { mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
	L5 = { mX + 512.0f, mY + 384.0f, -mZ, 1.0f };
	L6 = { mX + 512.0f, mY + 384.0f, mZ, 1.0f };

	//Top
	T1 = { mX + 512.0f, mY+ 384.0f,  mZ, 1.0f };
	T2 = { mX + 512.0f, mY+ 384.0f, -mZ, 1.0f };
	T3 = { -mX + 512.0f,mY + 384.0f, -mZ, 1.0f };
	
	T4 = { mX + 512.0f, mY+ 384.0f,  mZ, 1.0f };
	T5 = { -mX + 512.0f,mY + 384.0f,  mZ, 1.0f };
	T6 = { -mX + 512.0f,mY + 384.0f, -mZ, 1.0f };


	//Bottom
	Bo1 = { mX + 512.0f, -mY + 384.0f, mZ, 1.0f };
	Bo2 = { mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
	Bo3 = { -mX + 512.0f, -mY + 384.0f, -mZ, 1.0f };
	
	Bo4 = { -mX+ 512.0f, -mY + 384.0f, -mZ, 1.0f };
	Bo5 = { -mX+ 512.0f, -mY + 384.0f, mZ, 1.0f };
	Bo6 = { mX + 512.0f, -mY + 384.0f, mZ, 1.0f };



}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
	//Front
	triangle(F1 ,F2 ,F3 );
	triangle(F4 ,F5 ,F6 );

	//Right
	triangle(R1, R2, R3);
	triangle(R4, R5, R6);

	//Back
	triangle(B1, B2, B3);
	triangle(B4, B5, B6);

	//Left
	triangle(L1, L2, L3);
	triangle(L4, L5, L6);

	//Top
	triangle(T1, T2, T3);
	triangle(T4, T5, T6);

	//Bottom
	triangle(Bo1, Bo2, Bo3);
	triangle(Bo4, Bo5, Bo6);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
void ofApp::moveTo(const float x, const float y) {
	cp.set(x, y);
}

//--------------------------------------------------------------
void ofApp::lineTo(const int x, const int y) {
	line.drawLine(cp.x, cp.y, x, y);
	cp.set(x, y);

}

//--------------------------------------------------------------
void ofApp::poligon(const float cX, const float cY, const int radius, const int sides) {
	cp.set(cX, cY);
	float alfa = PI * 2 / sides;
	float angle = 360 / sides;

	moveTo(cp.x + (radius * cos(alfa + angle)), cp.y + (radius * sin(alfa + angle)));

	for (int i = 1; i <= sides + 1; i++) {
		lineTo(cp.x + (radius * cos(i*alfa + angle)), cp.y + (radius * sin(i*alfa + angle)));
	}
}

//--------------------------------------------------------------
void ofApp::triangle(const Vec4 & a, const Vec4 & b, const Vec4 & c) {
	moveTo(a.x, a.y);
	lineTo(b.x, b.y);
	lineTo(c.x, c.y);
	lineTo(a.x, a.y);
}

//--------------------------------------------------------------

void ofApp::SGasket(const Vec3 & a, const Vec3 & b, const Vec3 & c, const int & level)
{

	if (level == 0)
	{
		//triangle(a, b, c);

		vect.push_back(a);
		vect.push_back(b);
		vect.push_back(c);
	}
	else
	{
		Vec3 ab = mid.midpoint(a, b);
		Vec3 bc = mid.midpoint(b, c);
		Vec3 ca = mid.midpoint(c, a);

	    SGasket(a, ab, ca, level - 1);
	    SGasket(ab, b, bc, level - 1);
	    SGasket(ca, bc, c, level - 1);
	}

	
}
