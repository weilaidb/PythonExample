#define _XTENSA_CACHEFLUSH_H
extern void __invalidate_dcache_all(void);
extern void __invalidate_icache_all(void);
extern void __invalidate_dcache_page(unsigned long);
extern void __invalidate_icache_page(unsigned long);
extern void __invalidate_icache_range(unsigned long, unsigned long);
extern void __invalidate_dcache_range(unsigned long, unsigned long);
#if XCHAL_DCACHE_IS_WRITEBACK
extern void __flush_invalidate_dcache_all(void);
extern void __flush_dcache_page(unsigned long);
extern void __flush_dcache_range(unsigned long, unsigned long);
extern void __flush_invalidate_dcache_page(unsigned long);
extern void __flush_invalidate_dcache_range(unsigned long, unsigned long);
# define __flush_dcache_range(p,s)		do  while(0)
# define __flush_dcache_page(p)			do  while(0)
# define __flush_invalidate_dcache_page(p) 	__invalidate_dcache_page(p)
# define __flush_invalidate_dcache_range(p,s)	__invalidate_dcache_range(p,s)
#if defined(CONFIG_MMU) && (DCACHE_WAY_SIZE > PAGE_SIZE)
extern void __flush_invalidate_dcache_page_alias(unsigned long, unsigned long);
static inline void __flush_invalidate_dcache_page_alias(unsigned long virt,
unsigned long phys)
#if defined(CONFIG_MMU) && (ICACHE_WAY_SIZE > PAGE_SIZE)
extern void __invalidate_icache_page_alias(unsigned long, unsigned long);
static inline void __invalidate_icache_page_alias(unsigned long virt,
unsigned long phys)
#if (DCACHE_WAY_SIZE > PAGE_SIZE)
#define flush_cache_all()						\
do  while (0)
#define flush_cache_mm(mm)		flush_cache_all()
#define flush_cache_dup_mm(mm)		flush_cache_mm(mm)
#define flush_cache_vmap(start,end)	flush_cache_all()
#define flush_cache_vunmap(start,end)	flush_cache_all()
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
extern void flush_dcache_page(struct page*);
extern void flush_cache_range(struct vm_area_struct*, ulong, ulong);
extern void flush_cache_page(struct vm_area_struct*, unsigned long, unsigned long);
#define flush_cache_all()				do  while (0)
#define flush_cache_mm(mm)				do  while (0)
#define flush_cache_dup_mm(mm)				do  while (0)
#define flush_cache_vmap(start,end)			do  while (0)
#define flush_cache_vunmap(start,end)			do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)				do  while (0)
#define flush_cache_page(vma,addr,pfn)			do  while (0)
#define flush_cache_range(vma,start,end)		do  while (0)
#define flush_icache_range(start,end) 					\
do  while (0)
#define	flush_icache_page(vma,page)			do  while (0)
#define flush_dcache_mmap_lock(mapping)			do  while (0)
#define flush_dcache_mmap_unlock(mapping)		do  while (0)
#if (DCACHE_WAY_SIZE > PAGE_SIZE)
extern void copy_to_user_page(struct vm_area_struct*, struct page*,
unsigned long, void*, const void*, unsigned long);
extern void copy_from_user_page(struct vm_area_struct*, struct page*,
unsigned long, void*, const void*, unsigned long);
#define copy_to_user_page(vma, page, vaddr, dst, src, len)		\
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
memcpy(dst, src, len)
#define XTENSA_CACHEBLK_LOG2	29
#define XTENSA_CACHEBLK_SIZE	(1 << XTENSA_CACHEBLK_LOG2)
#define XTENSA_CACHEBLK_MASK	(7 << XTENSA_CACHEBLK_LOG2)
#if XCHAL_HAVE_CACHEATTR
static inline u32 xtensa_get_cacheattr(void)
static inline u32 xtensa_get_dtlb1(u32 addr)
static inline u32 xtensa_get_dtlb1(u32 addr)
static inline u32 xtensa_get_cacheattr(void)
static inline int xtensa_need_flush_dma_source(u32 addr)
static inline int xtensa_need_invalidate_dma_destination(u32 addr)
static inline void flush_dcache_unaligned(u32 addr, u32 size)
static inline void invalidate_dcache_unaligned(u32 addr, u32 size)
static inline void flush_invalidate_dcache_unaligned(u32 addr, u32 size)
