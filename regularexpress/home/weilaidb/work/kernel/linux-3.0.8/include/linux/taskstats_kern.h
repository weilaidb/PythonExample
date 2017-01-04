#define _LINUX_TASKSTATS_KERN_H
extern struct kmem_cache *taskstats_cache;
extern struct mutex taskstats_exit_mutex;
static inline void taskstats_tgid_free(struct signal_struct *sig)
extern void taskstats_exit(struct task_struct *, int group_dead);
extern void taskstats_init_early(void);
static inline void taskstats_exit(struct task_struct *tsk, int group_dead)
static inline void taskstats_tgid_free(struct signal_struct *sig)
static inline void taskstats_init_early(void)
