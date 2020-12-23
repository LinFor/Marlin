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

// Thermistor lookup table for Marlin
// ./createTemperatureLookupMarlin.py --rp=4700 --t1=26.2:93520.40816326541 --t2=72.6:15105.761316872424 --t3=130.5:2773.2919254658386 --num-temps=36
// Steinhart-Hart Coefficients: a=0.000552109686762688, b=0.00024214465386724, c=1.12632916408875e-08
// Theoretical limits of thermistor: -41.60 to 812.18 degC
const temp_entry_t temptable_999[] PROGMEM = {
  { OV( 166.83),  180 }, // v=0.538   r=914.729       res=0.357 degC/count
  { OV( 181.42),  175 }, // v=0.585   r=1011.957      res=0.327 degC/count
  { OV( 197.35),  170 }, // v=0.636   r=1122.052      res=0.300 degC/count
  { OV( 214.72),  165 }, // v=0.692   r=1247.033      res=0.275 degC/count
  { OV( 233.63),  160 }, // v=0.753   r=1389.288      res=0.253 degC/count
  { OV( 254.15),  155 }, // v=0.819   r=1551.642      res=0.234 degC/count
  { OV( 276.38),  150 }, // v=0.891   r=1737.456      res=0.216 degC/count
  { OV( 300.35),  145 }, // v=0.968   r=1950.739      res=0.201 degC/count
  { OV( 326.12),  140 }, // v=1.051   r=2196.286      res=0.187 degC/count
  { OV( 353.68),  135 }, // v=1.140   r=2479.858      res=0.176 degC/count
  { OV( 383.01),  130 }, // v=1.234   r=2808.396      res=0.165 degC/count
  { OV( 414.04),  125 }, // v=1.334   r=3190.301      res=0.157 degC/count
  { OV( 446.63),  120 }, // v=1.439   r=3635.776      res=0.150 degC/count
  { OV( 480.63),  115 }, // v=1.549   r=4157.263      res=0.144 degC/count
  { OV( 515.78),  110 }, // v=1.662   r=4770.001      res=0.140 degC/count
  { OV( 551.82),  105 }, // v=1.778   r=5492.733      res=0.137 degC/count
  { OV( 588.40),  100 }, // v=1.896   r=6348.617      res=0.136 degC/count
  { OV( 625.14),   95 }, // v=2.015   r=7366.397      res=0.136 degC/count
  { OV( 661.64),   90 }, // v=2.132   r=8581.926      res=0.138 degC/count
  { OV( 697.49),   85 }, // v=2.248   r=10040.145     res=0.141 degC/count
  { OV( 732.27),   80 }, // v=2.360   r=11797.686     res=0.147 degC/count
  { OV( 765.61),   75 }, // v=2.467   r=13926.290     res=0.154 degC/count
  { OV( 797.17),   70 }, // v=2.569   r=16517.359     res=0.164 degC/count
  { OV( 826.66),   65 }, // v=2.664   r=19688.014     res=0.176 degC/count
  { OV( 853.87),   60 }, // v=2.752   r=23589.254     res=0.192 degC/count
  { OV( 878.67),   55 }, // v=2.832   r=28416.982     res=0.213 degC/count
  { OV( 901.00),   50 }, // v=2.904   r=34427.035     res=0.238 degC/count
  { OV( 920.84),   45 }, // v=2.968   r=41955.813     res=0.269 degC/count
  { OV( 938.28),   40 }, // v=3.024   r=51448.825     res=0.309 degC/count
  { OV( 953.43),   35 }, // v=3.073   r=63500.482     res=0.358 degC/count
  { OV( 966.44),   30 }, // v=3.114   r=78910.060     res=0.420 degC/count
  { OV( 977.48),   25 }, // v=3.150   r=98761.082     res=0.498 degC/count
  { OV( 986.76),   20 }, // v=3.180   r=124534.939    res=0.598 degC/count
  { OV( 994.47),   15 }, // v=3.205   r=158275.083    res=0.725 degC/count
  { OV(1000.81),   10 }, // v=3.225   r=202826.658    res=0.891 degC/count
  { OV(1005.97),    5 }, // v=3.242   r=262189.875    res=1.107 degC/count
  { OV(1010.12),    0 }  // v=3.255   r=342046.833    res=1.393 degC/count
};
