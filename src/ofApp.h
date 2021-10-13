#pragma once

#include "ofMain.h"
#include "Syst.h"
#include "MetaSystem.h"
#include <iostream>


class ofApp : public ofBaseApp {
    using Seed = float;

public:
    void setup();
    void update();
    void draw();

    MetaSystem metaSystem;
    Syst system;
};
