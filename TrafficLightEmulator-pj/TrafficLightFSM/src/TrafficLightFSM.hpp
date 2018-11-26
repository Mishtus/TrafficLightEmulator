#ifndef TRAFFICLIGHTEMULATOR_TRAFFICLIGHTFSM_HPP
#define TRAFFICLIGHTEMULATOR_TRAFFICLIGHTFSM_HPP

class AbstractState;

class TrafficLightFSM {
public:
    TrafficLightFSM();
    TrafficLightFSM(AbstractState* initState);

    void lightSwitching();
    void lightPause();
    void lightStart();
    void lightExit();

    int getActualNodeId();



    AbstractState* getStatePtr();
    void setStatePtr(AbstractState* state);

    bool isPaused() const;
    void setIsPaused(const bool isPaused);

    int id_;

private:
    AbstractState* state_;

    bool isPaused_;
};

#endif
