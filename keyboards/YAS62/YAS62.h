/* Copyright 2020 ruwey
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define ___ KC_NO
/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_all( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1e,  \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2e,  \
    k30, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3d, k3c,  \
    k40, k41, k42, k48, k4c, k4e, k4d, k4f \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, ___, ___ },  \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, ___, k1e, ___ },  \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, ___, ___, k2e, ___ },  \
    { k30, ___, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, ___, ___ },  \
    { k40, k41, k42, ___, ___, ___, ___, ___, k48, ___, ___, ___, k4c, k4d, k4e, k4f }, \
}
