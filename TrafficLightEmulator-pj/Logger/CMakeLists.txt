project(Logger)

add_library(${PROJECT_NAME}
  src/Logger.cpp
)

target_sources(${PROJECT_NAME} PRIVATE
  src/Logger.hpp
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    src
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    TLStates
)
