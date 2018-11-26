#include "StateYellowLight.hpp"

#include "StateGreenLight.hpp"
#include "StatePause.hpp"

#include <TrafficLightFSM.hpp>

StateYellowLight::StateYellowLight(TrafficLightFSM* context) : AbstractState(context) {
    _context->id_ = YELLOW;
}

void StateYellowLight::drawTrafficLight() {
    std::cout << Colors::COLOR_NOCOLOR + "\n\n S - start;   P - pause;   E - exit;";
    std::cout << "\n\n";

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_NOCOLOR + "  ******" << std::endl;

    std::cout << Colors::COLOR_BLACK + "  ******" << std::endl;

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_YELLOW + Colors::COLOR_BLINKING + "  ******" << std::endl;

    std::cout << Colors::COLOR_NOCOLOR + Colors::COLOR_BLACK + "  ******" << std::endl;

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_NOCOLOR + "  ******" << std::endl;
}

void StateYellowLight::lightSwitching() {
    drawTrafficLight();

    StateGreenLight* greenState = new StateGreenLight(_context);
    _context->setStatePtr(greenState);
}

void StateYellowLight::lightPause() {
    _context->setIsPaused(true);
    StatePause* pauseState = new StatePause(_context);
    _context->setStatePtr(pauseState);
}

void StateYellowLight::lightStart() {
    _context->setIsPaused(false);
}

void StateYellowLight::lightExit() {
    exit(0);
}
