/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_G0B1CBTXN) || defined(ARDUINO_GENERIC_G0B1CBUXN) ||\
    defined(ARDUINO_GENERIC_G0B1CCTXN) || defined(ARDUINO_GENERIC_G0B1CCUXN) ||\
    defined(ARDUINO_GENERIC_G0B1CETXN) || defined(ARDUINO_GENERIC_G0B1CEUXN) ||\
    defined(ARDUINO_GENERIC_G0C1CCTXN) || defined(ARDUINO_GENERIC_G0C1CCUXN) ||\
    defined(ARDUINO_GENERIC_G0C1CETXN) || defined(ARDUINO_GENERIC_G0C1CEUXN)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D1/A0
  PA_1,   // D2/A1
  PA_2,   // D3/A2
  PA_3,   // D4/A3
  PA_4,   // D5/A4
  PA_5,   // D6/A5
  PA_6,   // D7/A6
  PA_7,   // D8/A7
  PA_8,   // D9
  PA_9,   // D10
  PA_10,  // D11
  PA_11,  // D12
  PA_12,  // D13
  PA_13,  // D14
  PA_14,  // D15
  PA_15,  // D16
  PB_0,   // D17/A8
  PB_1,   // D18/A9
  PB_2,   // D19/A10
  PB_3,   // D20
  PB_4,   // D21
  PB_5,   // D22
  PB_6,   // D23
  PB_7,   // D24
  PB_8,   // D25
  PB_9,   // D26
  PB_10,  // D27/A11
  PB_11,  // D28/A12
  PB_12,  // D29/A13
  PB_13,  // D30
  PB_14,  // D31
  PB_15,  // D32
  PC_13,  // D33
  PC_14,  // D34
  PC_15,  // D35
  PD_0,   // D36
  PD_1,   // D37
  PD_2,   // D38
  PD_3,   // D39
  PF_0,   // D40
  PF_1,   // D41
  PF_2,   // D42
  PA_9_R, // D43
  PA_10_R // D44
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  16, // A8,  PB0
  17, // A9,  PB1
  18, // A10, PB2
  26, // A11, PB10
  27, // A12, PB11
  28  // A13, PB12
};

#endif /* ARDUINO_GENERIC_* */
