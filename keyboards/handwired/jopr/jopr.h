#pragma once

#include "quantum.h"

#define LAYOUT( \
    K000,  K001, K002, K003, K004,  K005, K006, K007, K008,  K009, K600, K601, K602,  K603,  K604, K605, K606, K607, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K700, K701, K702, K703,      K704, K705, K706, K707, \
    K200,   K201, K202, K203, K204, K205, K206, K207, K208, K209, K800, K801, K802, K803,    K804, K805, K806, K807, \
    K300,    K301, K302, K303, K304, K305, K306, K307, K308, K309, K900, K901, K902,         K904, K905, K906,        K907, K110, K010, \
    K400,  K401, K402, K403, K404, K405, K406, K407, K408, K409, K908, K808, K708,           K608, K909, K809, K709,  K609, K310, K210, \
    K500,  K501,  K502,  K503,                            K509,  K508,  K910,  K504,         K810,       K710,        K610, K510, K410 \
) \
{ \
    { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010 }, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110 }, \
    { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210 }, \
    { K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310 }, \
    { K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410 }, \
    { K500, K501, K502, K503, K504, KC_NO, KC_NO, KC_NO, K508, K509, K510 }, \
    { K600, K601, K602, K603, K604, K605, K606, K607, K608, K609, K610 }, \
    { K700, K701, K702, K703, K704, K705, K706, K707, K708, K709, K710 }, \
    { K800, K801, K802, K803, K804, K805, K806, K807, K808, K809, K810 }, \
    { K900, K901, K902, KC_NO, K904, K905, K906, K907, K908, K909, K910 } \
}