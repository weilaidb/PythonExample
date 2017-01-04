#define _ASM_POWERPC_RWSEM_H
#error "Please don't include <asm/rwsem.h> directly, use <linux/rwsem.h> instead."
# define RWSEM_ACTIVE_MASK		0xffffffffL
# define RWSEM_ACTIVE_MASK		0x0000ffffL
#define RWSEM_UNLOCKED_VALUE		0x00000000L
#define RWSEM_ACTIVE_BIAS		0x00000001L
#define RWSEM_WAITING_BIAS		(-RWSEM_ACTIVE_MASK-1)
#define RWSEM_ACTIVE_READ_BIAS		RWSEM_ACTIVE_BIAS
#define RWSEM_ACTIVE_WRITE_BIAS		(RWSEM_WAITING_BIAS + RWSEM_ACTIVE_BIAS)
static inline void __down_read(struct rw_semaphore *sem)
static inline int __down_read_trylock(struct rw_semaphore *sem)
static inline void __down_write_nested(struct rw_semaphore *sem, int subclass)
static inline void __down_write(struct rw_semaphore *sem)
static inline int __down_write_trylock(struct rw_semaphore *sem)
static inline void __up_read(struct rw_semaphore *sem)
static inline void __up_write(struct rw_semaphore *sem)
static inline void rwsem_atomic_add(long delta, struct rw_semaphore *sem)
static inline void __downgrade_write(struct rw_semaphore *sem)
static inline long rwsem_atomic_update(long delta, struct rw_semaphore *sem)
