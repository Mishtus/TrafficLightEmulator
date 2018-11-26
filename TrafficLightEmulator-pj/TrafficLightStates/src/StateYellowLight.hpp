#ifndef TRAFFICLIGHTEMULATOR_STATEYELLOWLIGHT_HPP
#define TRAFFICLIGHTEMULATOR_STATEYELLOWLIGHT_HPP

#include "AbstractState.hpp"

class StateYellowLight : public AbstractState {
public:
    StateYellowLight(TrafficLightFSM* context);

    virtual void drawTrafficLight();

    virtual void lightSwitching();
    virtual void lightPause();
    virtual void lightStart();
    virtual void lightExit();
};


#endif
