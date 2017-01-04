#define _ASM_POWERPC_MUTEX_H
static inline int __mutex_cmpxchg_lock(atomic_t *v, int old, int new)
static inline int __mutex_dec_return_lock(atomic_t *v)
static inline int __mutex_inc_return_unlock(atomic_t *v)
static inline void
__mutex_fastpath_lock(atomic_t *count, void (*fail_fn)(atomic_t *))
static inline int
__mutex_fastpath_lock_retval(atomic_t *count, int (*fail_fn)(atomic_t *))
static inline void
__mutex_fastpath_unlock(atomic_t *count, void (*fail_fn)(atomic_t *))
#define __mutex_slowpath_needs_to_unlock()		1
static inline int
__mutex_fastpath_trylock(atomic_t *count, int (*fail_fn)(atomic_t *))
