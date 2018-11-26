#include "TrafficLight.hpp"

#include <TrafficLightFSM.hpp>
#include <StateRedLight.hpp>

namespace {

const int FIRST_SWITCH_TIME = 1;
const int SECOND_SWITCH_TIME = 3;
const int THIRD_SWITCH_TIME = 7;
const int CANCELLATION_TIME = 9;

int secondsCount = 0;

TrafficLightFSM* trafficLight = new TrafficLightFSM();

}

static void* inputWaiting(void* threadId) {
    char inputtedCharacter;

    while (std::cin) {
        std::cin >> inputtedCharacter;
        if (inputtedCharacter == 'S') {
            trafficLight->lightStart();
        }
        if (inputtedCharacter == 'P') {
            trafficLight->lightPause();
        }
        if (inputtedCharacter == 'E') {
            trafficLight->lightExit();
        }
    }

    return 0;
}

static void *lightSwitch(void* threadId) {
    StateRedLight redState(trafficLight);
    trafficLight->setStatePtr(&redState);

    while (true) {
        if (!trafficLight->isPaused()) {
            ++secondsCount;
            if (secondsCount == FIRST_SWITCH_TIME ||
                secondsCount == SECOND_SWITCH_TIME ||
                secondsCount == THIRD_SWITCH_TIME) {
                system("clear");
                trafficLight->lightSwitching();
            }
            if (secondsCount == CANCELLATION_TIME)
                secondsCount = 0;
        }

        sleep(1);
    }

    return 0;
}

void TrafficLight::emulatorStart() {
    pthread_create(&switchThread_, 0, lightSwitch, 0);
    pthread_create(&inputWaitingThread_, 0, inputWaiting, 0);

    pthread_join(switchThread_, 0);
    pthread_join(inputWaitingThread_, 0);
}
