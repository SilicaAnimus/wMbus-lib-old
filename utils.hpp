/***********************************************************************************
    Filename: utils.hpp
***********************************************************************************/

#ifndef _UTILS_H
#define _UTILS_H

#include <Arduino.h>
#include <stdint.h>

//----------------------------------------------------------------------------------
//  Function Declareration
//----------------------------------------------------------------------------------
void dumpHex(uint8_t* data, uint8_t len, bool newLine = true);

#endif