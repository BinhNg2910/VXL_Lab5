/*
 * scheduler.h
 *
 *  Created on: Dec 1, 2023
 *      Author: vanbi
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct {
	void (*pTask)(void);
	uint32_t	Delay;
	uint32_t	Period;
	uint8_t 	RunMe;

	uint32_t	TaskID;
}sTasks;

#define SCH_MAX_TASKS 40
#define NO_TASK_ID 0;
sTasks SCH_tasks_G[SCH_MAX_TASKS];

void SCH_Init(void);

void SCH_Add_Task(	void (*pFunction)(),
					uint32_t DELAY,
					uint32_t PERIOD);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

void SCH_Delete(uint32_t ID);

#endif /* INC_SCHEDULER_H_ */
