#ifndef _MW_CUSTOM_RTOS_HEADER_H_
#define _MW_CUSTOM_RTOS_HEADER_H_
#define MW_BASERATE_PRIORITY           40
#define MW_BASERATE_PERIOD             0.00018140589569160998
#define MW_NUMBER_SUBRATES             2
#define MW_NUMBER_APERIODIC_TASKS      0
#define MW_IS_CONCURRENT               0
#define MW_NUMBER_TIMER_DRIVEN_TASKS   0
#define MW_HAS_MULTIPLE_RATES

extern void exitFcn(int sig);
extern void *terminateTask(void *arg);
extern void *baseRateTask(void *arg);
extern void *subrateTask(void *arg);
extern pthread_t schedulerThread;
extern pthread_t baseRateThread;
extern pthread_t subRateThread[];
extern sem_t stopSem;
extern sem_t baserateTaskSem;
extern sem_t subrateTaskSem[];
extern int taskId[];
extern int subratePriority[];

#endif

#define MW_MAX_TASKNAME                16
