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
    * [![examples-audio_audio-thru-with-scope](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio_audio-thru-with-scope.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio_audio-thru-with-scope.yml)
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
    * [![examples-audio-libscope_02-input-scopes](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-libscope_02-input-scopes.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-libscope_02-input-scopes.yml)
  * [audio/libscope/03_full_bandwidth](audio/libscope/03_full_bandwidth)
    * output sine waves on all audio and cv outputs
    * display all audio and cv inputs on a scope view
    * display 4 x potentiometer values on a scope view   
    * [![examples-audio-libscope_03-full-bandwidth](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-libscope_03-full-bandwidth.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-libscope_03-full-bandwidth.yml)
  * [audio/libscope/04_audio_only_full_bandwidth](audio/libscope/04_audio_only_full_bandwidth)
    * output sine waves on all audio outputs
    * display all audio inputs on a scope view
    * [![examples-audio-libscope_04-audio-only-full-bandwidth](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-libscope_04-audio-only-full-bandwidth.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-libscope_04-audio-only-full-bandwidth.yml)
  
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
    * [![examples-audio-codec_02-play-and-display](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-codec_02-play-and-display.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-codec_02-play-and-display.yml)
 
* [audio/simple_scope](audio/simple_scope)
  * [audio/simple_scope/01_audiocv_scope](audio/simple_scope/01_audiocv_scope)
    * display graph of incoming audio and cv (no dependencies) 
    * [![examples-audio-simplescope_01-audiocv-scope](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-simplescope_01-audiocv-scope.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-simplescope_01-audiocv-scope.yml)
  * [audio/simple_scope/02_simple_cv_scope](audio/simple_scope/02_simple_cv_scope)
    * display graph of incoming cv (no dependencies)
    * [![examples-audio-simplescope_02-simple-cv-scope](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-simplescope_02-simple-cv-scope.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-audio-simplescope_02-simple-cv-scope.yml)
  

* [graphics](graphics)
  * [graphics/00_graphicstest](graphics/00_graphicstest)
    * Adafruit graphics test adapted for teensy-eurorack parameters
    * [![examples-graphics_00-graphicstest](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-graphics_00-graphicstest.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-graphics_00-graphicstest.yml)
  * [graphics/01_heart](graphics/01_heart)
    * Draw anti-aliased bezier curves (using [newdigate/teensy-libcurve](https://github.com/newdigate/teensy-libcurve))
    * [![examples-graphics_01-heart](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-graphics_01-heart.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-graphics_01-heart.yml)

* [knobs](knobs)
  * [knobs/just_encoders](knobs/just_encoders)
    * read values of 3 rotary encoders
    * output changes on serial monitor
    * [![examples-knobs_just-encoders](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-knobs_just-encoders.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-knobs_just-encoders.yml)
  * [knobs/just_encoders_and_display](knobs/just_encoders_and_display)
    * read values of 3 rotary encoders
    * output changes on serial monitor
    * initialize st7735 and display some text
    * [![examples-knobs_just-encoders-and-display](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-knobs_just-encoders-and-display.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-knobs_just-encoders-and-display.yml)
  * [pots](pots) 
    * read potentiometer values
    * [![examples-knobs_pots](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-knobs_pots.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-knobs_pots.yml)
  
[midi](midi)
 * [midi/01_MidiIn_display](midi/01_MidiIn_display)
   * [![examples-midi_01-midiin-display](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-midi_01-midiin-display.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-midi_01-midiin-display.yml) 
 * [midi/02_MidiOut](midi/02_MidiOut)
   * [![examples-midi_02-midiout](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-midi_02-midiout.yml/badge.svg)](https://github.com/newdigate/teensy-eurorack-software/actions/workflows/examples-midi_02-midiout.yml)


