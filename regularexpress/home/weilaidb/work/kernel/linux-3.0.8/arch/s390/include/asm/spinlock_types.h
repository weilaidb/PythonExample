#define __ASM_SPINLOCK_TYPES_H
# error "please don't include this file directly"
typedef struct  __attribute__ ((aligned (4))) arch_spinlock_t;
#define __ARCH_SPIN_LOCK_UNLOCKED
typedef struct  arch_rwlock_t;
#define __ARCH_RW_LOCK_UNLOCKED
