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

#endif /* BitProc_h */
