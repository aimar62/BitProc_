//
//  BitProc.h
//  lijiangbing
//
//  Created by Bryan.Li on 2018/10/21.
//  Copyright © 2018年 hw. All rights reserved.
//

#ifndef BitProc_h
#define BitProc_h

#include <stdio.h>
#include "BaseTypeDef.h"

u32 GetBit(u32 * puwIn, u32 uwStart);
void SetBit(u32 * puwIn, u32 uwStart,u32 uwValue);
void GetXbits(u32 * puwIn, u32 uwStart,u32 uwNum, u32 uwOutstart, u32 *puwOut);
void SetXbits(u32 *puwIn,u32 uwInstart,u32 uwlen,u32 *puwdest,u32 uwOutstart);
#endif /* BitProc_h */
