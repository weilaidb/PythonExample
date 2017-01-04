#define _ALPHA_RWSEM_H
#error "please don't include asm/rwsem.h directly, use linux/rwsem.h instead"
#define RWSEM_UNLOCKED_VALUE		0x0000000000000000L
#define RWSEM_ACTIVE_BIAS		0x0000000000000001L
#define RWSEM_ACTIVE_MASK		0x00000000ffffffffL
#define RWSEM_WAITING_BIAS		(-0x0000000100000000L)
#define RWSEM_ACTIVE_READ_BIAS		RWSEM_ACTIVE_BIAS
#define RWSEM_ACTIVE_WRITE_BIAS		(RWSEM_WAITING_BIAS + RWSEM_ACTIVE_BIAS)
static inline void __down_read(struct rw_semaphore *sem)
static inline int __down_read_trylock(struct rw_semaphore *sem)
static inline void __down_write(struct rw_semaphore *sem)
static inline int __down_write_trylock(struct rw_semaphore *sem)
static inline void __up_read(struct rw_semaphore *sem)
static inline void __up_write(struct rw_semaphore *sem)
static inline void __downgrade_write(struct rw_semaphore *sem)
static inline void rwsem_atomic_add(long val, struct rw_semaphore *sem)
static inline long rwsem_atomic_update(long val, struct rw_semaphore *sem)
