#define _LINUX_RWSEM_H
struct rw_semaphore;
struct rw_semaphore ;
extern struct rw_semaphore *rwsem_down_read_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_down_write_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_wake(struct rw_semaphore *);
extern struct rw_semaphore *rwsem_downgrade_wake(struct rw_semaphore *sem);
static inline int rwsem_is_locked(struct rw_semaphore *sem)
# define __RWSEM_DEP_MAP_INIT(lockname) , .dep_map =
# define __RWSEM_DEP_MAP_INIT(lockname)
#define __RWSEM_INITIALIZER(name) \
#define DECLARE_RWSEM(name) \
struct rw_semaphore name = __RWSEM_INITIALIZER(name)
extern void __init_rwsem(struct rw_semaphore *sem, const char *name,
struct lock_class_key *key);
#define init_rwsem(sem)						\
do  while (0)
extern void down_read(struct rw_semaphore *sem);
extern int down_read_trylock(struct rw_semaphore *sem);
extern void down_write(struct rw_semaphore *sem);
extern int down_write_trylock(struct rw_semaphore *sem);
extern void up_read(struct rw_semaphore *sem);
extern void up_write(struct rw_semaphore *sem);
extern void downgrade_write(struct rw_semaphore *sem);
extern void down_read_nested(struct rw_semaphore *sem, int subclass);
extern void down_write_nested(struct rw_semaphore *sem, int subclass);
extern void down_read_non_owner(struct rw_semaphore *sem);
extern void up_read_non_owner(struct rw_semaphore *sem);
# define down_read_nested(sem, subclass)		down_read(sem)
# define down_write_nested(sem, subclass)	down_write(sem)
# define down_read_non_owner(sem)		down_read(sem)
# define up_read_non_owner(sem)			up_read(sem)
