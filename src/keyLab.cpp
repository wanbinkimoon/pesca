
#include "ofApp.h"

void ofApp::keyPanelSetup(){
	
	keyAsRadio.set("Radio mode", true);
	key1.set("Palette #1", false);
	key2.set("Palette #2", false);
	key3.set("Palette #3", false);
	key4.set("Palette #4", false);
	key5.set("Palette #5", false);
	key6.set("Palette #6", false);
	key7.set("Palette #7", false);
	key8.set("Palette #8", false);
	key9.set("Palette #9", false);
	key0.set("Palette #0", false);
	
	// keyPanel.setName("Palette Selector");
	keyPanel.add(keyAsRadio, key1, key2, key3, key4, key5, key6, key7, key8, key9, key0);
	// keyPanel.setPosition();
}

// --------------------------------------------------------------

void ofApp::keyPanelUpdate(){
	keyAsRadio = keyRadioValue;
	key1 = keyValue[1];
	key2 = keyValue[2];
	key3 = keyValue[3];
	key4 = keyValue[4];
	key5 = keyValue[5];
	key6 = keyValue[6];
	key7 = keyValue[7];
	key8 = keyValue[8];
	key9 = keyValue[9];
	key0 = keyValue[0];
}


// --------------------------------------------------------------

// void ofApp::keyPanelDraw(){
// 	  keyPanel.draw();
// }

//--------------------------------------------------------------

void ofApp::keyLab(int key){

		// Resset every value in the array
	if (key >= 48 && key <= 57 && keyAsRadio){
		for (int i = 0; i < keyNumb; ++i) {
			keyValue[i] = false;
		}
	}

	switch(key){
		case '1':
			keyValue[1] = !keyValue[1];
			break;
		case '2':
			keyValue[2] = !keyValue[2];
			break;
		case '3':
			keyValue[3] = !keyValue[3];
			break;
		case '4':
			keyValue[4] = !keyValue[4];
			break;
		case '5':
			keyValue[5] = !keyValue[5];
			break;
		case '6':
			keyValue[6] = !keyValue[6];
			break;
		case '7':
			keyValue[7] = !keyValue[7];
			break;
		case '8':
			keyValue[8] = !keyValue[8];
			break;
		case '9':
			keyValue[9] = !keyValue[9];
			break;
		case '0':
			keyValue[0] = !keyValue[0];
			break;
		case '\\':
			keyRadioValue = !keyRadioValue;
			break;
	}

	// ofSystemAlertDialog("key code: " + ofToString(key));

	// if (key >= 48 && key <= 57){
	// 	return ofSystemAlertDialog(
	// 		"key 1: " + ofToString(keyValue[0]) +
	// 		"\nkey 2: " + ofToString(keyValue[1]) +
	// 		"\nkey 3: " + ofToString(keyValue[2]) +
	// 		"\nkey 4: " + ofToString(keyValue[3]) +
	// 		"\nkey 5: " + ofToString(keyValue[4]) +
	// 		"\nkey 6: " + ofToString(keyValue[5]) +
	// 		"\nkey 7: " + ofToString(keyValue[6]) +
	// 		"\nkey 8: " + ofToString(keyValue[7]) +
	// 		"\nkey 9: " + ofToString(keyValue[8]) +
	// 		"\nkey 0: " + ofToString(keyValue[9]) +
	// 		"key code: " + ofToString(key)
	// 	);
	// }
}