// Copyright (C) 2022, Hao Xiang Liew

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x6B, 0xBA, 0xFA, 0x7D, 0xDA, 0x53, 0xF5, 0x0C }

#define VIAL_UNLOCK_COMBO_ROWS \
    { 3, 3 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 11 }

// USB 1000Hz polling rate
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

// 6 Layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 6

// Mouse Key Settings
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_TIME_TO_MAX 64
