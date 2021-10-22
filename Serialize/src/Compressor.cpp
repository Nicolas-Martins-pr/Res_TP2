#include "Compressor.h"


int Compressor::IntCompressor(int val) {

    unsigned int absVal = abs(val);
        uint32_t valComp;
    if (absVal <= UINT8_MAX)
        valComp = absVal;
    else if (absVal <= UINT16_MAX)
        valComp = absVal;
    else if (absVal <= UINT32_MAX)
        valComp = absVal;

    return valComp;
}