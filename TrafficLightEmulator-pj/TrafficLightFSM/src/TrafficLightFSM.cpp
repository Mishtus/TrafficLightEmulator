#include "TrafficLightFSM.hpp"

#include <Logger.hpp>
#include <AbstractState.hpp>

TrafficLightFSM::TrafficLightFSM() : id_(0), state_(0), isPaused_(false) {}

TrafficLightFSM::TrafficLightFSM(AbstractState* initState) : id_(0), state_(initState), isPaused_(false) {}

void TrafficLightFSM::lightSwitching() {
    state_->lightSwitching();
}

void TrafficLightFSM::lightPause() {
    state_->lightPause();
}

void TrafficLightFSM::lightStart() {
    state_->lightStart();
}

void TrafficLightFSM::lightExit() {
    state_->lightExit();
}

int TrafficLightFSM::getActualNodeId() {
    return getStatePtr()->getId();
}

AbstractState* TrafficLightFSM::getStatePtr() {
    return state_;
}

void TrafficLightFSM::setStatePtr(AbstractState* state) {
    state_ = state;
    Logger::getInstance().writeToLog(getActualNodeId());
}

bool TrafficLightFSM::isPaused() const {
    return isPaused_;
}

void TrafficLightFSM::setIsPaused(const bool isPaused) {
    isPaused_ = isPaused;
}
