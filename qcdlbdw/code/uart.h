/*
 * uart.h
 *
 *  Created on: 2025年3月31日
 *      Author: Administrator
 */

#ifndef CODE_UART_H_
#define CODE_UART_H_

#include "zf_common_headfile.h"
//#ifndef CODE_QZ_VOFA__H_
//#define CODE_QZ_VOFA__H_

#define USART_REC_LEN           200     //定义最大接收字节数 200

extern uint8 uart_get_data[200];                                                        // 串口接收数据缓冲区
extern uint8 fifo_get_data[200];
extern uint8_t USART_TX_BUF[200];
extern uint8  USART_TX_BUF[USART_REC_LEN];  //发收缓冲,最大USART_REC_LEN个字节.末字节为换行符
extern uint8_t rxIndex;

void UART_INIT(void);
void u1_printf(char* fmt,...);
float Get_Data(void);
void USART_PID_Adjust(void);
void uart_rx_interrupt_handler (void);
extern float ceshi;





#endif /* CODE_UART_H_ */
