cmake_minimum_required(VERSION 3.5)
project(teensy_eurorack_library C CXX)
set(teensy_eurorack 1.0.0)
set(SOURCE_FILES
        input_output_spi.cpp)

set(HEADER_FILES
        ad5754.h
        input_output_spi.h
        teensy_eurorack.h
        teensy_eurorack_audio.h
        teensy_eurorack_pins.h
)

teensy_add_library(
        teensy_eurorack_library
        ${HEADER_FILES}
        ${SOURCE_FILES}
)
