/*
 * software_timer.h
 *
 *  Created on: Oct 3, 2023
 *      Author: Huy
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer0_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer0(int duration);
void runTime();

#endif /* INC_SOFTWARE_TIMER_H_ */
