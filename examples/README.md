# software examples

* [ad5754](ad5754) 
  * [ad5754/01_write_ad5754](ad5754/01_write_ad5754) 
    * set 4 x control voltages using single ad5754 dac
    * [![examples-ad5754_01-write-ad5754](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-ad5754_01-write-ad5754.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-ad5754_01-write-ad5754.yml)
  * [ad5754/02_write_both_ad5754](ad5754/02_write_both_ad5754)
    * set 8 x control voltages using both ad5754 dacs
    * [![examples-ad5754_02-write-both-ad5754](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-ad5754_02-write-both-ad5754.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-ad5754_02-write-both-ad5754.yml)

* [ad7606](ad7606)
  * read analog values from ad7606 via SPI protocol
  * [![examples-ad7606](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-ad7606.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-ad7606.yml)

* [audio](audio): examples using teensy audio library
  * [audio/audio_thru_with_scope](audio/audio_thru_with_scope)
    * route audio in -> audio out 
    * display audio in wave graph
  * [audio/audio_to_cv/01_audio_to_cv](audio/audio_to_cv/01_audio_to_cv) 
    * route audio input to cv output
    * [![examples-audio-audiotocv_01-audio-to-cv](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-audiotocv_01-audio-to-cv.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-audiotocv_01-audio-to-cv.yml)
  * [audio/cv_out/01_cv_output](audio/cv_out/01_cv_output)
    * output a sine wave on cv
    * [![examples-audio-cvout_01-cv-output](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-cvout_01-cv-output.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-cvout_01-cv-output.yml)
* [audio/display_levels](audio/display_levels)
  * [audio/display_levels/01_display_levels](audio/display_levels/01_display_levels)
    * display audio levels peak-to-peak and RMS from audio inputs
    * [![examples-audio-displaylevels_01-display-levels](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-displaylevels_01-display-levels.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-displaylevels_01-display-levels.yml)

* [audio/libscope](audio/libscope): examples using [teensy-audio-libtftscope](https://github.com/newdigate/teensy-audio-libtftscope) 
  * [audio/libscope/02_input_scopes](audio/libscope/02_input_scopes)
    * output sine waves on all audio and cv outputs
    * display all audio and cv inputs on a scope view
  * [audio/libscope/03_full_bandwidth](audio/libscope/03_full_bandwidth)
    * output sine waves on all audio and cv outputs
    * display all audio and cv inputs on a scope view
    * display 4 x potentiometer values on a scope view   
  * [audio/libscope/04_audio_only_full_bandwidth](audio/libscope/04_audio_only_full_bandwidth)
    * output sine waves on all audio outputs
    * display all audio inputs on a scope view
  
* codec - using [FrankBoesing/Arduino-Teensy-Codec-lib](https://github.com/FrankBoesing/Arduino-Teensy-Codec-lib)
  * [audio/codec/01_Mp3FilePlayer](audio/codec/01_Mp3FilePlayer) 
    * play .mp3 file from micro SD card
    * [![examples-audio-codec_01-mp3fileplayer](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-codec_01-mp3fileplayer.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-codec_01-mp3fileplayer.yml)
  * [audio/codec/02_Play_and_display](audio/codec/02_Play_and_display)
    * play .mp3 and .aac audio files from micro SD card
    * read mp3 tags
    * display jpeg of album cover if available
    * use rotary encoder to change directory
    * use buttons to pause/play, next, load-directory
    * (ci/cd build needs attention)
 
* [audio/simple_scope](audio/simple_scope)
  * [audio/simple_scope/01_audiocv_scope](audio/simple_scope/01_audiocv_scope)
    * display graph of incoming audio and cv (no dependencies) 
  * [audio/simple_scope/02_simple_cv_scope](audio/simple_scope/02_simple_cv_scope)
    * display graph of incoming cv (no dependencies)
  

* [graphics](graphics)
  * [graphics/00_graphicstest](graphics/00_graphicstest)
    * Adafruit graphics test adapted for teensy-eurorack parameters
  * [graphics/01_heart](graphics/01_heart)
    * Draw anti-aliased bezier curves (using [newdigate/teensy-libcurve](https://github.com/newdigate/teensy-libcurve))

* [knobs](knobs)
  * [knobs/just_encoders](knobs/just_encoders)
    * read values of 3 rotary encoders
    * output changes on serial monitor
  * [knobs/just_encoders_and_display](knobs/just_encoders_and_display)
    * read values of 3 rotary encoders
    * output changes on serial monitor
    * initialize st7735 and display some text
  
[midi](midi)
 * [midi/01_MidiIn_display](midi/01_MidiIn_display)
 * [midi/02_MidiOut](midi/02_MidiOut)


