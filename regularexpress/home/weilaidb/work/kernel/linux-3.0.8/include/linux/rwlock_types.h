#define __LINUX_RWLOCK_TYPES_H
typedef struct  rwlock_t;
#define RWLOCK_MAGIC		0xdeaf1eed
# define RW_DEP_MAP_INIT(lockname)	.dep_map =
# define RW_DEP_MAP_INIT(lockname)
#define __RW_LOCK_UNLOCKED(lockname)					\
(rwlock_t)
#define __RW_LOCK_UNLOCKED(lockname) \
(rwlock_t)
#define DEFINE_RWLOCK(x)	rwlock_t x = __RW_LOCK_UNLOCKED(x)
