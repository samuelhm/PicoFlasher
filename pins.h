/*
 * Copyright (c) 2022 Balázs Triszka <balika011@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PINS_H__
#define __PINS_H__

// Pinout for the Waveshare RP2040-Zero.
// GPIO16..GPIO25 are not available on its headers (GPIO16 drives the onboard
// WS2812 LED), so every signal was moved to the remaining pins.

// Xbox 360 NAND flash (hardware SPI0)
#define SPI_CLK 2           // SPI0 SCK
#define SPI_MOSI 3          // SPI0 TX
#define SPI_MISO 4          // SPI0 RX
#define SPI_SS_N 5          // SPI0 CSn
#define SMC_DBG_EN 6
#define SMC_RST_XDK_N 7

#define NUVOTON_SPI_RDY 11 // FT2V4
#define NUVOTON_SPI_MISO 12 // FT2R7
#define NUVOTON_SPI_SS_N 13 // FT2R6
#define NUVOTON_SPI_CLK 14 // FT2T4
#define NUVOTON_SPI_MOSI 15 // FT2T5

// eMMC flash (PIO), moved off GP6/GP7 which now carry the SMC signals
#define MMC_DAT0_PIN 26
#define MMC_CMD_PIN 27
#define MMC_CLK_PIN 28
#define MMC_RST_PIN 29

#endif
