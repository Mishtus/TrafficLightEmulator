#include "StateRedLight.hpp"

#include "StateYellowLight.hpp"
#include "StatePause.hpp"

#include <TrafficLightFSM.hpp>

StateRedLight::StateRedLight(TrafficLightFSM* context) : AbstractState(context) {
    _context->id_ = RED;
}

void StateRedLight::drawTrafficLight() {
    std::cout << Colors::COLOR_NOCOLOR + "\n\n S - start;   P - pause;   E - exit;";
    std::cout << "\n\n";

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_RED + "  ******" << std::endl;

    std::cout << Colors::COLOR_BLACK + "  ******" << std::endl;

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_NOCOLOR + "  ******" << std::endl;

    std::cout << Colors::COLOR_BLACK + "  ******" << std::endl;

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_NOCOLOR + "  ******" << std::endl;
}

void StateRedLight::lightSwitching() {
    drawTrafficLight();

    StateYellowLight* yellowState = new StateYellowLight(_context);
    _context->setStatePtr(yellowState);
}
void StateRedLight::lightPause() {
    _context->setIsPaused(true);
    StatePause* pauseState = new StatePause(_context);
    _context->setStatePtr(pauseState);

}

void StateRedLight::lightStart() {
    _context->setIsPaused(false);
}

void StateRedLight::lightExit() {
    exit(0);
}
