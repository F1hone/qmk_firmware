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

#include "quantum.h"

#define LAYOUT_all(\
	K000, K001, K002, K003, K004,       K006, K007, K008, K009, K010,       K012, K013,             K016,       \
	      K101, K102, K103, K104, K105, K106, K107, K108,       K110, K111, K112, K113, K114, K115, K116,       \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,             K216,       \
	      K301, K302, K303, K304, K305, K306, K307, K308,       K310, K311, K312, K313,       K315, K316,       \
	      K401, K402, K403, K404, K405, K406, K407,       K409, K410, K411, K412, K413,             K416,       \
	      K501, K502, K503, K504, K505, K506, K507, K508,       K510, K511, K512, K513, K514,       K516,       \
	      K601, K602, K603, K604, K605, K606, K607, K608,       K610, K611, K612, K613,             K616,       \
	      K701,             K704,       K706,       K708, K709, K710, K711, K712, K713,                   K717  \
) {\
	{ K000,  K001,  K002,   K003,  K004,  KC_NO,  K006,  K007,   K008,  K009,  K010,  KC_NO, K012,  K013,  KC_NO, KC_NO, K016,  KC_NO }, \
	{ KC_NO, K101,  K102,   K103,  K104,  K105,   K106,  K107,   K108,  KC_NO, K110,  K111,  K112,  K113,  K114,  K115,  K116,  KC_NO }, \
	{ KC_NO, K201,  K202,   K203,  K204,  K205,   K206,  K207,   K208,  K209,  K210,  K211,  K212,  K213,  KC_NO, KC_NO, K216,  KC_NO }, \
	{ KC_NO, K301,  K302,   K303,  K304,  K305,   K306,  K307,   K308,  KC_NO, K310,  K311,  K312,  K313,  KC_NO, K315,  K316,  KC_NO }, \
	{ KC_NO, K401,  K402,   K403,  K404,  K405,   K406,  K407,   KC_NO, K409,  K410,  K411,  K412,  K413,  KC_NO, KC_NO, K416,  KC_NO }, \
	{ KC_NO, K501,  K502,   K503,  K504,  K505,   K506,  K507,   K508,  KC_NO, K510,  K511,  K512,  K513,  K514,  KC_NO, K516,  KC_NO }, \
	{ KC_NO, K601,  K602,   K603,  K604,  K605,   K606,  K607,   K608,  KC_NO, K610,  K611,  K612,  K613,  KC_NO, KC_NO, K616,  KC_NO }, \
	{ KC_NO, K701,  KC_NO,  KC_NO, K704,  KC_NO,  K706,  KC_NO,  K708,  K709,  K710,  K711,  K712,  K713,  KC_NO, KC_NO, KC_NO, K717  }  \
}
