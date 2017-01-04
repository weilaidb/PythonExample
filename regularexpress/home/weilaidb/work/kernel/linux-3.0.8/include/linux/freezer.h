#define FREEZER_H_INCLUDED
static inline int frozen(struct task_struct *p)
static inline int freezing(struct task_struct *p)
static inline void set_freeze_flag(struct task_struct *p)
static inline void clear_freeze_flag(struct task_struct *p)
static inline bool should_send_signal(struct task_struct *p)
extern int thaw_process(struct task_struct *p);
extern void refrigerator(void);
extern int freeze_processes(void);
extern void thaw_processes(void);
static inline int try_to_freeze(void)
extern bool freeze_task(struct task_struct *p, bool sig_only);
extern void cancel_freezing(struct task_struct *p);
extern int cgroup_freezing_or_frozen(struct task_struct *task);
static inline int cgroup_freezing_or_frozen(struct task_struct *task)
static inline void freezer_do_not_count(void)
static inline void freezer_count(void)
static inline int freezer_should_skip(struct task_struct *p)
static inline void set_freezable(void)
static inline void set_freezable_with_signal(void)
#define wait_event_freezable(wq, condition)				\
()
#define wait_event_freezable_timeout(wq, condition, timeout)		\
()
static inline int frozen(struct task_struct *p)
static inline int freezing(struct task_struct *p)
static inline void set_freeze_flag(struct task_struct *p)
static inline void clear_freeze_flag(struct task_struct *p)
static inline int thaw_process(struct task_struct *p)
static inline void refrigerator(void)
static inline int freeze_processes(void)
static inline void thaw_processes(void)
static inline int try_to_freeze(void)
static inline void freezer_do_not_count(void)
static inline void freezer_count(void)
static inline int freezer_should_skip(struct task_struct *p)
static inline void set_freezable(void)
static inline void set_freezable_with_signal(void)
#define wait_event_freezable(wq, condition)				\
wait_event_interruptible(wq, condition)
#define wait_event_freezable_timeout(wq, condition, timeout)		\
wait_event_interruptible_timeout(wq, condition, timeout)
