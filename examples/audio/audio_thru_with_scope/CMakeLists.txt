cmake_minimum_required(VERSION 3.10)
project(audio_thru_with_scope)
set(SOURCEFILES audio_thru_with_scope.cpp)
teensy_add_executable(audio_thru_with_scope ${SOURCEFILES})
teensy_target_link_libraries(audio_thru_with_scope teensy_eurorack_library ST7735_t3 Audio Wire SPI cores)
target_link_libraries(audio_thru_with_scope.elf m stdc++)