#include "StatePause.hpp"

#include "StateRedLight.hpp"
#include "StateYellowLight.hpp"
#include "StateGreenLight.hpp"

#include <Logger.hpp>
#include <TrafficLightFSM.hpp>

StatePause::StatePause(TrafficLightFSM* context) : AbstractState(context) {
    Logger::getInstance().writeToLog(PAUSE);
}

void StatePause::drawTrafficLight() {}

void StatePause::lightSwitching() {}

void StatePause::lightPause() {
    StatePause* pauseState = new StatePause(_context);
    _context->setStatePtr(pauseState);
}

void StatePause::lightStart() {

    if(_context->getActualNodeId() == RED) {
        StateRedLight* redState = new StateRedLight(_context);
        _context->setStatePtr(redState);
    }
    else if(_context->getActualNodeId() == YELLOW) {
        StateYellowLight* yellowState = new StateYellowLight(_context);
        _context->setStatePtr(yellowState);
    }
    else if(_context->getActualNodeId() == GREEN) {
        StateGreenLight* greenState = new StateGreenLight(_context);
        _context->setStatePtr(greenState);
    }
    _context->setIsPaused(false);

}

void StatePause::lightExit() {
    exit(0);
}

void StatePause::setId() {
    _context->id_ = PAUSE;
}
