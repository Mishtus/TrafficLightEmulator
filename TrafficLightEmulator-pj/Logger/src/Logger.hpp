#ifndef TRAFFICLIGHTEMULATOR_LOGGER_HPP
#define TRAFFICLIGHTEMULATOR_LOGGER_HPP

class Logger {
 public:
    static Logger& getInstance();

    void writeToLog(int stateInfo);
};

#endif
