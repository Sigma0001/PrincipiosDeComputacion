#include "ofApp.h"
#include "PuntoMedio.h"
#include "ofMain.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){




}

//--------------------------------------------------------------
void ofApp::draw(){

	float Nx = rand() % 1025;
	float Ny = rand() % 769;
	
	line.drawLine(1024 / 2, 768 / 2, mouseX, mouseY);
	line.drawLine(1024 / 2, 768 / 2, -mouseX+ 1024, -mouseY + 768 );
	line.drawLine(1024 / 2, 768 / 2, mouseX , -mouseY + 768);
	line.drawLine(1024 / 2, 768 / 2, -mouseX + 1024, mouseY);

	line.drawLine(1024 / 2, 768 / 2, Nx, Ny);
	line.drawLine(1024 / 2, 768 / 2, -Nx + 1024, -Ny + 768);
	line.drawLine(1024 / 2, 768 / 2, Nx, -Ny + 768);
	line.drawLine(1024 / 2, 768 / 2, -Nx + 1024, Ny);
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
