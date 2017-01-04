#define _LINUX_PREFETCH_H
#define prefetch(x) __builtin_prefetch(x)
#define prefetchw(x) __builtin_prefetch(x,1)
#define spin_lock_prefetch(x) prefetchw(x)
#define PREFETCH_STRIDE (4*L1_CACHE_BYTES)
static inline void prefetch_range(void *addr, size_t len)
