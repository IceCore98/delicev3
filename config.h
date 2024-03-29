/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Use I2C communication between the halves (uses D0, D1 automatically)*/
#define USE_I2C

/* 
    Store on the controller if it is left or right.
    Need to flash controllers with different commands:
        qmk flash -kb delicev3 -km default -bl avrdude-split-left
        qmk flash -kb delicev3 -km default -bl avrdude-split-right
*/
#define EE_HANDS
//#define MASTER_RIGHT // if usb is always connected to the right side

/*
Don't exactly know what this does.
If keyboard freezes after sleep, try to remove it.
*/
#define SPLIT_USB_DETECT