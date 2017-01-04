#define _ASMARM_CACHEFLUSH_H
#define CACHE_COLOUR(vaddr)	((vaddr & (SHMLBA - 1)) >> PAGE_SHIFT)
#define PG_dcache_clean PG_arch_1
struct cpu_cache_fns ;
extern struct cpu_cache_fns cpu_cache;
#define __cpuc_flush_icache_all		cpu_cache.flush_icache_all
#define __cpuc_flush_kern_all		cpu_cache.flush_kern_all
#define __cpuc_flush_user_all		cpu_cache.flush_user_all
#define __cpuc_flush_user_range		cpu_cache.flush_user_range
#define __cpuc_coherent_kern_range	cpu_cache.coherent_kern_range
#define __cpuc_coherent_user_range	cpu_cache.coherent_user_range
#define __cpuc_flush_dcache_area	cpu_cache.flush_kern_dcache_area
#define dmac_map_area			cpu_cache.dma_map_area
#define dmac_unmap_area			cpu_cache.dma_unmap_area
#define dmac_flush_range		cpu_cache.dma_flush_range
extern void __cpuc_flush_icache_all(void);
extern void __cpuc_flush_kern_all(void);
extern void __cpuc_flush_user_all(void);
extern void __cpuc_flush_user_range(unsigned long, unsigned long, unsigned int);
extern void __cpuc_coherent_kern_range(unsigned long, unsigned long);
extern void __cpuc_coherent_user_range(unsigned long, unsigned long);
extern void __cpuc_flush_dcache_area(void *, size_t);
extern void dmac_map_area(const void *, size_t, int);
extern void dmac_unmap_area(const void *, size_t, int);
extern void dmac_flush_range(const void *, const void *);
extern void copy_to_user_page(struct vm_area_struct *, struct page *,
unsigned long, void *, const void *, unsigned long);
#define copy_from_user_page(vma, page, vaddr, dst, src, len) \
do  while (0)
#define __flush_icache_all_generic()					\
asm("mcr	p15, 0, %0, c7, c5, 0"				\
: : "r" (0));
#define __flush_icache_all_v7_smp()					\
asm("mcr	p15, 0, %0, c7, c1, 0"				\
: : "r" (0));
#if (defined(CONFIG_CPU_V7) && \
(defined(CONFIG_CPU_V6) || defined(CONFIG_CPU_V6K))) || \
defined(CONFIG_SMP_ON_UP)
#define __flush_icache_preferred	__cpuc_flush_icache_all
#elif __LINUX_ARM_ARCH__ >= 7 && defined(CONFIG_SMP)
#define __flush_icache_preferred	__flush_icache_all_v7_smp
#elif __LINUX_ARM_ARCH__ == 6 && defined(CONFIG_ARM_ERRATA_411920)
#define __flush_icache_preferred	__cpuc_flush_icache_all
#define __flush_icache_preferred	__flush_icache_all_generic
static inline void __flush_icache_all(void)
#define flush_cache_all()		__cpuc_flush_kern_all()
static inline void vivt_flush_cache_mm(struct mm_struct *mm)
static inline void
vivt_flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end)
static inline void
vivt_flush_cache_page(struct vm_area_struct *vma, unsigned long user_addr, unsigned long pfn)
#define flush_cache_mm(mm) \
vivt_flush_cache_mm(mm)
#define flush_cache_range(vma,start,end) \
vivt_flush_cache_range(vma,start,end)
#define flush_cache_page(vma,addr,pfn) \
vivt_flush_cache_page(vma,addr,pfn)
extern void flush_cache_mm(struct mm_struct *mm);
extern void flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void flush_cache_page(struct vm_area_struct *vma, unsigned long user_addr, unsigned long pfn);
#define flush_cache_dup_mm(mm) flush_cache_mm(mm)
#define flush_cache_user_range(vma,start,end) \
__cpuc_coherent_user_range((start) & PAGE_MASK, PAGE_ALIGN(end))
#define flush_icache_range(s,e)		__cpuc_coherent_kern_range(s,e)
#define clean_dcache_area(start,size)	cpu_dcache_clean_area(start, size)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
extern void flush_dcache_page(struct page *);
static inline void flush_kernel_vmap_range(void *addr, int size)
static inline void invalidate_kernel_vmap_range(void *addr, int size)
#define ARCH_HAS_FLUSH_ANON_PAGE
static inline void flush_anon_page(struct vm_area_struct *vma,
struct page *page, unsigned long vmaddr)
#define ARCH_HAS_FLUSH_KERNEL_DCACHE_PAGE
static inline void flush_kernel_dcache_page(struct page *page)
#define flush_dcache_mmap_lock(mapping) \
spin_lock_irq(&(mapping)->tree_lock)
#define flush_dcache_mmap_unlock(mapping) \
spin_unlock_irq(&(mapping)->tree_lock)
#define flush_icache_user_range(vma,page,addr,len) \
flush_dcache_page(page)
#define flush_icache_page(vma,page)	do  while (0)
static inline void flush_cache_vmap(unsigned long start, unsigned long end)
static inline void flush_cache_vunmap(unsigned long start, unsigned long end)
