#define _ASM_SCORE_CACHEFLUSH_H
extern void flush_cache_all(void);
extern void flush_cache_mm(struct mm_struct *mm);
extern void flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
extern void flush_cache_page(struct vm_area_struct *vma,
unsigned long page, unsigned long pfn);
extern void flush_cache_sigtramp(unsigned long addr);
extern void flush_icache_all(void);
extern void flush_icache_range(unsigned long start, unsigned long end);
extern void flush_dcache_range(unsigned long start, unsigned long end);
extern void flush_dcache_page(struct page *page);
#define PG_dcache_dirty         PG_arch_1
#define flush_cache_dup_mm(mm)			do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
static inline void flush_icache_page(struct vm_area_struct *vma,
struct page *page)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy(dst, src, len)
#define copy_to_user_page(vma, page, vaddr, dst, src, len)	\
do  while (0)
