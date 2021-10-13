#pragma once
#include "ofMain.h"
#include "./MetaSystem.h"

class Syst {
public:
    using Seed = float;

    // no need to specify any constructor; the compiler will supply a default one

    inline void setMetaOutput(std::function<void(Seed)>& _metaOutput) { metaOutput = _metaOutput; }
    inline void setSeed(Seed _seed) { seed = _seed; }
    void setupFromMetaSystem(MetaSystem& metaSys, Seed s) {
        metaOutput = metaSys.metaOutput;
        seed = s;
    }

    std::function<void(Seed)> metaOutput;
    Seed seed;
    const std::function<void()> output = [this]() {metaOutput(seed); };
};
