//
//  main.c
//  lijiangbing
//
//  Created by Bryan.Li on 2018/10/21.
//  Copyright © 2018年 hw. All rights reserved.
//

#include <stdio.h>
#include "BitProc.h"

int main(int argc, const char * argv[])
{
    
    
    u32 uwWord = 0x4;
    
    u32 uwValue = 0;
    
    u32 uwStart = 2;
    
    uwValue = GetBit(&uwWord, uwStart);
    
    printf("value is = %d \n", uwValue);
    
    return 0;
}
