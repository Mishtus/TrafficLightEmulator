#ifndef TRAFFICLIGHTEMULATOR_ABSTRACTSTATE_HPP
#define TRAFFICLIGHTEMULATOR_ABSTRACTSTATE_HPP

#include <iostream>
#include <cstdlib>

namespace Colors {

static const std::string COLOR_NOCOLOR = "\x1B[0m";
static const std::string COLOR_BLINKING = "\x1B[5m";
static const std::string COLOR_BLACK = "\x1B[30m";
static const std::string COLOR_RED = "\x1B[31m";
static const std::string COLOR_GREEN = "\x1B[32m";
static const std::string COLOR_YELLOW = "\x1B[33m";

}

enum States {
    RED,
    YELLOW,
    GREEN,
    PAUSE
};

class TrafficLightFSM;

class AbstractState {
public:
    AbstractState(TrafficLightFSM* context);
    virtual ~AbstractState();

    int getId() const;

    virtual void lightSwitching() = 0;
    virtual void lightPause() = 0;
    virtual void lightStart() = 0;
    virtual void lightExit() = 0;

protected:
    TrafficLightFSM* _context;

    virtual void drawTrafficLight() = 0;
};


#endif
