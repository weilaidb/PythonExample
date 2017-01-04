#define _BLACKFIN_CACHEFLUSH_H
extern void blackfin_icache_flush_range(unsigned long start_address, unsigned long end_address);
extern void blackfin_dcache_flush_range(unsigned long start_address, unsigned long end_address);
extern void blackfin_dcache_invalidate_range(unsigned long start_address, unsigned long end_address);
extern void blackfin_dflush_page(void *page);
extern void blackfin_invalidate_entire_dcache(void);
extern void blackfin_invalidate_entire_icache(void);
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr)		do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
#define flush_icache_range_others(start, end)	\
smp_icache_flush_range_others((start), (end))
#define flush_icache_range_others(start, end)	do  while (0)
static inline void flush_icache_range(unsigned start, unsigned end)
#define copy_to_user_page(vma, page, vaddr, dst, src, len)		\
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len)	memcpy(dst, src, len)
#if defined(CONFIG_BFIN_DCACHE)
# define invalidate_dcache_range(start,end)	blackfin_dcache_invalidate_range((start), (end))
# define invalidate_dcache_range(start,end)	do  while (0)
#if defined(CONFIG_BFIN_EXTMEM_WRITEBACK) || defined(CONFIG_BFIN_L2_WRITEBACK)
# define flush_dcache_range(start,end)		blackfin_dcache_flush_range((start), (end))
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
# define flush_dcache_page(page)		blackfin_dflush_page(page_address(page))
# define flush_dcache_range(start,end)		do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
# define flush_dcache_page(page)		do  while (0)
extern unsigned long reserved_mem_dcache_on;
extern unsigned long reserved_mem_icache_on;
static inline int bfin_addr_dcacheable(unsigned long addr)
