add_executable(${PROJECT_NAME} main.cpp
    Track.cpp TrackScheduler.cpp PlayerController.cpp)
add_subdirectory(Commands)

target_link_libraries(${PROJECT_NAME} LINK_PUBLIC sleepy-discord)
