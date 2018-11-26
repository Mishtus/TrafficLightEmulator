#ifndef TRAFFICLIGHTEMULATOR_STATEREDLIGHT_HPP
#define TRAFFICLIGHTEMULATOR_STATEREDLIGHT_HPP

#include "AbstractState.hpp"

class StateRedLight : public AbstractState {
public:
    StateRedLight(TrafficLightFSM* context);

    virtual void drawTrafficLight();

    virtual void lightSwitching();
    virtual void lightPause();
    virtual void lightStart();
    virtual void lightExit();
};


#endif
