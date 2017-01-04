#define __ARCH_ICACHE_H__
static __inline void
invalidate_icache(const void* addr, unsigned long size,
unsigned long page_size)
