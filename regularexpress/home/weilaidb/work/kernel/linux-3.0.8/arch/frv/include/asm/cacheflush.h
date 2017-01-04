#define _ASM_CACHEFLUSH_H
#define flush_cache_all()			do  while(0)
#define flush_cache_mm(mm)			do  while(0)
#define flush_cache_dup_mm(mm)			do  while(0)
#define flush_cache_range(mm, start, end)	do  while(0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while(0)
#define flush_cache_vmap(start, end)		do  while(0)
#define flush_cache_vunmap(start, end)		do  while(0)
#define flush_dcache_mmap_lock(mapping)		do  while(0)
#define flush_dcache_mmap_unlock(mapping)	do  while(0)
extern void frv_dcache_writeback(unsigned long start, unsigned long size);
extern void frv_cache_invalidate(unsigned long start, unsigned long size);
extern void frv_icache_invalidate(unsigned long start, unsigned long size);
extern void frv_cache_wback_inv(unsigned long start, unsigned long size);
static inline void __flush_cache_all(void)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
extern void flush_dcache_page(struct page *page);
static inline void flush_dcache_page(struct page *page)
static inline void flush_page_to_ram(struct page *page)
static inline void flush_icache(void)
static inline void flush_icache_range(unsigned long start, unsigned long end)
extern void flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long start, unsigned long len);
static inline void flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long start, unsigned long len)
static inline void flush_icache_page(struct vm_area_struct *vma, struct page *page)
#define copy_to_user_page(vma, page, vaddr, dst, src, len)	\
do  while(0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len)	\
memcpy((dst), (src), (len))
