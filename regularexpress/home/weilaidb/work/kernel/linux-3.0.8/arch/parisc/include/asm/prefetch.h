#define __ASM_PARISC_PREFETCH_H
#define ARCH_HAS_PREFETCH
static inline void prefetch(const void *addr)
#define ARCH_HAS_PREFETCHW
static inline void prefetchw(const void *addr)
