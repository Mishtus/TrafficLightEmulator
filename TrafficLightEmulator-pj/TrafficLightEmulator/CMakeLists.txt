project(TrafficLightEmulator)

add_executable(${PROJECT_NAME}
  TrafficLightEmulator.cpp
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    TrafficLight
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)