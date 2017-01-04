#define __SPARC_SMPPRIM_H
static inline __volatile__ char test_and_set(void *addr)
static inline __volatile__ smp_initlock(void *spinlock)
static inline __volatile__ smp_lock(void *addr)
static inline __volatile__ smp_unlock(void *addr)
