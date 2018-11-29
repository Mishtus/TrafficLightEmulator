#ifndef TRAFFICLIGHTEMULATOR_LOGGER_HPP
#define TRAFFICLIGHTEMULATOR_LOGGER_HPP

class Logger {
public:
    static Logger& getInstance();

    void writeToLog (int stateInfo);

private:
	Logger () {}
	Logger (const Logger&) {}
	Logger& operator=(const Logger&) {}
};

#endif
