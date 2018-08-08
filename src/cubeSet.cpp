#include "ofApp.h"

void ofApp::cubeSetup(){
	if(key2){
		cubePadding.set("cube padding", 10, 0, 20);
		sideNumb.set("per side", 10, 0, 100);
		cubeRall.set("wave vel", 0.025, 0.001, 0.5);
		rotateScene.set("rotate", false);
		multiCube.set("multi cubes", false);
		horizWave.set("horizontal wave", false);
		cubePanel.add(cubePadding, sideNumb, cubeRall, rotateScene, multiCube, horizWave);
	}
};

// --------------------------------------------------------------

void ofApp::cubeUpdate(){

};

// --------------------------------------------------------------

void ofApp::cubeDraw(){



	ofPushMatrix();
	 	ofTranslate(ofGetWidth() / 2,  ofGetHeight() / 2);
	 	if(rotateScene) {
			ofRotateXDeg(mouseX / 20);
			ofRotateYDeg(mouseY / 20);
	 	}

		float windowPadding = 40;
		float windowSide = ofGetWidth() - windowPadding;
		float side = (windowSide / sideNumb) - (cubePadding - 2);
		float cubeTime = ofGetFrameNum() * cubeRall;

		for (int x = 0; x < sideNumb; ++x){


			for (int y = 0; y < sideNumb; ++y){
				float posX = (windowSide / sideNumb) * x + (side / 2) + (windowPadding / 2) - (ofGetWidth() / 2);
				float posY = (windowSide / sideNumb) * y + (side / 2) + (windowPadding / 2) - (ofGetWidth() / 2);
				
				float waveX = ofMap(sin(x + cubeTime), 1, -1, 0, 40);
				float waveY = ofMap(sin(y + cubeTime), 1, -1, 0, 40);
				float waveCombo = waveX + waveY;
				float waveSelector = horizWave ? waveCombo : waveX;
				float waveMax = horizWave ? 80 : 40;
				float wave = ofMap(waveSelector, 0, waveMax, side / 4, side);

				int cubeR = 100 + (((int)wave * 10) % 20);
				int cubeG = 40;
				int cubeB = 150 + ((int)wave % 100);
				ofSetLineWidth(1);
				ofNoFill(); ofSetColor(cubeR, cubeG, cubeB);
				ofDrawBox(posX, posY, -100, wave);

				if(multiCube) {
					int cubeRTwo = 80 + (int)wave;
					int cubeGTwo = 200 + (int)wave;
					int cubeBTwo = 50;
					ofSetColor(cubeRTwo, cubeGTwo, cubeBTwo);
					ofDrawBox(posX, posY, -100, wave - (wave / 2));

					int cubeRThree = 200 + ((int)wave % 20);
					int cubeGThree = 50 + (int)wave;
					int cubeBThree = 50;
					ofSetColor(cubeRThree, cubeGThree, cubeBThree);
					ofDrawBox(posX, posY, -100, wave - (wave / 4));
				}
			}
		}
	ofPopMatrix();
};

// --------------------------------------------------------------
