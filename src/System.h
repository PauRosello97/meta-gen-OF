#pragma once

#pragma once

#include "ofMain.h"
#include <functional>

class Syst {

public:

	std::function<void(double)> output;

	Syst(function<void(double)> metaOutput){
		output = metaOutput;
	}

	Syst(){}

};


