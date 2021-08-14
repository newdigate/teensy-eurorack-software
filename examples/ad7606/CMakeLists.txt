cmake_minimum_required(VERSION 3.10)
project(basic_ad7606)
set(SOURCEFILES
        ad7606.cpp)

teensy_add_executable(basic_ad7606 ${SOURCEFILES})
teensy_target_link_libraries(basic_ad7606 SPI cores)