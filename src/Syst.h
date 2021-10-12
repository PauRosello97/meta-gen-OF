#pragma once
#include "ofMain.h"
#include <functional>

using namespace std;

class Syst {

public:
	using Input = float;

	std::function<void(Input)> metaOutput;
	std::function<void()> output;
	Input input;

	Syst(std::function<void(Input)> _metaOutput, Input _input) {
		metaOutput = _metaOutput;
		input = _input;

		output = [&]() {
			metaOutput(input);
		};
	}

	Syst(){}
};