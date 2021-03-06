#pragma once

#include "board_TTGO_config.h"
#include "esp32_tft.h"
#include "board_interface.h"
#include "esp32_tft_spi.h"

// 7735
typedef ESP32_Display<16, ESP32_SPI_TFT> DISPLAY_TYPE;
typedef NanoEngine16<DISPLAY_TYPE> NANO_ENGINE_TYPE;

typedef NanoFixedSprite<NANO_ENGINE_TYPE::TilerT> NANO_SPRITE_TYPE;

class Board_TTGO : public Board
{
    public:
        Board_TTGO();
        virtual ~Board_TTGO() {}

    public:
        virtual void init();

};

extern Board_TTGO board;
extern DISPLAY_TYPE   display;
