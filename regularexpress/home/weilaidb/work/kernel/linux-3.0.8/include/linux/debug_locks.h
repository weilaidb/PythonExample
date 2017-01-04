#define __LINUX_DEBUG_LOCKING_H
struct task_struct;
extern int debug_locks;
extern int debug_locks_silent;
static inline int __debug_locks_off(void)
extern int debug_locks_off(void);
#define DEBUG_LOCKS_WARN_ON(c)						\
()
# define SMP_DEBUG_LOCKS_WARN_ON(c)			DEBUG_LOCKS_WARN_ON(c)
# define SMP_DEBUG_LOCKS_WARN_ON(c)			do  while (0)
extern void locking_selftest(void);
# define locking_selftest()	do  while (0)
struct task_struct;
extern void debug_show_all_locks(void);
extern void debug_show_held_locks(struct task_struct *task);
extern void debug_check_no_locks_freed(const void *from, unsigned long len);
extern void debug_check_no_locks_held(struct task_struct *task);
static inline void debug_show_all_locks(void)
static inline void debug_show_held_locks(struct task_struct *task)
static inline void
debug_check_no_locks_freed(const void *from, unsigned long len)
static inline void
debug_check_no_locks_held(struct task_struct *task)
