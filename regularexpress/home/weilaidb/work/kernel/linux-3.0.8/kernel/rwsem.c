void __sched down_read(struct rw_semaphore *sem)
EXPORT_SYMBOL(down_read);
int down_read_trylock(struct rw_semaphore *sem)
EXPORT_SYMBOL(down_read_trylock);
void __sched down_write(struct rw_semaphore *sem)
EXPORT_SYMBOL(down_write);
int down_write_trylock(struct rw_semaphore *sem)
EXPORT_SYMBOL(down_write_trylock);
void up_read(struct rw_semaphore *sem)
EXPORT_SYMBOL(up_read);
void up_write(struct rw_semaphore *sem)
EXPORT_SYMBOL(up_write);
void downgrade_write(struct rw_semaphore *sem)
EXPORT_SYMBOL(downgrade_write);
void down_read_nested(struct rw_semaphore *sem, int subclass)
EXPORT_SYMBOL(down_read_nested);
void down_read_non_owner(struct rw_semaphore *sem)
EXPORT_SYMBOL(down_read_non_owner);
void down_write_nested(struct rw_semaphore *sem, int subclass)
EXPORT_SYMBOL(down_write_nested);
void up_read_non_owner(struct rw_semaphore *sem)
EXPORT_SYMBOL(up_read_non_owner);
