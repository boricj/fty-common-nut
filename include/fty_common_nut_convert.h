/*  =========================================================================
    fty_common_nut_convert - class description

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef FTY_COMMON_NUT_CONVERT_H_INCLUDED
#define FTY_COMMON_NUT_CONVERT_H_INCLUDED

#include "fty_common_nut_utils.h"

namespace nutcommon {
    std::string performMapping(const KeyValues &mapping, const std::string &key, int daisychain);
    KeyValues performMapping(const KeyValues &mapping, const KeyValues &values, int daisychain);
    KeyValues loadMapping(const std::string &file, const std::string &type);
}

//  Self test of this class
void fty_common_nut_convert_test(bool verbose);

#endif
