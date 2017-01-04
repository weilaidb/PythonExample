#define _LINUX_TSACCT_KERN_H
extern void bacct_add_tsk(struct taskstats *stats, struct task_struct *tsk);
static inline void bacct_add_tsk(struct taskstats *stats, struct task_struct *tsk)
extern void xacct_add_tsk(struct taskstats *stats, struct task_struct *p);
extern void acct_update_integrals(struct task_struct *tsk);
extern void acct_clear_integrals(struct task_struct *tsk);
static inline void xacct_add_tsk(struct taskstats *stats, struct task_struct *p)
static inline void acct_update_integrals(struct task_struct *tsk)
static inline void acct_clear_integrals(struct task_struct *tsk)
