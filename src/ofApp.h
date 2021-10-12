#pragma once

#include "ofMain.h"
#include "Syst.h"
#include <iostream>

class ofApp : public ofBaseApp{

	Syst system;
	using Input = float;
	   
	public:
		void setup();
		void update();
		void draw();
};
