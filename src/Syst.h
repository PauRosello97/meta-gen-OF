#pragma once
#include "ofMain.h"

class Syst {
public:
    using Input = float;
    // set the lambda output with the constructor, or inline  it and use a default constructor; could be const if its not going to change
    Syst() { output = [&]() {metaOutput(input); }; }
    // this should work OK with an argument by copy too (instead of by reference)
    inline void setMetaOutput(std::function<void(Input)>& _metaOutput) { metaOutput = _metaOutput; }
    inline void setInput(Input _input) { input = _input; }

    std::function<void()> output;

protected:
    std::function<void(Input)> metaOutput;
    Input input;
};