#include "ofApp.h"

void ofApp::setup(){

    std::function<void(Seed)> tempMetaOutput = [](Seed x) {
        ofDrawBitmapString("seed: " + ofToString(x), ofGetWidth() / 2.f, ofGetHeight() / 2.f); 
        cout << "hi" << endl;
    };
    metaSystem.setMetaOutput(tempMetaOutput);
}

void ofApp::update() {
}

void ofApp::draw(){
    system.setupFromMetaSystem(metaSystem, 10.f);
    system.output();
}

