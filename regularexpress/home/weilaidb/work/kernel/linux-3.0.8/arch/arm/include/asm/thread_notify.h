#define ASMARM_THREAD_NOTIFY_H
static inline int thread_register_notifier(struct notifier_block *n)
static inline void thread_unregister_notifier(struct notifier_block *n)
static inline void thread_notify(unsigned long rc, struct thread_info *thread)
#define THREAD_NOTIFY_FLUSH	0
#define THREAD_NOTIFY_EXIT	1
#define THREAD_NOTIFY_SWITCH	2
#define THREAD_NOTIFY_COPY	3
