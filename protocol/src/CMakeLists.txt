# Put this CMakeLists.txt in the src folder (don't forget to rename it)

include_directories(../libs/channel_driver)
link_directories(../libs/channel_driver)
link_libraries(arduino_core)

add_executable(protocol main.cpp)