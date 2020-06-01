/*
 * This file is part of Cleanflight, Betaflight and INAV.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight, Betaflight and INAV are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#define MSP2_IS_SENSOR_MESSAGE(x)   ((x) >= 0x1F00 && (x) <= 0x1FFF)

#define MSP2_SENSOR_RANGEFINDER     0x1F01
#define MSP2_SENSOR_OPTIC_FLOW      0x1F02

#define MSP2_SENSOR_BATTERY_CELL_VOLTAGE 0x1F11