/* Copyright (C)
* 2015 - John Melton, G0ORX/N6LYT
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*
*/

extern int ENABLE_VFO_ENCODER;
extern int ENABLE_VFO_PULLUP;
extern int VFO_ENCODER_A;
extern int VFO_ENCODER_B;
extern int VFO_ENCODER_A_PIN;
extern int VFO_ENCODER_B_PIN;
extern int ENABLE_AF_ENCODER;
extern int ENABLE_AF_PULLUP;
extern int AF_ENCODER_A;
extern int AF_ENCODER_B;
extern int ENABLE_RF_ENCODER;
extern int ENABLE_RF_PULLUP;
extern int RF_ENCODER_A;
extern int RF_ENCODER_B;
extern int ENABLE_AGC_ENCODER;
extern int ENABLE_AGC_PULLUP;
extern int AGC_ENCODER_A;
extern int AGC_ENCODER_B;
extern int ENABLE_BAND_BUTTON;
extern int BAND_BUTTON;
extern int ENABLE_BANDSTACK_BUTTON;
extern int BANDSTACK_BUTTON;
extern int ENABLE_MODE_BUTTON;
extern int MODE_BUTTON;
extern int ENABLE_FILTER_BUTTON;
extern int FILTER_BUTTON;
extern int ENABLE_NOISE_BUTTON;
extern int NOISE_BUTTON;
extern int ENABLE_AGC_BUTTON;
extern int AGC_BUTTON;
extern int ENABLE_MOX_BUTTON;
extern int MOX_BUTTON;
extern int ENABLE_FUNCTION_BUTTON;
extern int FUNCTION_BUTTON;

void gpio_restore_state();
void gpio_save_state();
int gpio_init();
void gpio_close();
int vfo_encoder_get_pos();
int af_encoder_get_pos();
int af_function_get_state();
int rf_encoder_get_pos();
int rf_function_get_state();
int function_get_state();
int band_get_state();
int mode_get_state();
int filter_get_state();
int noise_get_state();
int mox_get_state();
