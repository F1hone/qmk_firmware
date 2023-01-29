/*
Copyright 2022 F1shlab

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

// defines to set RGB-led behaviour. Off by default
#define CAPS_LOCK_ENABLE true
#define CAPS_LOCK_COLOR HSV_PINK


#include "quantum.h"

#define LAYOUT( \
    k00, k01, k02, k03, k04,\
    k10, k11, k12, k13, k14,\
    k20, k21, k22,      k24,\
    k30, k31, k32,          \
    k40, k41, k42           \
) { \
    {k00, k01, k02, k03,   k04  }, \
    {k10, k11, k12, k13,   k14  }, \
    {k20, k21, k22, KC_NO, k24  }, \
    {k30, k31, k32, KC_NO, KC_NO}, \
    {k40, k41, k42, KC_NO, KC_NO}  \
}
