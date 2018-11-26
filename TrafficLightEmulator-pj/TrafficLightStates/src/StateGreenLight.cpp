#include "StateGreenLight.hpp"

#include "StateRedLight.hpp"
#include "StatePause.hpp"

#include <TrafficLight.hpp>
#include <TrafficLightFSM.hpp>

StateGreenLight::StateGreenLight(TrafficLightFSM* context) : AbstractState(context) {
    _context->id_ = GREEN;
}

void StateGreenLight::drawTrafficLight() {
    std::cout << Colors::COLOR_NOCOLOR + "\n\n S - start;   P - pause;   E - exit;";
    std::cout << "\n\n";

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_NOCOLOR + "  ******"  << std::endl;

    std::cout << Colors::COLOR_BLACK + "  ******" << std::endl;

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_NOCOLOR + "  ******"  << std::endl;

    std::cout << Colors::COLOR_BLACK + "  ******" << std::endl;

    for(int i = 0; i != 4; ++i)
        std::cout << Colors::COLOR_GREEN + "  ******" << std::endl;

    std::cout << Colors::COLOR_NOCOLOR;
}

void StateGreenLight::lightSwitching() {
    drawTrafficLight();

    StateRedLight* redState = new StateRedLight(_context);
    _context->setStatePtr(redState);
}

void StateGreenLight::lightPause() {
    _context->setIsPaused(true);
    StatePause* pauseState = new StatePause(_context);
    _context->setStatePtr(pauseState);
}

void StateGreenLight::lightStart() {
    _context->setIsPaused(false);
}

void StateGreenLight::lightExit() {
    exit(0);
}
