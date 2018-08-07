#include "ofApp.h"

void ofApp::cubeSetup(){
	if(key2){
		cubePadding.set("cube padding", 10, 0, 20);
		sideNumb.set("per side", 10, 0, 100);
		cubeRall.set("wave vel", 0.025, 0.001, 0.5);
		cubePanel.add(cubePadding, sideNumb, cubeRall);
	}
};

// --------------------------------------------------------------

void ofApp::cubeUpdate(){

};

// --------------------------------------------------------------

void ofApp::cubeDraw(){
	ofSetColor(125, 200, 100);
	ofNoFill();

	ofPushMatrix();
	 	ofTranslate(ofGetWidth() / 2,  ofGetHeight() / 2);
		ofRotateXDeg(mouseX / 4);
		ofRotateYDeg(mouseY / 4);

		float windowPadding = 40;
		float windowSide = ofGetWidth() - windowPadding;
		float side = (windowSide / sideNumb) - (cubePadding - 2);
		float cubeTime = ofGetFrameNum() * cubeRall;

		for (int x = 0; x < sideNumb; ++x){
			for (int y = 0; y < sideNumb; ++y){
				float posX = (windowSide / sideNumb) * x + (side / 2) + (windowPadding / 2) - (ofGetWidth() / 2);
				float posY = (windowSide / sideNumb) * y + (side / 2) + (windowPadding / 2) - (ofGetWidth() / 2);
				
				float waveX = ofMap(sin(x + cubeTime), -1, 1, 0, 40);
				float waveY = ofMap(sin(y + cubeTime), -1, 1, 0, 40);
				float waveCombo = waveX;
				float wave = ofMap(waveCombo, 0, 40, side / 4, side);
				ofDrawBox(posX, posY, -100, wave);
			}
		}
	ofPopMatrix();
};

// --------------------------------------------------------------
