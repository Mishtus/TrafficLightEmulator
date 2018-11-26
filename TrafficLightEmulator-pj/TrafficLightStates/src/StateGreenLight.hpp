#ifndef TRAFFICLIGHTEMULATOR_STATEGREENLIGHT_HPP
#define TRAFFICLIGHTEMULATOR_STATEGREENLIGHT_HPP

#include "AbstractState.hpp"

class StateGreenLight : public AbstractState {
public:
    StateGreenLight(TrafficLightFSM* context);

    virtual void drawTrafficLight();

    virtual void lightSwitching();
    virtual void lightPause();
    virtual void lightStart();
    virtual void lightExit();
};


#endif
