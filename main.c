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
    
    u32 uwOut = 0;
    
    u32 uwInWord = 0x3c;
    
    u32 uwOutWord = 0;
    
    uwValue = GetBit(&uwWord, uwStart);
    
    SetBit(&uwWord, uwStart + 1, 1);
    
    printf("value is = 0x%x \n", uwValue);
    
    printf("word is = 0x%x \n", uwWord);
    
    GetXbits(&uwWord, 0, 3, 0, &uwOut);
    
    printf("uwOut is = 0x%x \n", uwOut);
    
    SetXbits(&uwInWord, 2, 4, &uwOutWord,0);
    
    printf("uwOutWord is = 0x%x \n", uwOutWord);
    
    return 0;
}
