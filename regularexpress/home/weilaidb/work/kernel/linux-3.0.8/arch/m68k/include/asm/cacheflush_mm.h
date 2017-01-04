#define _M68K_CACHEFLUSH_H
#define FLUSH_I_AND_D	(0x00000808)
#define FLUSH_I		(0x00000008)
static inline void flush_icache(void)
extern void cache_clear(unsigned long paddr, int len);
extern void cache_push(unsigned long paddr, int len);
extern void cache_push_v(unsigned long vaddr, int len);
#define __flush_cache_all()					\
()
#define __flush_cache_030()					\
()
#define flush_cache_all() __flush_cache_all()
#define flush_cache_vmap(start, end)		flush_cache_all()
#define flush_cache_vunmap(start, end)		flush_cache_all()
static inline void flush_cache_mm(struct mm_struct *mm)
#define flush_cache_dup_mm(mm)			flush_cache_mm(mm)
static inline void flush_cache_range(struct vm_area_struct *vma,
unsigned long start,
unsigned long end)
static inline void flush_cache_page(struct vm_area_struct *vma, unsigned long vmaddr, unsigned long pfn)
static inline void __flush_page_to_ram(void *vaddr)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
#define flush_dcache_page(page)		__flush_page_to_ram(page_address(page))
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_icache_page(vma, page)	__flush_page_to_ram(page_address(page))
extern void flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long addr, int len);
extern void flush_icache_range(unsigned long address, unsigned long endaddr);
static inline void copy_to_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr,
void *dst, void *src, int len)
static inline void copy_from_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr,
void *dst, void *src, int len)
