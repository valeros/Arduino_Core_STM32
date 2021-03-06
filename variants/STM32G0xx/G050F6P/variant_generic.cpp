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
#if defined(ARDUINO_GENERIC_G050F6PX)
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
  PA_11,  // D10/A8
  PA_12,  // D11/A9
  PA_13,  // D12/A10
  PA_14,  // D13/A11
  PA_15,  // D14
  PB_0,   // D15/A12
  PB_1,   // D16/A13
  PB_2,   // D17/A14
  PB_3,   // D18
  PB_4,   // D19
  PB_5,   // D20
  PB_6,   // D21
  PB_7,   // D22/A15
  PB_8,   // D23
  PB_9,   // D24
  PC_14,  // D25
  PC_15,  // D26
  PF_2,   // D27
  PA_9_R, // D28
  PA_10_R // D29
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
  9,  // A8,  PA11
  10, // A9,  PA12
  11, // A10, PA13
  12, // A11, PA14
  14, // A12, PB0
  15, // A13, PB1
  16, // A14, PB2
  21  // A15, PB7
};

#endif /* ARDUINO_GENERIC_* */
