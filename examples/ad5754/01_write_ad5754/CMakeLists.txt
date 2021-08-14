cmake_minimum_required(VERSION 3.10)
project(write_ad5754)
set(SOURCEFILES
        01_write_ad5754.cpp)

teensy_add_executable(write_ad5754 ${SOURCEFILES})
teensy_target_link_libraries(write_ad5754 SPI cores)