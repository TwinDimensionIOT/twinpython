// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2025 Leonardo Hansen for TwinDimension
//
// SPDX-License-Identifier: MIT

#pragma once

// Micropython setup

#define MICROPY_HW_BOARD_NAME		"TwinDimension EP Mother V2"
#define MICROPY_HW_MCU_NAME		"ESP32S3-N8R8"

#define CIRCUITPY_STATUS_LED_POWER	(&pin_GPIO40)
#define MICROPY_HW_LED_STATUS		(&pin_GPIO41)

#define CIRCUITPY_BOARD_UART		(1)
#define CIRCUITPY_BOARD_UART_PIN	{{.tx = &pin_GPIO43, .rx = &pin_GPIO44}}

// Default bus pins
#define DEFAULT_UART_BUS_RX		    (&pin_GPIO44)
#define DEFAULT_UART_BUS_TX		    (&pin_GPIO43)

// Serial over UART
#define CIRCUITPY_CONSOLE_UART_RX	DEFAULT_UART_BUS_RX
#define CIRCUITPY_CONSOLE_UART_TX	DEFAULT_UART_BUS_TX
