#define SCHEDSTAT_VERSION 15
static int show_schedstat(struct seq_file *seq, void *v)
static int schedstat_open(struct inode *inode, struct file *file)
static const struct file_operations proc_schedstat_operations = ;
static int __init proc_schedstat_init(void)
module_init(proc_schedstat_init);
static inline void
rq_sched_info_arrive(struct rq *rq, unsigned long long delta)
static inline void
rq_sched_info_depart(struct rq *rq, unsigned long long delta)
static inline void
rq_sched_info_dequeued(struct rq *rq, unsigned long long delta)
# define schedstat_inc(rq, field)	do  while (0)
# define schedstat_add(rq, field, amt)	do  while (0)
# define schedstat_set(var, val)	do  while (0)
static inline void
rq_sched_info_arrive(struct rq *rq, unsigned long long delta)
static inline void
rq_sched_info_dequeued(struct rq *rq, unsigned long long delta)
static inline void
rq_sched_info_depart(struct rq *rq, unsigned long long delta)
# define schedstat_inc(rq, field)	do  while (0)
# define schedstat_add(rq, field, amt)	do  while (0)
# define schedstat_set(var, val)	do  while (0)
#if defined(CONFIG_SCHEDSTATS) || defined(CONFIG_TASK_DELAY_ACCT)
static inline void sched_info_reset_dequeued(struct task_struct *t)
static inline void sched_info_dequeued(struct task_struct *t)
static void sched_info_arrive(struct task_struct *t)
static inline void sched_info_queued(struct task_struct *t)
static inline void sched_info_depart(struct task_struct *t)
static inline void
__sched_info_switch(struct task_struct *prev, struct task_struct *next)
static inline void
sched_info_switch(struct task_struct *prev, struct task_struct *next)
#define sched_info_queued(t)			do  while (0)
#define sched_info_reset_dequeued(t)	do  while (0)
#define sched_info_dequeued(t)			do  while (0)
#define sched_info_switch(t, next)		do  while (0)
static inline void account_group_user_time(struct task_struct *tsk,
cputime_t cputime)
static inline void account_group_system_time(struct task_struct *tsk,
cputime_t cputime)
static inline void account_group_exec_runtime(struct task_struct *tsk,
unsigned long long ns)
