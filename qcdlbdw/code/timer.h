#include "zf_common_headfile.h"

#ifndef CODE_TIMER_H_
#define CODE_TIMER_H_


typedef struct
{
    unsigned char T_2ms;
    unsigned char T_8ms;
    unsigned char T_10ms;
    unsigned char T_20ms;
    unsigned char T_100ms;
    unsigned char T_1s;
}Timer_0;

extern Timer_0 Flag;

void Fuse_result(void);


#endif
