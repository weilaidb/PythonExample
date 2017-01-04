void bacct_add_tsk(struct taskstats *stats, struct task_struct *tsk)
#define KB 1024
#define MB (1024*KB)
void xacct_add_tsk(struct taskstats *stats, struct task_struct *p)
#undef KB
#undef MB
void acct_update_integrals(struct task_struct *tsk)
void acct_clear_integrals(struct task_struct *tsk)
