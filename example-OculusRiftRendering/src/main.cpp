#include "testApp.h"

//--------------------------------------------------------------
int main(){
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(1920, 1200, OF_FULLSCREEN);
	ofRunApp(new testApp()); // start the app
}
