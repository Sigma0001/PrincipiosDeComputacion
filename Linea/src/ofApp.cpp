#include "ofApp.h"
#include "PuntoMedio.h"
#include "ofMain.h"
#include "PutPixel.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	line.NewClear();

//	pixel._img.allocate(1024, 768, ofImageType::OF_IMAGE_COLOR_ALPHA);

	//pixel.clear(ofColor::black);
}

//--------------------------------------------------------------
void ofApp::update(){




}

//--------------------------------------------------------------
void ofApp::draw(){
	/*
	float Nx = rand() % 1025;
	float Ny = rand() % 769;
	*/

	float xc = 1024 / 2;
	float yc = 768 / 2;
	int x0 = 0, y0 = 0;

	for (float angulo = 0; angulo < 360; ++angulo)
	{

		int x1 = 100 * cos(angulo * PI / 180.f);
		int y1 = 100 * sin(angulo * PI / 180.f);

		line.drawLine(x0 + xc, y0 + yc, x1 + xc, y1 + yc);

	}
	/*line.drawLine(1024 / 2, 768 / 2, -mouseX+ 1024, -mouseY + 768 );
	line.drawLine(1024 / 2, 768 / 2, mouseX , -mouseY + 768);
	line.drawLine(1024 / 2, 768 / 2, -mouseX + 1024, mouseY);

	line.drawLine(1024 / 2, 768 / 2, Nx, Ny);
	line.drawLine(1024 / 2, 768 / 2, -Nx + 1024, -Ny + 768);
	line.drawLine(1024 / 2, 768 / 2, Nx, -Ny + 768);
	line.drawLine(1024 / 2, 768 / 2, -Nx + 1024, Ny);*/
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
