#define _ASM_POWERPC_ISERIES_IT_LP_QUEUE_H
#define IT_LP_MAX_QUEUES	8
#define IT_LP_NOT_USED		0
#define IT_LP_DEDICATED_IO	1
#define IT_LP_DEDICATED_LP	2
#define IT_LP_SHARED		3
#define IT_LP_EVENT_STACK_SIZE	4096
#define IT_LP_EVENT_MAX_SIZE	256
#define IT_LP_EVENT_ALIGN	64
struct hvlpevent_queue ;
extern struct hvlpevent_queue hvlpevent_queue;
extern int hvlpevent_is_pending(void);
extern void process_hvlpevents(void);
extern void setup_hvlpevent_queue(void);
