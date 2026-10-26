![PicoFlasher logo](picoflasher.png)

# PicoFlasher

Open source XBOX 360 NAND flasher firmware for Raspberry Pi Pico / RP2040-Zero

## Wiring:

This pinout targets the **Waveshare RP2040-Zero** (GPIO16–GPIO25 are not
available on its headers; the onboard WS2812 on GPIO16 is left unused).

### Nand Flash
| RP2040-Zero | Xbox |
| ------------- | ------------- |
| GP2  | SPI_CLK  |
| GP3  |  SPI_MOSI |
| GP4  | SPI_MISO |
| GP5  | SPI_SS_N |
| GP6  |  SMC_DBG_EN |
| GP7  | SMC_RST_XDK_N  |
| GND  |  GND |

### ISD12xx Audible Feedback IC
|  | RP2040-Zero | Trinity | Corona |
| ------------- | ------------- | ------------- | ------------- |
| SPI_RDY | GP11 | FT2V4 | J2C2-A10 |
| SPI_MISO | GP12 | FT2R7 | J2C2-B11 |
| SPI_SS_N | GP13 | FT2R6 | J2C2-A11 |
| SPI_CLK | GP14 | FT2T4 | J2C2-A8 |
| SPI_MOSI | GP15 | FT2T5 | J2C2-B8 |

### EMMC Flash
| RP2040-Zero | Xbox | Corona 4GB |
| ------------- | ------------- | ------------- |
| GP26  | FLSH_DATA<0> | U1D1 pin 16 |
| GP27  | FLSH_WP_N (CMD) | U1D1 pin 3 |
| GP28  |  FLSH_CE_N (CLK) | U1D1 pin 2 |
| GP29  |  MMC_RST_N | U1D1 pin 1 |
| GP7  | SMC_RST_XDK_N  | Same as 16MB flash |
| GND  |  GND | U1D1 PIN 4 |

**DO NOT SOLDER ANYTHING TO THE CRYSTAL**

## License

This repository is distributed under the **GNU General Public License v3.0**
(see [LICENSE](LICENSE)), the same license as the upstream
[PicoFlasher](https://github.com/X360Tools/PicoFlasher) project. Original
copyright notices are preserved in the source files, including the
GPL-compatible notices in `mmc_defs.h` and `sd.h`. Some source files still
carry the GPLv2 boilerplate inherited from upstream; those notices are kept
unchanged.

If you redistribute a compiled firmware (`.uf2`), the GPL requires you to
make the corresponding source code available as well.
