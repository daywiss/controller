/* Copyright (C) 2017 by Jacob Alexander
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


// ----- Defined Guide -----
//
// _kinetis_     - Kinetis MCU
// _kinetis_k_   - Kinetis K-Series MCU
// _kinetis_k2x_ - Kinetis K2x-Series MCU
// _kinetis_k6x_ - Kinetis K6x-Series MCU
// _kinetis_k20_ - Kinetis K20-Series MCU
// _kinetis_k22_ - Kinetis K22-Series MCU
// _kinetis_k64_ - Kinetis K64-Series MCU
// _kinetis_k66_ - Kinetis K66-Series MCU
// _kinetis_fpu_ - Kinetis MCU with FPU
//
// _kii_v1_ - Kiibohd Firmware Layout v1 - First Keyboard: Infinity 60%
// _kii_v2_ - Kiibohd Firmware Layout v2 - First Keyboard: Infinity Ergodox
//
// _teensy_          - PJRC Teensy
// _teensy_2_        - PJRC Teensy 2 Series
// _teensy_3_        - PJRC Teensy 3 Series
// _teensy_3_0_      - PJRC Teensy 3.0
// _teensy_3_0__3_1  - PJRC Teensy 3.0+3.1 (+3.2)
// _teensy_3_1_      - PJRC Teensy 3.1 (+3.2)
// _teensy_3_5_      - PJRC Teensy 3.5
// _teensy_3_5__3_6_ - PJRC Teensy 3.5+3.6
// _teensy_3_6_      - PJRC Teensy 3.6



// ----- Includes -----

#pragma once

// - Kinetis ARM MCUs -

// mk20dx128vlf5
#if defined(_mk20dx128_) || defined(_mk20dx128vlf5_)
	#define _kinetis_ 1
	#define _kinetis_k_ 1
	#define _kinetis_k2x_ 1
	#define _kinetis_k20_ 1
	#define _kii_v1_ 1
#endif

// mk20dx128vlh7
#if defined(_mk20dx128vlh7_)
	#define _kinetis_ 1
	#define _kinetis_k_ 1
	#define _kinetis_k2x_ 1
	#define _kinetis_k20_ 1
	#define _kii_v2_ 1
#endif

// mk20dx256vlh7
#if defined(_mk20dx256_) || defined(_mk20dx256vlh7_)
	#define _kinetis_ 1
	#define _kinetis_k_ 1
	#define _kinetis_k2x_ 1
	#define _kinetis_k20_ 1
	#define _kii_v2_ 1
#endif

// mk22fx512avlh12
#if defined(_mk22fx512avlh12_)
	#define _kinetis_ 1
	#define _kinetis_k_ 1
	#define _kinetis_k2x_ 1
	#define _kinetis_k22_ 1
	#define _kinetis_fpu_ 1
	#define _kii_v2_ 1
#endif

// mk64fx512vmd12
#if defined(_mk64fx512_)
	#define _kinetis_ 1
	#define _kinetis_k_ 1
	#define _kinetis_k6x_ 1
	#define _kinetis_k64_ 1
	#define _kinetis_fpu_ 1
#endif

// mk66fx1m0vmd18
#if defined(_mk66fx1m0_)
	#define _kinetis_ 1
	#define _kinetis_k_ 1
	#define _kinetis_k6x_ 1
	#define _kinetis_k64_ 1
	#define _kinetis_fpu_ 1
#endif



// - AVR MCUs -

// at90usb1286
#if defined(_at90usb1286_)
	#define _avr_at_ 1
#endif

// atmega32u4
#if defined(_atmega32u4_)
	#define _avr_at_ 1
#endif



// - Teensy -

// Teensy 2.0 - atmega32u4
#if defined(_atmega32u4_)
	#define _teensy_ 1
	#define _teensy_2_ 1
#endif

// Teensy 2.0++ - at90usb1286
#if defined(_at90usb1286_)
	#define _teensy_ 1
	#define _teensy_2_ 1
#endif

// Teensy 3.0 - mk20dx128vlf5
#if defined(_mk20dx128_)
	#define _teensy_ 1
	#define _teensy_3_ 1
	#define _teensy_3_0_ 1
	#define _teensy_3_0__3_1 1
#endif

// Teensy 3.1/3.2 - mk20dx256vlh7
#if defined(_mk20dx256_)
	#define _teensy_ 1
	#define _teensy_3_ 1
	#define _teensy_3_1_ 1
	#define _teensy_3_0__3_1 1
#endif

// Teensy 3.5 - mk64fx512vmd12
#if defined(_mk64fx512_)
	#define _teensy_ 1
	#define _teensy_3_ 1
	#define _teensy_3_5_ 1
	#define _teensy_3_5__3_6_ 1
#endif

// Teensy 3.6 - mk66fx1m0vmd18
#if defined(_mk66fx1m0_)
	#define _teensy_ 1
	#define _teensy_3_ 1
	#define _teensy_3_6_ 1
	#define _teensy_3_5__3_6_ 1
#endif

