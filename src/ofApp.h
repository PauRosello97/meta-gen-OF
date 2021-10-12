#pragma once

#include "ofMain.h"
#include "Syst.h"
#include <iostream>


class ofApp : public ofBaseApp {
    using Input = float;

public:
    void setup();
    void update();
    void draw();


    Syst system;
};
