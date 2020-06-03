#pragma once

#include "board_TTGO_config.h"
#include "esp32_display.h"
#include "board_interface.h"
#include "esp32_tft_spi.h"

typedef ESP32_Display<NanoDisplayOps16, ESP32_SPI_TFT> DISPLAY_TYPE;

class Board_TTGO : public Board
{
    public:
        Board_TTGO();
        virtual ~Board_TTGO() {}

    public:
        virtual void init();
        virtual void run();

};

extern Board_TTGO board;
extern DISPLAY_TYPE   display;