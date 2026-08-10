#include "key.h"

int go_flag = 0;
int stop_flag = 0;


void Key_scan(void)
{
    key_scanner();
    if(key_get_state(KEY_1)==KEY_SHORT_PRESS)
        {
            go_flag++;
        }

    if(key_get_state(KEY_2)==KEY_SHORT_PRESS)
        {
            BRIDGE_PEAK = 1;
        }
    if(key_get_state(KEY_3)==KEY_SHORT_PRESS)
        {
            BRIDGE_PEAK = 2;
        }

    if(key_get_state(KEY_4)==KEY_SHORT_PRESS)
        {
            guandao_flag ++;
        }
}


