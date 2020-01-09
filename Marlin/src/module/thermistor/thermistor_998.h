/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */
#pragma once

// User-defined table 1
// My PT100 calibrated
const temp_entry_t temptable_998[] PROGMEM = {
  { OV( 245),   0 },
  { OV( 287),  50 },
  { OV( 327), 100 },
  { OV( 366), 150 },
  { OV( 403), 200 },
  { OV( 439), 250 },
  { OV( 473), 300 },  // Interpolated
  { OV( 505), 350 },  // Interpolated
  { OV( 536), 400 }   // Interpolated
};
