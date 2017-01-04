#define _ASM_M32R_SPINLOCK_TYPES_H
# error "please don't include this file directly"
typedef struct  arch_spinlock_t;
#define __ARCH_SPIN_LOCK_UNLOCKED
typedef struct  arch_rwlock_t;
#define RW_LOCK_BIAS			0x01000000
#define RW_LOCK_BIAS_STR		"0x01000000"
#define __ARCH_RW_LOCK_UNLOCKED
