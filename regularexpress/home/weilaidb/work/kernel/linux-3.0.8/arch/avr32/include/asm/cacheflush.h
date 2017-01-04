#define __ASM_AVR32_CACHEFLUSH_H
#define CACHE_OP_ICACHE_INVALIDATE	0x01
#define CACHE_OP_DCACHE_INVALIDATE	0x0b
#define CACHE_OP_DCACHE_CLEAN		0x0c
#define CACHE_OP_DCACHE_CLEAN_INVAL	0x0d
static inline void invalidate_dcache_line(void *vaddr)
static inline void clean_dcache_line(void *vaddr)
static inline void flush_dcache_line(void *vaddr)
static inline void invalidate_icache_line(void *vaddr)
void invalidate_dcache_region(void *start, size_t len);
void clean_dcache_region(void *start, size_t len);
void flush_dcache_region(void *start, size_t len);
void invalidate_icache_region(void *start, size_t len);
#define flush_write_buffer() asm volatile("sync 0" : : : "memory")
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define flush_cache_vmap(start, end)		do  while (0)
#define flush_cache_vunmap(start, end)		do  while (0)
extern void flush_icache_page(struct vm_area_struct *vma, struct page *page);
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do  while (0)
#define flush_dcache_mmap_lock(page)		do  while (0)
#define flush_dcache_mmap_unlock(page)		do  while (0)
extern void flush_icache_range(unsigned long start, unsigned long end);
extern void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long vaddr, void *dst, const void *src,
unsigned long len);
static inline void copy_from_user_page(struct vm_area_struct *vma,
struct page *page, unsigned long vaddr, void *dst,
const void *src, unsigned long len)
