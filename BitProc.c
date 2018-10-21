//
//  BitProc.c
//  lijiangbing
//
//  Created by Bryan.Li on 2018/10/21.
//  Copyright © 2018年 hw. All rights reserved.
//

#include "BitProc.h"


u32 GetBit(u32 * puwIn, u32 uwStart)
{
    u32 uwWord;
    u32 uwBit;
    
    uwWord = uwStart >> 5;
    uwBit  = uwStart & 0x1f;
    
    return (puwIn[uwWord]>>uwBit ) & 0x1;
}

void bitset1(u32 * puwIn, u32 uwStart,u32 uwValue)
{
    u32 uwWord;
    u32 uwBit;
    
    uwWord = uwStart >> 5;
    uwBit  = uwStart & 0x1f;
    
    puwIn[uwWord] = puwIn[uwWord] ^ (1 << uwBit);
    
}


void bitset0(u32 * puwIn, u32 uwStart,u32 uwValue)
{
    u32 uwWord;
    u32 uwBit;
    u32 uwMask;
    
    uwWord = uwStart >> 5;
    uwBit  = uwStart & 0x1f;
    
    uwMask = ~(1 << uwBit);
    puwIn[uwWord] = puwIn[uwWord] & uwMask;
    
}

typedef void (*BitSet01)(u32 * puwIn, u32 uwStart,u32 uwValue);

void SetBit(u32 * puwIn, u32 uwStart,u32 uwValue)
{
    static BitSet01 afun[2] = {bitset0,bitset1};
    
    afun[uwValue & 0x1](puwIn,uwStart,uwValue);
    
}


void GetXbits(u32 * puwIn, u32 uwStart,u32 uwNum, u32 uwOutstart, u32 *puwOut)
{
    u32 uwloop;
    u32 uwvalue;
    
    for(uwloop = 0; uwloop < uwNum; uwloop++)
    {
        uwvalue = GetBit(puwIn, uwStart + uwloop);
        SetBit(puwOut, uwOutstart + uwloop, uwvalue);
    }
}

void SetXbits()
{
    
}

