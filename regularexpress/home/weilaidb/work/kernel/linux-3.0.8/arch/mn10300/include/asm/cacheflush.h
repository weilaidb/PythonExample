#define _ASM_CACHEFLUSH_H
extern void mn10300_local_icache_inv(void);
extern void mn10300_local_icache_inv_page(unsigned long start);
extern void mn10300_local_icache_inv_range(unsigned long start, unsigned long end);
extern void mn10300_local_icache_inv_range2(unsigned long start, unsigned long size);
extern void mn10300_local_dcache_inv(void);
extern void mn10300_local_dcache_inv_page(unsigned long start);
extern void mn10300_local_dcache_inv_range(unsigned long start, unsigned long end);
extern void mn10300_local_dcache_inv_range2(unsigned long start, unsigned long size);
extern void mn10300_icache_inv(void);
extern void mn10300_icache_inv_page(unsigned long start);
extern void mn10300_icache_inv_range(unsigned long start, unsigned long end);
extern void mn10300_icache_inv_range2(unsigned long start, unsigned long size);
extern void mn10300_dcache_inv(void);
extern void mn10300_dcache_inv_page(unsigned long start);
extern void mn10300_dcache_inv_range(unsigned long start, unsigned long end);
extern void mn10300_dcache_inv_range2(unsigned long start, unsigned long size);
extern void mn10300_local_dcache_flush(void);
extern void mn10300_local_dcache_flush_page(unsigned long start);
extern void mn10300_local_dcache_flush_range(unsigned long start, unsigned long end);
extern void mn10300_local_dcache_flush_range2(unsigned long start, unsigned long size);
extern void mn10300_local_dcache_flush_inv(void);
extern void mn10300_local_dcache_flush_inv_page(unsigned long start);
extern void mn10300_local_dcache_flush_inv_range(unsigned long start, unsigned long end);
extern void mn10300_local_dcache_flush_inv_range2(unsigned long start, unsigned long size);
extern void mn10300_dcache_flush(void);
extern void mn10300_dcache_flush_page(unsigned long start);
extern void mn10300_dcache_flush_range(unsigned long start, unsigned long end);
extern void mn10300_dcache_flush_range2(unsigned long start, unsigned long size);
extern void mn10300_dcache_flush_inv(void);
extern void mn10300_dcache_flush_inv_page(unsigned long start);
extern void mn10300_dcache_flush_inv_range(unsigned long start, unsigned long end);
extern void mn10300_dcache_flush_inv_range2(unsigned long start, unsigned long size);
#define mn10300_local_dcache_flush()			do  while (0)
#define mn10300_local_dcache_flush_page(start)		do  while (0)
#define mn10300_local_dcache_flush_range(start, end)	do  while (0)
#define mn10300_local_dcache_flush_range2(start, size)	do  while (0)
#define mn10300_local_dcache_flush_inv() \
mn10300_local_dcache_inv()
#define mn10300_local_dcache_flush_inv_page(start) \
mn10300_local_dcache_inv_page(start)
#define mn10300_local_dcache_flush_inv_range(start, end) \
mn10300_local_dcache_inv_range(start, end)
#define mn10300_local_dcache_flush_inv_range2(start, size) \
mn10300_local_dcache_inv_range2(start, size)
#define mn10300_dcache_flush()				do  while (0)
#define mn10300_dcache_flush_page(start)		do  while (0)
#define mn10300_dcache_flush_range(start, end)		do  while (0)
#define mn10300_dcache_flush_range2(start, size)	do  while (0)
#define mn10300_dcache_flush_inv()			mn10300_dcache_inv()
#define mn10300_dcache_flush_inv_page(start) \
mn10300_dcache_inv_page((start))
#define mn10300_dcache_flush_inv_range(start, end) \
mn10300_dcache_inv_range((start), (end))
#define mn10300_dcache_flush_inv_range2(start, size) \
mn10300_dcache_inv_range2((start), (size))
#define mn10300_local_icache_inv()			do  while (0)
#define mn10300_local_icache_inv_page(start)		do  while (0)
#define mn10300_local_icache_inv_range(start, end)	do  while (0)
#define mn10300_local_icache_inv_range2(start, size)	do  while (0)
#define mn10300_local_dcache_inv()			do  while (0)
#define mn10300_local_dcache_inv_page(start)		do  while (0)
#define mn10300_local_dcache_inv_range(start, end)	do  while (0)
#define mn10300_local_dcache_inv_range2(start, size)	do  while (0)
#define mn10300_local_dcache_flush()			do  while (0)
#define mn10300_local_dcache_flush_inv_page(start)	do  while (0)
#define mn10300_local_dcache_flush_inv()		do  while (0)
#define mn10300_local_dcache_flush_inv_range(start, end)do  while (0)
#define mn10300_local_dcache_flush_inv_range2(start, size) do  while (0)
#define mn10300_local_dcache_flush_page(start)		do  while (0)
#define mn10300_local_dcache_flush_range(start, end)	do  while (0)
#define mn10300_local_dcache_flush_range2(start, size)	do  while (0)
#define mn10300_icache_inv()				do  while (0)
#define mn10300_icache_inv_page(start)			do  while (0)
#define mn10300_icache_inv_range(start, end)		do  while (0)
#define mn10300_icache_inv_range2(start, size)		do  while (0)
#define mn10300_dcache_inv()				do  while (0)
#define mn10300_dcache_inv_page(start)			do  while (0)
#define mn10300_dcache_inv_range(start, end)		do  while (0)
#define mn10300_dcache_inv_range2(start, size)		do  while (0)
#define mn10300_dcache_flush()				do  while (0)
#define mn10300_dcache_flush_inv_page(start)		do  while (0)
#define mn10300_dcache_flush_inv()			do  while (0)
#define mn10300_dcache_flush_inv_range(start, end)	do  while (0)
#define mn10300_dcache_flush_inv_range2(start, size)	do  while (0)
#define mn10300_dcache_flush_page(start)		do  while (0)
#define mn10300_dcache_flush_range(start, end)		do  while (0)
#define mn10300_dcache_flush_range2(start, size)	do  while (0)
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(mm, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do  while (0)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#if defined(CONFIG_MN10300_CACHE_FLUSH_ICACHE)
extern void flush_icache_page(struct vm_area_struct *vma, struct page *page);
extern void flush_icache_range(unsigned long start, unsigned long end);
#elif defined(CONFIG_MN10300_CACHE_INV_ICACHE)
static inline void flush_icache_page(struct vm_area_struct *vma,
struct page *page)
extern void flush_icache_range(unsigned long start, unsigned long end);
#define flush_icache_range(start, end)		do  while (0)
#define flush_icache_page(vma, pg)		do  while (0)
#define flush_icache_user_range(vma, pg, adr, len) \
flush_icache_range(adr, adr + len)
#define copy_to_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy(dst, src, len)
extern void kernel_map_pages(struct page *page, int numpages, int enable);
