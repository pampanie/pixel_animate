#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	logo.load("ershou_logo.png");
}

//--------------------------------------------------------------
void ofApp::update(){
	ofPixels & pixels = logo.getPixels();
	videoTexture.loadData(pixels);
}

//--------------------------------------------------------------
void ofApp::draw(){
//	logo.draw(0,0);
	mainOutputSyphonServer.publishTexture(&videoTexture);

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
