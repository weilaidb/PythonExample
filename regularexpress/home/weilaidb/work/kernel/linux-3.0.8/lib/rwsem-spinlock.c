struct rwsem_waiter ;
int rwsem_is_locked(struct rw_semaphore *sem)
EXPORT_SYMBOL(rwsem_is_locked);
void __init_rwsem(struct rw_semaphore *sem, const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL(__init_rwsem);
static inline struct rw_semaphore *
__rwsem_do_wake(struct rw_semaphore *sem, int wakewrite)
static inline struct rw_semaphore *
__rwsem_wake_one_writer(struct rw_semaphore *sem)
void __sched __down_read(struct rw_semaphore *sem)
int __down_read_trylock(struct rw_semaphore *sem)
void __sched __down_write_nested(struct rw_semaphore *sem, int subclass)
void __sched __down_write(struct rw_semaphore *sem)
int __down_write_trylock(struct rw_semaphore *sem)
void __up_read(struct rw_semaphore *sem)
void __up_write(struct rw_semaphore *sem)
void __downgrade_write(struct rw_semaphore *sem)
