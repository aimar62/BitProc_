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

void SetBit(u32 * puwIn, u32 uwStart,u32 uwValue)
{
    
}