#define _ASM_CACHEFLUSH_H
extern void (*flush_cache_all)(void);
extern void (*__flush_cache_all)(void);
extern void (*flush_cache_mm)(struct mm_struct *mm);
#define flush_cache_dup_mm(mm)	do  while (0)
extern void (*flush_cache_range)(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
extern void (*flush_cache_page)(struct vm_area_struct *vma, unsigned long page, unsigned long pfn);
extern void __flush_dcache_page(struct page *page);
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
static inline void flush_dcache_page(struct page *page)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define ARCH_HAS_FLUSH_ANON_PAGE
extern void __flush_anon_page(struct page *, unsigned long);
static inline void flush_anon_page(struct vm_area_struct *vma,
struct page *page, unsigned long vmaddr)
static inline void flush_icache_page(struct vm_area_struct *vma,
struct page *page)
extern void (*flush_icache_range)(unsigned long start, unsigned long end);
extern void (*local_flush_icache_range)(unsigned long start, unsigned long end);
extern void (*__flush_cache_vmap)(void);
static inline void flush_cache_vmap(unsigned long start, unsigned long end)
extern void (*__flush_cache_vunmap)(void);
static inline void flush_cache_vunmap(unsigned long start, unsigned long end)
extern void copy_to_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst, const void *src,
unsigned long len);
extern void copy_from_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst, const void *src,
unsigned long len);
extern void (*flush_cache_sigtramp)(unsigned long addr);
extern void (*flush_icache_all)(void);
extern void (*local_flush_data_cache_page)(void * addr);
extern void (*flush_data_cache_page)(unsigned long addr);
#define PG_dcache_dirty			PG_arch_1
#define Page_dcache_dirty(page)		\
test_bit(PG_dcache_dirty, &(page)->flags)
#define SetPageDcacheDirty(page)	\
set_bit(PG_dcache_dirty, &(page)->flags)
#define ClearPageDcacheDirty(page)	\
clear_bit(PG_dcache_dirty, &(page)->flags)
unsigned long run_uncached(void *func);
extern void *kmap_coherent(struct page *page, unsigned long addr);
extern void kunmap_coherent(void);
