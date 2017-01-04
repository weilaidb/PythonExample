void __init_rwsem(struct rw_semaphore *sem, const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL(__init_rwsem);
struct rwsem_waiter ;
#define RWSEM_WAKE_ANY        0
#define RWSEM_WAKE_NO_ACTIVE  1
#define RWSEM_WAKE_READ_OWNED 2
static struct rw_semaphore *
__rwsem_do_wake(struct rw_semaphore *sem, int wake_type)
static struct rw_semaphore __sched *
rwsem_down_failed_common(struct rw_semaphore *sem,
unsigned int flags, signed long adjustment)
struct rw_semaphore __sched *rwsem_down_read_failed(struct rw_semaphore *sem)
struct rw_semaphore __sched *rwsem_down_write_failed(struct rw_semaphore *sem)
struct rw_semaphore *rwsem_wake(struct rw_semaphore *sem)
struct rw_semaphore *rwsem_downgrade_wake(struct rw_semaphore *sem)
EXPORT_SYMBOL(rwsem_down_read_failed);
EXPORT_SYMBOL(rwsem_down_write_failed);
EXPORT_SYMBOL(rwsem_wake);
EXPORT_SYMBOL(rwsem_downgrade_wake);
