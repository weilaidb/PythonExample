#define _ALPHA_CACHEFLUSH_H
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do  while (0)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
#define flush_icache_range(start, end)		imb()
#define flush_icache_range(start, end)		smp_imb()
extern void smp_imb(void);
extern void __load_new_mm_context(struct mm_struct *);
static inline void
flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long addr, int len)
extern void flush_icache_user_range(struct vm_area_struct *vma,
struct page *page, unsigned long addr, int len);
#define flush_icache_page(vma, page) \
flush_icache_user_range((vma), (page), 0, 0)
#define copy_to_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy(dst, src, len)
