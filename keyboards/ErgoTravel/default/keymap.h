/*
 * Keymap definition for ErgoTravel.
 * Copyright (C) 2019 Kittipong Yothaithiang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _KEYMAP_H_
#define _KEYMAP_H_

#include <stdint.h>

#include "../keycodes.h"
#include "keyboard.h"

const uint32_t KEYMAP[][MATRIX_COL_NUM * MATRIX_ROW_NUM * 2] = {
    [_BS] = {
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_ESC,  XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, KC_DEL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        XXXXXXX, KC_L4,   KC_LGUI, KC_LALT, KC_L1,   KC_SPC,  XXXXXXX, XXXXXXX, KC_RSFT, KC_L2,   KC_RALT, KC_RGUI, XXXXXXX, XXXXXXX
    },
    [_L1] = {
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_TILD, KC_PIPE, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,  _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV , KC_BSLS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        _______, XXXXXXX, XXXXXXX, KC_LCBR, KC_LBRC, KC_LPRN, XXXXXXX, _______, KC_RPRN, KC_RBRC, KC_RCBR, KC_UNDS, KC_PLUS, _______,
        XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, KC_L3,   _______, _______, XXXXXXX, XXXXXXX
    },
    [_L2] = {
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   XXXXXXX, KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, _______,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, KC_PRWD, XXXXXXX, KC_NXWD, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, _______, _______, KC_L3,   _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX
    },
    [_L3] = {
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PAST, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_NLCK,
        KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PENT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    },
    [_L4] = {
        XXXXXXX, KC_DVC1, KC_DVC2, KC_DVC3, KC_DVCN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    }
};

#endif
