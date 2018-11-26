#include "Logger.hpp"

#include <fstream>

#include <AbstractState.hpp>

namespace {

int numberForLogCount = 0;

}

Logger &Logger::getInstance() {
    static Logger logger;
    return logger;
}

void Logger::writeToLog(int stateInfo) {
    std::ofstream logWriteStream("state_log.txt", std::ios_base::app);
    ++numberForLogCount;

    switch(stateInfo) {
        case RED :
            logWriteStream << numberForLogCount << ") Red-Light State\n";
            break;
        case YELLOW :
            logWriteStream << numberForLogCount << ") Yellow-Light State\n";
            break;
        case GREEN :
            logWriteStream << numberForLogCount << ") Green-Light State\n";
            break;
        case PAUSE :
            logWriteStream <<  numberForLogCount << ") Pause State\n";
            break;
        default:
            std::cerr << "Log write error!";
    }

    logWriteStream.close();
}
