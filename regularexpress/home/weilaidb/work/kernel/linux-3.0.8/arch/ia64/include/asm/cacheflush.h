#define _ASM_IA64_CACHEFLUSH_H
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define flush_icache_page(vma,page)		do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
#define flush_dcache_page(page)			\
do  while (0)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
extern void flush_icache_range (unsigned long start, unsigned long end);
extern void clflush_cache_range(void *addr, int size);
#define flush_icache_user_range(vma, page, user_addr, len)					\
do  while (0)
#define copy_to_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy(dst, src, len)
