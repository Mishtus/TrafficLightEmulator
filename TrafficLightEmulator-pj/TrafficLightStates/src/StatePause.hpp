#ifndef TRAFFICLIGHTEMULATOR_STATEPAUSE_HPP
#define TRAFFICLIGHTEMULATOR_STATEPAUSE_HPP

#include "AbstractState.hpp"

class StatePause: public AbstractState {
public:
    StatePause(TrafficLightFSM* context);

    virtual void drawTrafficLight();

    virtual void lightSwitching();
    virtual void lightPause();
    virtual void lightStart();
    virtual void lightExit();
    virtual void setId();
};

#endif
