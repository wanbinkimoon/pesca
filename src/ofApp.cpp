#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowShape(1000, 1000);
	ofBackground(0);

	line.set("lines", 12, 0, 100);
	colorMultiplier.set("color multiplier", 10, 0, 100);
	step.set("distance", 2, 0, 100);
	
	keyPanel.add(line, colorMultiplier, step);
}

//--------------------------------------------------------------
void ofApp::update(){
	float rall = 0.05;
	sine = sin(ofGetFrameNum() * rall);
	sineH.push_back(sine);

	if(sineH.size() >= 400){
		sineH.erase(sineH.begin(), sineH.begin()+1);
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetLineWidth(3);

	int lines = line + 12;
	
	for (int i = 1; i < lines; ++i){
		ofBeginShape();
		
		float range = i * step;
		float maxRange = ofGetHeight() / lines;
		float diff = ofMap(range, step, step * lines, step, maxRange);

		int colosrDiff = i * colorMultiplier;
		int r = (245 + (colosrDiff / 2)) % 255;
		int g = (58 + colosrDiff) % 255;
		int b = (135 + colosrDiff) % 255;
		ofSetColor(r, g, b); ofNoFill();	
		
		for (unsigned int j = 0; j <= sineH.size(); j++){
			float rowX = ofMap(j, 0, sineH.size(), 0, ofGetWidth());
			float rowY = ofGetHeight() - ofMap(sineH[j], 0, 1, 0, diff) - ((ofGetHeight() / (lines - 12)) * i);
			float x = rowX;
			float y = rowY + ofNoise(2);
			ofVertex(x, y);
		}

	ofEndShape(false);
	}
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
