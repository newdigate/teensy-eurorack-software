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
