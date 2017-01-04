static noinline void __down(struct semaphore *sem);
static noinline int __down_interruptible(struct semaphore *sem);
static noinline int __down_killable(struct semaphore *sem);
static noinline int __down_timeout(struct semaphore *sem, long jiffies);
static noinline void __up(struct semaphore *sem);
void down(struct semaphore *sem)
EXPORT_SYMBOL(down);
int down_interruptible(struct semaphore *sem)
EXPORT_SYMBOL(down_interruptible);
int down_killable(struct semaphore *sem)
EXPORT_SYMBOL(down_killable);
int down_trylock(struct semaphore *sem)
EXPORT_SYMBOL(down_trylock);
int down_timeout(struct semaphore *sem, long jiffies)
EXPORT_SYMBOL(down_timeout);
void up(struct semaphore *sem)
EXPORT_SYMBOL(up);
struct semaphore_waiter ;
static inline int __sched __down_common(struct semaphore *sem, long state,
long timeout)
static noinline void __sched __down(struct semaphore *sem)
static noinline int __sched __down_interruptible(struct semaphore *sem)
static noinline int __sched __down_killable(struct semaphore *sem)
static noinline int __sched __down_timeout(struct semaphore *sem, long jiffies)
static noinline void __sched __up(struct semaphore *sem)
