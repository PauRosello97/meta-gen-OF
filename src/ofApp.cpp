#include "ofApp.h"

void ofApp::setup(){
	std::function<void(Input)> metaOutput = [](Input x) {
		cout << x << endl;
	};
	Syst syst = Syst(metaOutput, 10);
	system = syst;
	system.output();
}

void ofApp::update() {
	system.output();
}

void ofApp::draw(){
	//system.output();
}

