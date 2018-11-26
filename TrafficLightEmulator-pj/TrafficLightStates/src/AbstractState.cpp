#include "AbstractState.hpp"

#include <TrafficLightFSM.hpp>

AbstractState::AbstractState(TrafficLightFSM* context) : _context(context) { }

AbstractState::~AbstractState() {}

int AbstractState::getId() const {
    return _context->id_;
}
