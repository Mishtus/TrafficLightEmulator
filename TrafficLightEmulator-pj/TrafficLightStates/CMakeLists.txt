project(TLStates)

add_library(${PROJECT_NAME}
  src/AbstractState.cpp
  src/StateGreenLight.cpp
  src/StatePause.cpp
  src/StateRedLight.cpp
  src/StateYellowLight.cpp
)

target_sources(${PROJECT_NAME} PRIVATE
  src/AbstractState.hpp
  src/StateGreenLight.hpp
  src/StatePause.hpp
  src/StateRedLight.hpp
  src/StateYellowLight.hpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    src
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    TLFSM
    TrafficLight
    Logger
)
