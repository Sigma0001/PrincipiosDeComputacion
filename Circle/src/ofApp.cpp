#include "ofApp.h"
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"

//--------------------------------------------------------------
void ofApp::setup(){

	circle._img.allocate(1024, 768, ofImageType::OF_IMAGE_COLOR_ALPHA); //NewClear
	circle.clear(ofColor::black);										//NewClear

	mx = 1024 / 2;
	my = 768 / 2;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	drawCircle(360, 360, 100);
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
void ofApp::drawCircle(int centerX, int centerY, int R) {

	int x = 0;
	int y = R;
	float d = 5 / 4 - R;

	while (x <= y)
	{
		circle.putpixel( x + centerX, y + centerY  , ofColor::green );
		circle.putpixel( -x + centerX, y + centerY , ofColor::green );
		circle.putpixel( x + centerX, -y + centerY , ofColor::green );
		circle.putpixel( -x + centerX, -y + centerY, ofColor::green );
		circle.putpixel( y + centerY, x + centerX  , ofColor::green );
		circle.putpixel( -y + centerY, x + centerX , ofColor::green );
		circle.putpixel( y + centerY, -x + centerX , ofColor::green );
		circle.putpixel( -y + centerY, -x + centerX, ofColor::green );

		if (d < 0)
		{
			++x;
			d = d + 2 * x + 3;
		}
		else
		{
			++x;
			--y;
			d = d + 2 * x - 2 * y + 5;
		}

	}

}