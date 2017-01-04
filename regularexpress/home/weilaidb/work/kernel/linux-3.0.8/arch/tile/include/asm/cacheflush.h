#define _ASM_TILE_CACHEFLUSH_H
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
#define flush_icache_page(vma, pg)		do  while (0)
#define flush_icache_user_range(vma, pg, adr, len)	do  while (0)
extern void __flush_icache_range(unsigned long start, unsigned long end);
#define __flush_icache() __flush_icache_range(0, CHIP_L1I_CACHE_SIZE())
extern void flush_icache_range(unsigned long start, unsigned long end);
#define flush_icache_range __flush_icache_range
static inline void copy_to_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr,
void *dst, void *src, int len)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy((dst), (src), (len))
static inline void __inv_buffer(void *buffer, size_t size)
static inline void __flush_buffer(void *buffer, size_t size)
static inline void __finv_buffer(void *buffer, size_t size)
static inline void inv_buffer(void *buffer, size_t size)
static inline void flush_buffer_local(void *buffer, size_t size)
static inline void finv_buffer_local(void *buffer, size_t size)
void finv_buffer_remote(void *buffer, size_t size, int hfh);
