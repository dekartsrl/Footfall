#include "ofMain.h"
#include "ofApp.h"
//========================================================================
int main( ){

	ofSetLogLevel(OF_LOG_VERBOSE);
	/* ofSetupOpenGL(1024, 768, OF_FULLSCREEN); */
	// comment next line and uncomment previous to get fullscreen video
	ofSetupOpenGL(640,240, OF_WINDOW);// <-------- setup the GL context
	ofRunApp( new ofApp());

}
