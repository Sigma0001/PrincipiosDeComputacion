#include "ofApp.h"
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"
#include "Matrix3.h"
#include <iostream>

using namespace std;


//--------------------------------------------------------------
void ofApp::setup(){

	line.NewClear();

	cX = 512.0f;
	cY = 384.0f;

	T1 = {-86.6f+512.0f,50.0f+384.0f,0.0f};
	T2 = {86.6f + 512.0f,50.0f + 384.0f,0.0f };
	T3 = {512.0f,-100.0f+384.0f,0.0f};


	C = { 512.0f,384.0f,0.0f};
	mC = { -512.0f,-384.0f,0.0f };

	X1 = { 1.0f,0.0f,0.0f };

	level = 0;

	ang = 60.0f;

	SGasket(T1,T2,T3,level);
}

//--------------------------------------------------------------
void ofApp::update(){
	
		Matrix3 m1;
		Matrix3 m2;
		Matrix3 m3;

		//m1 = Matrix3::Translate(mC);
		//m1 = Matrix3::mult(Matrix3::rotate(ang++), m1);
		//m1 = Matrix3::mult(Matrix3::Translate(C), m1);

		m1 = Matrix3::Identity();
		//m2 = Matrix3::Translate(X1);
		//m3 = Matrix3::mult(m1, m3);
		
		for (int i = 0; i < vect.size(); ++i)
		{
			Vec3 v = m1 * vect[i];
			//Vec3 v = Matrix3::VecMult(m1, vect[i]);

			rot.push_back(v);
		}	

}

//--------------------------------------------------------------
void ofApp::draw(){
	
		for (int j = 0; j < rot.size(); j += 3)
		{
			triangle(rot[j], rot[j + 1], rot[j + 2]);
		}

		ofDrawLine(0,0,1024,768);
		ofDrawLine(1024, 0, 0, 768);
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
void ofApp::moveTo(const int x, const int y) {
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
void ofApp::triangle(const Vec3 & a, const Vec3 & b, const Vec3 & c) {
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
