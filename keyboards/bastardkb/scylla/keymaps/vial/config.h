/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xAB, 0x79, 0x94, 0x5D, 0x49, 0x76, 0x78, 0xC3}

#define DYNAMIC_KEYMAP_MACRO_COUNT 6
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

//tips from https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/ to reduce filesize:
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

