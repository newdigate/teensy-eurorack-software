cmake_minimum_required(VERSION 3.10)
project(cv_output)

set(SOURCEFILES 01_cv_output.cpp)
teensy_add_executable(cv_output ${SOURCEFILES})
teensy_target_link_libraries(cv_output Audio teensy_eurorack_library Wire SPI arm_math cores)
target_link_libraries(cv_output.elf m stdc++)