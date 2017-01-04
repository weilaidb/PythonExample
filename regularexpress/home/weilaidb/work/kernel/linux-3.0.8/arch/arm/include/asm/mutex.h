#define _ASM_MUTEX_H
#if __LINUX_ARM_ARCH__ < 6
# include <asm-generic/mutex-xchg.h>
static inline void
__mutex_fastpath_lock(atomic_t *count, void (*fail_fn)(atomic_t *))
static inline int
__mutex_fastpath_lock_retval(atomic_t *count, int (*fail_fn)(atomic_t *))
static inline void
__mutex_fastpath_unlock(atomic_t *count, void (*fail_fn)(atomic_t *))
#define __mutex_slowpath_needs_to_unlock()	1
static inline int
__mutex_fastpath_trylock(atomic_t *count, int (*fail_fn)(atomic_t *))
