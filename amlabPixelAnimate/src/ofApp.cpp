#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);
	ofSetFrameRate(30);
	ofSetVerticalSync(true);
	logo.load("ershou_logo.png");
	pixels = logo.getPixels();
	
	fbo.allocate(renderW,renderH,GL_RGBA);

}

//--------------------------------------------------------------
void ofApp::update(){
//	ofPixels & pixels = logo.getPixels();
//	videoTexture.loadData(pixels);
}

//--------------------------------------------------------------
void ofApp::draw(){
	fbo.begin();
	
	// black background
	ofBackground(0);
	
	// even points can overlap with each other, let's avoid that
	cam.begin();
	ofScale(1,-1,1); // flip the y axis and zoom in a bit
	//	ofRotateY(90);
	ofTranslate(-renderW / 2, -renderH / 2);
	//	mesh.draw();
	
	cam.end();
	
	fbo.end();
	
	textureSyphonServer.publishTexture(&fbo.getTexture());
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
