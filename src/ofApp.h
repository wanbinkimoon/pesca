#pragma once

#include "ofMain.h"
#include "ofxGuiExtended.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		vector <float> sineH;
		float sine;

		void sineSetup();
		void sineUpdate();
		void sineDraw();

		ofParameter<int> line;
		ofParameter<int> colorMultiplier;
		ofParameter<float> step;
		ofxGui sinePanel;

		void cubeSetup();
		void cubeUpdate();
		void cubeDraw();

		ofParameter<int> cubePadding;
		ofParameter<int> sideNumb;
		ofParameter<float> cubeRall;
		ofParameter<bool> rotateScene;
		ofParameter<bool> multiCube;
		ofParameter<bool> horizWave;
		ofxGui cubePanel;

		// line to past in your ofApp.h
		static const int keyNumb = 10;		
		bool keyValue [keyNumb];
		bool keyRadioValue = true;
		void keyLab(int key);

		void keyPanelSetup();
		void keyPanelUpdate();
		void keyPanelDraw();

		ofParameter<bool> key1;
		ofParameter<bool> key2;
		ofParameter<bool> key3;
		ofParameter<bool> key4;
		ofParameter<bool> key5;
		ofParameter<bool> key6;
		ofParameter<bool> key7;
		ofParameter<bool> key8;
		ofParameter<bool> key9;
		ofParameter<bool> key0;
		ofParameter<bool> keyAsRadio;
		ofxGui keyPanel;
};
