#define __LINUX_SPINLOCK_TYPES_H
#if defined(CONFIG_SMP)
# include <asm/spinlock_types.h>
# include <linux/spinlock_types_up.h>
typedef struct raw_spinlock  raw_spinlock_t;
#define SPINLOCK_MAGIC		0xdead4ead
#define SPINLOCK_OWNER_INIT	((void *)-1L)
# define SPIN_DEP_MAP_INIT(lockname)	.dep_map =
# define SPIN_DEP_MAP_INIT(lockname)
# define SPIN_DEBUG_INIT(lockname)		\
.magic = SPINLOCK_MAGIC,		\
.owner_cpu = -1,			\
.owner = SPINLOCK_OWNER_INIT,
# define SPIN_DEBUG_INIT(lockname)
#define __RAW_SPIN_LOCK_INITIALIZER(lockname)	\
#define __RAW_SPIN_LOCK_UNLOCKED(lockname)	\
(raw_spinlock_t) __RAW_SPIN_LOCK_INITIALIZER(lockname)
#define DEFINE_RAW_SPINLOCK(x)	raw_spinlock_t x = __RAW_SPIN_LOCK_UNLOCKED(x)
typedef struct spinlock  spinlock_t;
#define __SPIN_LOCK_INITIALIZER(lockname) \
#define __SPIN_LOCK_UNLOCKED(lockname) \
(spinlock_t ) __SPIN_LOCK_INITIALIZER(lockname)
#define DEFINE_SPINLOCK(x)	spinlock_t x = __SPIN_LOCK_UNLOCKED(x)
