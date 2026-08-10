#include "zf_common_headfile.h"

#ifndef CODE_PID_H_
#define CODE_PID_H_

//定义结构体
typedef struct
{
    float Kp;                       //比例常数
    float Ki;                       //积分常数
    float Kd;                       //微分常数
    float Ek;                       //误差值
    float Ek1;                      //上次误差值
    float Ek2;                      //上上次误差值/误差累加
    float max_i;
    float max_out;
} PID_IncTypeDef;
//全局声明
//横滚
extern PID_IncTypeDef   roll_angle_wheel, roll_anglespeed_wheel, roll_speed_wheel;
extern float            pidout_1b, pidout_2b, pidout_3b, pidout_4b, pidout_5b, pidout_6b,
                        pidout_1f, pidout_2f, pidout_3f, pidout_4f, pidout_5f, pidout_6f;
//俯仰
extern PID_IncTypeDef   pitch_angle_wheel, pitch_anglespeed_wheel, pitch_speed_wheel;
extern float            pidout_1, pidout_2, pidout_3;
//机械
extern float roll_zero, pitch_zero, pitch_zero_set;          //机械零点
extern float zero_dynamic;
extern float zero_k1, zero_k2;//0.00549
extern float Angle_Z;
extern uint8 speed_flag;
extern float run_speed;
extern uint8 moto_mode;
//程序声明
void PID_Inc_Init(PID_IncTypeDef* sptr, float kp, float ki, float kd, float max_i, float max_out);
float Positional_PID(PID_IncTypeDef* PID, float SetValue, float ActualValue);
float Incremental_PID(PID_IncTypeDef* PID, float SetValue, float ActualValue);
void PID_param_init(void);

float ROLL_ANGLE_LOOP(float value);
float ROLL_ANGLESPEED_LOOP(float value);
float ROLL_SPEED_LOOP(float value);
float PITCH_ANGLE_LOOP(float value);
float PITCH_ANGLESPEED_LOOP(float value);
float PITCH_SPEED_LOOP(float value);
float YAW_ANGLESPEED_LOOP(float value);
float YAW_ANGLE_LOOP(float value);
float dynamic_zero(float angle, float speed);

#endif
