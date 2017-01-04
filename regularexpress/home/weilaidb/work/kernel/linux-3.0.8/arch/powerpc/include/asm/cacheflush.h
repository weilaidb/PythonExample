#define _ASM_POWERPC_CACHEFLUSH_H
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define flush_icache_page(vma, page)		do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
extern void flush_dcache_page(struct page *page);
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
extern void __flush_icache_range(unsigned long, unsigned long);
static inline void flush_icache_range(unsigned long start, unsigned long stop)
extern void flush_icache_user_range(struct vm_area_struct *vma,
struct page *page, unsigned long addr,
int len);
extern void __flush_dcache_icache(void *page_va);
extern void flush_dcache_icache_page(struct page *page);
#if defined(CONFIG_PPC32) && !defined(CONFIG_BOOKE)
extern void __flush_dcache_icache_phys(unsigned long physaddr);
extern void flush_dcache_range(unsigned long start, unsigned long stop);
extern void clean_dcache_range(unsigned long start, unsigned long stop);
extern void invalidate_dcache_range(unsigned long start, unsigned long stop);
extern void flush_inval_dcache_range(unsigned long start, unsigned long stop);
extern void flush_dcache_phys_range(unsigned long start, unsigned long stop);
#define copy_to_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy(dst, src, len)
void kernel_map_pages(struct page *page, int numpages, int enable);
