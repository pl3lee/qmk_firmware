/*
 Copyright 2020 Álvaro "Gondolindrim" Volpato <alvaro.volpato@usp.br>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define MATRIX_COL_PINS { C7 , A8 , A10, A4 , A5 , A6 , C10, A7, C4 , C5 , A15, B0 , B1 , B12, B10, B13 }
#define MATRIX_ROW_PINS { A3 , B14, B15, C9 , C6 , C11 } 
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define EEPROM_I2C_24LC128
//#define I2C1_CLOCK_SPEED 400000
//#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE

#define OPENDRAIN_INDICATORS

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define TAP_CODE_DELAY 50

#define FORCE_NKRO

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming*/
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD