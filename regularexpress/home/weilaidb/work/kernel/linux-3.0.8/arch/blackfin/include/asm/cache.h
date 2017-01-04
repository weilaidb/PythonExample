#define __ARCH_BLACKFIN_CACHE_H
#define L1_CACHE_SHIFT	5
#define L1_CACHE_BYTES	(1 << L1_CACHE_SHIFT)
#define SMP_CACHE_BYTES	L1_CACHE_BYTES
#define ARCH_DMA_MINALIGN	L1_CACHE_BYTES
#define __cacheline_aligned
#define ____cacheline_aligned
#define __cacheline_aligned				\
__attribute__((__aligned__(L1_CACHE_BYTES),	\
__section__(".data_l1.cacheline_aligned")))
#define L1_CACHE_SHIFT_MAX	5
#if defined(CONFIG_SMP) && \
!defined(CONFIG_BFIN_CACHE_COHERENT)
# if defined(CONFIG_BFIN_EXTMEM_ICACHEABLE) || defined(CONFIG_BFIN_L2_ICACHEABLE)
# define __ARCH_SYNC_CORE_ICACHE
# endif
# if defined(CONFIG_BFIN_EXTMEM_DCACHEABLE) || defined(CONFIG_BFIN_L2_DCACHEABLE)
# define __ARCH_SYNC_CORE_DCACHE
# endif
asmlinkage void __raw_smp_mark_barrier_asm(void);
asmlinkage void __raw_smp_check_barrier_asm(void);
static inline void smp_mark_barrier(void)
static inline void smp_check_barrier(void)
void resync_core_dcache(void);
void resync_core_icache(void);
