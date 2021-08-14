cmake_minimum_required(VERSION 3.10)
project(write_both_ad5754)

set(SOURCEFILES
        02_write_both_ad5754.cpp)

teensy_add_executable(write_both_ad5754 ${SOURCEFILES})
teensy_target_link_libraries(write_both_ad5754 SPI cores)