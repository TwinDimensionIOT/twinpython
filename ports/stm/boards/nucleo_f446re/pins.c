// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2022 flom84
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    {MP_ROM_QSTR(MP_QSTR_ID), MP_ROM_PTR(&board_module_id_obj)},
    {MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PA03)},
    {MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PA02)},
    {MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PA10)},
    {MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PB03)},
    {MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PB05)},
    {MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_PB04)},
    {MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_PB10)},
    {MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_PA08)},
    {MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_PA09)},
    {MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_PC07)},
    {MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_PB06)},
    {MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_PA07)},
    {MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_PA06)},
    {MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_PA05)},
    {MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_PB09)},
    {MP_ROM_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_PB08)},
    {MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA00)},
    {MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PA01)},
    {MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PA04)},
    {MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PB00)},
    {MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PC01)},
    {MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PC00)},
    {MP_ROM_QSTR(MP_QSTR_PA0), MP_ROM_PTR(&pin_PA00)},
    {MP_ROM_QSTR(MP_QSTR_PA1), MP_ROM_PTR(&pin_PA01)},
    {MP_ROM_QSTR(MP_QSTR_PA2), MP_ROM_PTR(&pin_PA02)},
    {MP_ROM_QSTR(MP_QSTR_PA3), MP_ROM_PTR(&pin_PA03)},
    {MP_ROM_QSTR(MP_QSTR_PA4), MP_ROM_PTR(&pin_PA04)},
    {MP_ROM_QSTR(MP_QSTR_PA5), MP_ROM_PTR(&pin_PA05)},
    {MP_ROM_QSTR(MP_QSTR_PA6), MP_ROM_PTR(&pin_PA06)},
    {MP_ROM_QSTR(MP_QSTR_PA7), MP_ROM_PTR(&pin_PA07)},
    {MP_ROM_QSTR(MP_QSTR_PA8), MP_ROM_PTR(&pin_PA08)},
    {MP_ROM_QSTR(MP_QSTR_PA9), MP_ROM_PTR(&pin_PA09)},
    {MP_ROM_QSTR(MP_QSTR_PA10), MP_ROM_PTR(&pin_PA10)},
    {MP_ROM_QSTR(MP_QSTR_PA11), MP_ROM_PTR(&pin_PA11)},
    {MP_ROM_QSTR(MP_QSTR_PA12), MP_ROM_PTR(&pin_PA12)},
    {MP_ROM_QSTR(MP_QSTR_PA15), MP_ROM_PTR(&pin_PA15)},
    {MP_ROM_QSTR(MP_QSTR_PB0), MP_ROM_PTR(&pin_PB00)},
    {MP_ROM_QSTR(MP_QSTR_PB1), MP_ROM_PTR(&pin_PB01)},
    {MP_ROM_QSTR(MP_QSTR_PB2), MP_ROM_PTR(&pin_PB02)},
    {MP_ROM_QSTR(MP_QSTR_PB3), MP_ROM_PTR(&pin_PB03)},
    {MP_ROM_QSTR(MP_QSTR_PB4), MP_ROM_PTR(&pin_PB04)},
    {MP_ROM_QSTR(MP_QSTR_PB5), MP_ROM_PTR(&pin_PB05)},
    {MP_ROM_QSTR(MP_QSTR_PB6), MP_ROM_PTR(&pin_PB06)},
    {MP_ROM_QSTR(MP_QSTR_PB7), MP_ROM_PTR(&pin_PB07)},
    {MP_ROM_QSTR(MP_QSTR_PB8), MP_ROM_PTR(&pin_PB08)},
    {MP_ROM_QSTR(MP_QSTR_PB9), MP_ROM_PTR(&pin_PB09)},
    {MP_ROM_QSTR(MP_QSTR_PB10), MP_ROM_PTR(&pin_PB10)},
    {MP_ROM_QSTR(MP_QSTR_PB12), MP_ROM_PTR(&pin_PB12)},
    {MP_ROM_QSTR(MP_QSTR_PB13), MP_ROM_PTR(&pin_PB13)},
    {MP_ROM_QSTR(MP_QSTR_PB14), MP_ROM_PTR(&pin_PB14)},
    {MP_ROM_QSTR(MP_QSTR_PB15), MP_ROM_PTR(&pin_PB15)},
    {MP_ROM_QSTR(MP_QSTR_PC0), MP_ROM_PTR(&pin_PC00)},
    {MP_ROM_QSTR(MP_QSTR_PC1), MP_ROM_PTR(&pin_PC01)},
    {MP_ROM_QSTR(MP_QSTR_PC2), MP_ROM_PTR(&pin_PC02)},
    {MP_ROM_QSTR(MP_QSTR_PC3), MP_ROM_PTR(&pin_PC03)},
    {MP_ROM_QSTR(MP_QSTR_PC4), MP_ROM_PTR(&pin_PC04)},
    {MP_ROM_QSTR(MP_QSTR_PC5), MP_ROM_PTR(&pin_PC05)},
    {MP_ROM_QSTR(MP_QSTR_PC6), MP_ROM_PTR(&pin_PC06)},
    {MP_ROM_QSTR(MP_QSTR_PC7), MP_ROM_PTR(&pin_PC07)},
    {MP_ROM_QSTR(MP_QSTR_PC8), MP_ROM_PTR(&pin_PC08)},
    {MP_ROM_QSTR(MP_QSTR_PC9), MP_ROM_PTR(&pin_PC09)},
    {MP_ROM_QSTR(MP_QSTR_PC10), MP_ROM_PTR(&pin_PC10)},
    {MP_ROM_QSTR(MP_QSTR_PC11), MP_ROM_PTR(&pin_PC11)},
    {MP_ROM_QSTR(MP_QSTR_PC12), MP_ROM_PTR(&pin_PC12)},
    {MP_ROM_QSTR(MP_QSTR_PC13), MP_ROM_PTR(&pin_PC13)},
    {MP_ROM_QSTR(MP_QSTR_PC14), MP_ROM_PTR(&pin_PC14)},
    {MP_ROM_QSTR(MP_QSTR_PC15), MP_ROM_PTR(&pin_PC15)},
    {MP_ROM_QSTR(MP_QSTR_PD2), MP_ROM_PTR(&pin_PD02)},
    {MP_ROM_QSTR(MP_QSTR_PH0), MP_ROM_PTR(&pin_PH00)},
    {MP_ROM_QSTR(MP_QSTR_PH1), MP_ROM_PTR(&pin_PH01)},
    {MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_PA05)},
    {MP_ROM_QSTR(MP_QSTR_SW), MP_ROM_PTR(&pin_PC13)},
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
