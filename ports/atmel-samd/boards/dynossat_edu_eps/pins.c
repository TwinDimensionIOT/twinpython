// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_PB11) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_PA12) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_PB10) },
    { MP_ROM_QSTR(MP_QSTR_D26), MP_ROM_PTR(&pin_PA30) },
    { MP_ROM_QSTR(MP_QSTR_D27), MP_ROM_PTR(&pin_PA31) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PA17) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_OVTEMP), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PA16) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_SAT_RESET), MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_SAT_PWR_ENABLE), MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR_INT_IMU_OBC), MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PB03) },

    { MP_ROM_QSTR(MP_QSTR_PWRMON_SDA), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_PWRMON_SCL), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_PWRMON_ALERT), MP_ROM_PTR(&pin_PB03) },

    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PB02) },
    { MP_ROM_QSTR(MP_QSTR_V_3V3_MEAS), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_V_5V_MEAS), MP_ROM_PTR(&pin_PB02) },

    { MP_ROM_QSTR(MP_QSTR_FLASH_SCK), MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR_FLASH_MOSI), MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR_FLASH_MISO), MP_ROM_PTR(&pin_PA21) },
    { MP_ROM_QSTR(MP_QSTR_FLASH_CS), MP_ROM_PTR(&pin_PA20) },

    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_PA06) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
