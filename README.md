# teensy eurorack device library & examples 
* for [teensy-eurorack](https://github.com/newdigate/teensy-eurorack) DIY programmable digital music device

  <a href="https://github.com/newdigate/teensy-eurorack"><img src='https://github.com/newdigate/teensy-eurorack/raw/master/hardware/images/teensy-eurorack.svg' width='125px'/> </a>

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

### build dependencies
* ```teensy-cmake-macros``` for compiling c++ for arm cortex
  * [teensy-cmake-macros](https://github.com/newdigate/teensy-cmake-macros)

### run-time dependencies used in examples
* dependencies packaged with Teensyduino

  [cores](https://github.com/PaulStoffregen/cores.git)
| 
[SPI](https://github.com/PaulStoffregen/SPI.git)
| 
[SdFat](https://github.com/greiman/SdFat.git) 
| 
[SD](https://github.com/PaulStoffregen/SD.git)
| 
[SerialFlash](https://github.com/PaulStoffregen/SerialFlash.git)
| 
[Wire](https://github.com/PaulStoffregen/Wire.git)
| 
[arm_math](https://github.com/PaulStoffregen/arm_math.git)
| 
[Audio](https://github.com/PaulStoffregen/Audio.git)
| 
[MIDI](https://github.com/PaulStoffregen/MIDI)
| 
[ST7735_t3](https://github.com/PaulStoffregen/ST7735_t3.git)
| 
[EEPROM](https://github.com/PaulStoffregen/EEPROM.git)
| 
[Encoder](https://github.com/PaulStoffregen/Encoder.git)
| 
[Bounce2](https://github.com/thomasfredericks/Bounce2.git)
| 
[USBHost_t36](https://github.com/PaulStoffregen/USBHost_t36.git)

* dependencies installable via Arduino library manager
  * [TeensyVariablePlayback](https://github.com/newdigate/teensy-variable-playback.git) variable rate .wav and .raw audio sample playback
  * [TeensySampleFlashLoader](https://github.com/newdigate/teensy-sample-flashloader.git) loads samples from the SD card in to flash memory
  * [Arduino_Teensy_Codec_lib](https://github.com/FrankBoesing/Arduino-Teensy-Codec-lib.git) plays mp3s, aac, flac, ogg audio files 
  * [ResponsiveAnalogRead](https://github.com/dxinteractive/ResponsiveAnalogRead.git) reduce noise on the analog inputs by smoothing / averaging signal

* manual needing to be manually installed (for now)
  * [midi_smf_reader](https://github.com/newdigate/midi-smf-reader.git) simple standard midi file reader 
  * [teensypolyphony](https://github.com/newdigate/teensy-polyphony.git) play polyphonic pitched and unpitched samples
  * [teensyquencer](https://github.com/newdigate/teensy-quencer.git) generic sequencer
  * [arduino_tftpianoview](https://github.com/newdigate/arduino-tftpianoview.git) display musical notes on a piano view
  * [teensy_audio_display_components](https://github.com/newdigate/teensy-audio-display-components.git) Audio level and CV level meters 
  * [midi_smf_writer](https://github.com/newdigate/midi-smf-writer.git) save type-0 standard midi files
  * [teensy_audio_libtftscope](https://github.com/newdigate/teensy-audio-libtftscope) oscilliscope and x/y scope display components
  * [teensy_libcurve](https://github.com/newdigate/teensy-libcurve.git) draw beziers and antialiased lines

* credits 
  * [richgel999/picojpeg](https://github.com/richgel999/picojpeg) used to display jpeg files 
