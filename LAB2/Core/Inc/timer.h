/*
 * timer.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void timer_run(void);

#endif /* INC_TIMER_H_ */
