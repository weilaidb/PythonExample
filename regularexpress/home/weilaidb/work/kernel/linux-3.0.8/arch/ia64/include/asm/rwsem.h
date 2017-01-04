#define _ASM_IA64_RWSEM_H
#error "Please don't include <asm/rwsem.h> directly, use <linux/rwsem.h> instead."
#define RWSEM_UNLOCKED_VALUE		__IA64_UL_CONST(0x0000000000000000)
#define RWSEM_ACTIVE_BIAS		(1L)
#define RWSEM_ACTIVE_MASK		(0xffffffffL)
#define RWSEM_WAITING_BIAS		(-0x100000000L)
#define RWSEM_ACTIVE_READ_BIAS		RWSEM_ACTIVE_BIAS
#define RWSEM_ACTIVE_WRITE_BIAS		(RWSEM_WAITING_BIAS + RWSEM_ACTIVE_BIAS)
static inline void
__down_read (struct rw_semaphore *sem)
static inline void
__down_write (struct rw_semaphore *sem)
static inline void
__up_read (struct rw_semaphore *sem)
static inline void
__up_write (struct rw_semaphore *sem)
static inline int
__down_read_trylock (struct rw_semaphore *sem)
static inline int
__down_write_trylock (struct rw_semaphore *sem)
static inline void
__downgrade_write (struct rw_semaphore *sem)
#define rwsem_atomic_add(delta, sem)	atomic64_add(delta, (atomic64_t *)(&(sem)->count))
#define rwsem_atomic_update(delta, sem)	atomic64_add_return(delta, (atomic64_t *)(&(sem)->count))
