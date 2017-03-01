#include "ofApp.h"
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"


//--------------------------------------------------------------
void ofApp::setup(){
	
	line.NewClear();

	//cX = 1024 / 2;
	//cY = 768 / 2;
	cX = ofGetScreenWidth();
	cY = ofGetScreenHeight();

	T1 = { 200.0f , 650.0f , 0.0f };
	T2 = { 800.0f , 650.0f , 0.0f };
	T3 = { 500.0f , 100.0f , 0.0f };



	SGasket(T1, T2, T3, 5);

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){

	//SGasket(T1, T2, T3, 5);
	triangle(Va,Vb,Vc);
 
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

Vec3 ofApp::SGasket(const Vec3 & a, const Vec3 & b, const Vec3 & c, const int & level)
{

	if (level == 0)
	{
		triangle(a, b, c);
	}
	else
	{
		Vec3 ab = mid.midpoint(a, b);
		Vec3 bc = mid.midpoint(b, c);
		Vec3 ca = mid.midpoint(c, a);

		Va = SGasket(a, ab, ca, level - 1);
		Vb = SGasket(ab, b, bc, level - 1);
		Vc = SGasket(ca, bc, c, level - 1);
	}

	return (Va,Vb,Vc);
}

/*void ofApp::SGasket(const Vec3 & a, const Vec3 & b, const Vec3 & c, const int & level)
{
	if (level == 0)
	{
		triangle(a, b, c);
	}
	else
	{
		Vec3 ab = mid.midpoint(a, b);
		Vec3 bc = mid.midpoint(b, c);
		Vec3 ca = mid.midpoint(c, a);

		SGasket( a,	ab, ca, level - 1);
		SGasket(ab,  b, bc, level - 1);
		SGasket(ca, bc,  c, level - 1);
	}

}*/