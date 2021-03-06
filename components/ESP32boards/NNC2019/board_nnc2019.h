#pragma once

#include "board_nnc2019_config.h"
#include "board_interface.h"

#include "blink.h"
#include "esp32_tft.h"
#include "esp32_tft_i2c.h"

#include "esp32_mpu.h"
#include "MPU.hpp"        // main file, provides the class itself
// #include "mpu/math.hpp"   // math helper for dealing with MPU data
// #include "mpu/types.hpp"  // MPU data types and definitions

#include "touch_button.h"

typedef ESP32_Display<1, ESP32_I2C_TFT> DISPLAY_TYPE;
typedef NanoEngine1<DISPLAY_TYPE> NANO_ENGINE_TYPE;
typedef NanoFixedSprite<NANO_ENGINE_TYPE::TilerT> NANO_SPRITE_TYPE;

class CLEDStrip;
class CTouchButton;

class Board_NNC2019 : public Board
{
    public:
        Board_NNC2019();
        virtual ~Board_NNC2019() {}

    public:
        void init() override;
};

void self_test_task(void *pvParameters) ;

#ifndef NNC2019_JTAG_ENABLED
extern CTouchButton  touchpad;
#else
class CTouchButtonDummy
{
  public:
    CTouchButtonDummy() {}
    ~CTouchButtonDummy() {}
    void init() {}
    void run() {}
    TOUCHPAD_STATE get_state(void) { return TOUCHPAD_STATE_DISABLED; }
};
extern CTouchButtonDummy  touchpad;
#endif

extern Board_NNC2019 board;
extern DISPLAY_TYPE  display;
extern CLEDStrip     leds;
extern MPU_t         MPU;
extern CBlink        blue_led;
