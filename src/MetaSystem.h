#pragma once
#include <functional>
#include "ofMain.h"

class MetaSystem {
public:
    using Seed = float;

    inline void setMetaOutput(std::function<void(Seed)>& _metaOutput) { metaOutput = _metaOutput; }

    std::function<void(Seed)> metaOutput;
};