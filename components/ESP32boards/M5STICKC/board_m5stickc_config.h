#pragma once

//#include <driver/rmt.h>
//#include <driver/touch_pad.h>
#include <driver/gpio.h>

namespace M5STICKC 
{
    namespace config
    {
        //AXP192
        constexpr gpio_num_t    AXP192_SDA  = GPIO_NUM_21;
        constexpr gpio_num_t    AXP192_SCL  = GPIO_NUM_22; 
        constexpr uint32_t      AXP192_CLK  = 400000; 
        constexpr uint32_t      AXP192_ADDR = 0x34;

        //mpu
        constexpr uint8_t       MPU_I2C_ADDR = 0x68; //MPU_I2CADDRESS_AD0_LOW
    }
}



