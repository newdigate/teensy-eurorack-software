cmake_minimum_required(VERSION 3.10)
project(just_pots)
set(SOURCEFILES pots.ino)
teensy_add_executable(just_pots ${SOURCEFILES})
teensy_target_link_libraries(just_pots cores)