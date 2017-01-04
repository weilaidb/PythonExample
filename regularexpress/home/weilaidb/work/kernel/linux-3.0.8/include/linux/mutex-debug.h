#define __LINUX_MUTEX_DEBUG_H
#define __DEBUG_MUTEX_INITIALIZER(lockname)				\
, .magic = &lockname
#define mutex_init(mutex)						\
do  while (0)
extern void mutex_destroy(struct mutex *lock);
