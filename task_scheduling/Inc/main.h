/*
 * main.h
 *
 *  Created on: May 24, 2024
 *      Author: User
 */

#ifndef MAIN_H_
#define MAIN_H_

//Step 2 : Define Macros for Stack pointer
#define SRAM_START			 0x20000000u
#define SRAM_SIZE			 ((128)*(1024))
#define STACK_SIZE			 1024u
#define SRAM_END 			 ((SRAM_START)+(SRAM_SIZE))

#define T1_STACK_START 		 SRAM_END //full descending stack operation
#define T2_STACK_START 		 ((STACK_SIZE)-(STACK_SIZE))
#define T3_STACK_START 		 ((STACK_SIZE)-(2*STACK_SIZE))
#define T4_STACK_START 		 ((STACK_SIZE)-(3*STACK_SIZE))
#define IDLE_STACK_START     ((STACK_SIZE)-(4*STACK_SIZE))
#define SCH_STACK_START 	 ((STACK_SIZE)-(5*STACK_SIZE))

#define TICK_HZ				 1000u //1KHz
#define HSI_Clock  			 16000000u //16MHz
#define SysTick_count_clock	 HSI_Clock

#define MAX_TASK			 5 //for this example (4 task user + 1 idle task)
#define DUMMY_xPSR 			 0x01000000u
#define DUMMY_LR             0xFFFFFFFDu

#define TASK_READY_STATE     0x00
#define TASK_BLOCKED_STATE   0xFF

#endif /* MAIN_H_ */
