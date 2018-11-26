project(TrafficLight)

add_library(${PROJECT_NAME}
  src/TrafficLight.cpp
)

target_sources(${PROJECT_NAME} PRIVATE
  src/TrafficLight.hpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    src
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    TLStates
    TLFSM
)
