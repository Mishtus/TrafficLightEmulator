project(TLFSM)

add_library(${PROJECT_NAME}
  src/TrafficLightFSM.cpp
)

target_sources(${PROJECT_NAME} PRIVATE
  src/TrafficLightFSM.hpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    src
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    TLStates
    Logger
)
