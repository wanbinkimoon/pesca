#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(1000, 1000);
	ofBackground(0);

	sineSetup();
	cubeSetup();
	keyPanelSetup();
}

//--------------------------------------------------------------
void ofApp::update(){
	sineUpdate();
	cubeUpdate();
	
	keyPanelUpdate();	
}

//--------------------------------------------------------------
void ofApp::draw(){
	if(key1) {
		sineDraw();
	}
	if(key2){
		cubeDraw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  keyLab(key);
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
