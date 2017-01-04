#define __LINUX_SEMAPHORE_H
struct semaphore ;
#define __SEMAPHORE_INITIALIZER(name, n)				\
#define DEFINE_SEMAPHORE(name)	\
struct semaphore name = __SEMAPHORE_INITIALIZER(name, 1)
static inline void sema_init(struct semaphore *sem, int val)
extern void down(struct semaphore *sem);
extern int __must_check down_interruptible(struct semaphore *sem);
extern int __must_check down_killable(struct semaphore *sem);
extern int __must_check down_trylock(struct semaphore *sem);
extern int __must_check down_timeout(struct semaphore *sem, long jiffies);
extern void up(struct semaphore *sem);
