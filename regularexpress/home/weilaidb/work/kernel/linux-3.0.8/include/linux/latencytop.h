#define _INCLUDE_GUARD_LATENCYTOP_H_
#define LT_SAVECOUNT		32
#define LT_BACKTRACEDEPTH	12
struct latency_record ;
struct task_struct;
extern int latencytop_enabled;
void __account_scheduler_latency(struct task_struct *task, int usecs, int inter);
static inline void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
void clear_all_latency_tracing(struct task_struct *p);
static inline void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
static inline void clear_all_latency_tracing(struct task_struct *p)
