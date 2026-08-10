#include "encoder.h"

#define LPF 0.6

//有刷
int BM_count=0;               //计数
float BM_actual=0.0f;           //实际值
float BM_actualint=0.0f;        //积分值

void ENCODER_get(void)
{

                //动量轮前进为+，后退为-
    //有刷计数
    BM_count=encoder_get_count(TIM5_ENCODER);
    //低通滤波
    BM_actual =((float) (BM_count));
//    BM_actual=(BM_actual*LPF)+(BM_count*(1-LPF));
    //积分
    BM_actualint += BM_actual;
    //计数清除
    encoder_clear_count(TIM5_ENCODER);

}

