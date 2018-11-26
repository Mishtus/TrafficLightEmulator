#ifndef TRAFFICLIGHTEMULATOR_TRAFFICLIGHTEMULATOR_HPP
#define TRAFFICLIGHTEMULATOR_TRAFFICLIGHTEMULATOR_HPP

#include <pthread.h>
#include <unistd.h>

class TrafficLight {
 public:
  void emulatorStart();

 private:
    pthread_t switchThread_;
    pthread_t inputWaitingThread_;
};

#endif
