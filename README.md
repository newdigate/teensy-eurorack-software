# teensy eurorack device library & examples 
* for [teensy-eurorack](https://github.com/newdigate/teensy-eurorack) DIY programmable digital music device

### [examples](examples)
```
├── ad5754
│   ├── 01_write_ad5754
│   └── 02_write_both_ad5754
├── ad7606
├── audio
│   ├── audio_thru_with_scope
│   ├── audio_to_cv
│   ├── codec
│   │   ├── 01_Mp3FilePlayer
│   │   └── 02_Play_and_display
│   ├── cv_out
│   │   └── 01_cv_output
│   ├── display_levels
│   │   └── 01_display_levels
│   ├── libscope
│   │   ├── 02_input_scopes
│   │   ├── 03_full_bandwidth
│   │   └── 04_audio_only_full_bandwidth
│   ├── pitch
│   │   ├── 01_knob_pitch
│   │   └── 02_play_all_sd
│   └── simple_scope
│       ├── 01_audiocv_scope
│       └── 02_simple_cv_scope
├── graphics
│   ├── 00_graphicstest
│   └── 01_heart
├── knobs
│   ├── just_encoders
│   ├── just_encoders_and_display
│   └── pots
└── midi
    ├── 01_MidiIn_display
    └── 02_MidiOut
```

### software libraries
 * simple standard midi file reader 
   * [midi-smf-reader](https://github.com/newdigate/midi-smf-reader)
 * generic sequencer
   * [teensy-quencer](https://github.com/newdigate/teensy-quencer)
 * variable rate playback
   * [teensy-variable-playback](https://github.com/newdigate/teensy-variable-playback)
 * oscilliscope and x/y scope display components
   * [teensy-audio-libtftscope](https://github.com/newdigate/teensy-audio-libtftscope)
 * Audio level and CV level meters 
   * [teensy-audio-display-components](https://github.com/newdigate/teensy-audio-display-components)
 * teensy-libcurve 
   * [teensy-libcurve](https://github.com/newdigate/teensy-libcurve)
   * draw beziers and antialiased lines

### build dependencies
* ```teensy-cmake-macros``` for compiling c++ for arm cortex
  * [teensy-cmake-macros](https://github.com/newdigate/teensy-cmake-macros)

### run-time dependencies used in examples
* dependencies packaged with Teensyduino
  * [cores](https://github.com/PaulStoffregen/cores.git)
  * [SPI](https://github.com/PaulStoffregen/SPI.git)
  * [SdFat](https://github.com/greiman/SdFat.git) 
  * [SD](https://github.com/PaulStoffregen/SD.git)
  * [SerialFlash](https://github.com/PaulStoffregen/SerialFlash.git)
  * [Wire](https://github.com/PaulStoffregen/Wire.git)
  * [arm_math](https://github.com/PaulStoffregen/arm_math.git)
  * [Audio](https://github.com/PaulStoffregen/Audio.git)
  * [MIDI](https://github.com/PaulStoffregen/MIDI)
  * [ST7735_t3](https://github.com/PaulStoffregen/ST7735_t3.git)
  * [EEPROM](https://github.com/PaulStoffregen/EEPROM.git)
  * [Encoder](https://github.com/PaulStoffregen/Encoder.git)
  * [Bounce2](https://github.com/thomasfredericks/Bounce2.git)
  * [USBHost_t36](https://github.com/PaulStoffregen/USBHost_t36.git)

* dependencies installable via Arduino library manager
  * [TeensyVariablePlayback](https://github.com/newdigate/teensy-variable-playback.git)
  * [TeensySampleFlashLoader](https://github.com/newdigate/teensy-sample-flashloader.git)
  * [Arduino_Teensy_Codec_lib](https://github.com/FrankBoesing/Arduino-Teensy-Codec-lib.git)
  * [ResponsiveAnalogRead](https://github.com/dxinteractive/ResponsiveAnalogRead.git)

* manual needing to be manually installed (for now)
  * [midi_smf_reader](https://github.com/newdigate/midi-smf-reader.git)
  * [teensypolyphony](https://github.com/newdigate/teensy-polyphony.git)
  * [teensyquencer](https://github.com/newdigate/teensy-quencer.git)
  * [arduino_tftpianoview](https://github.com/newdigate/arduino-tftpianoview.git)
  * [teensy_audio_display_components](https://github.com/newdigate/teensy-audio-display-components.git)
  * [midi_smf_writer](https://github.com/newdigate/midi-smf-writer.git)
  * [teensy_audio_libtftscope](https://github.com/newdigate/teensy-audio-libtftscope)
  * [teensy_libcurve](https://github.com/newdigate/teensy-libcurve.git)

* credits 
  * [richgel999/picojpeg](https://github.com/richgel999/picojpeg)
