#include "ofApp.h"

void ofApp::setup(){
	std::function<void(Input)> tempMetaOutput = [](Input x) {
		ofDrawRectangle(100, 100, 100, 100);
	};
	system.setMetaOutput(tempMetaOutput);
	system.setInput(10.f);
	system.output();
}

void ofApp::update() {
}

void ofApp::draw(){
	system.output();
}

