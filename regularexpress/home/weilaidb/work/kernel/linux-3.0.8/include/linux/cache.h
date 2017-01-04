#define __LINUX_CACHE_H
#define L1_CACHE_ALIGN(x) ALIGN(x, L1_CACHE_BYTES)
#define SMP_CACHE_BYTES L1_CACHE_BYTES
#define __read_mostly
#define ____cacheline_aligned __attribute__((__aligned__(SMP_CACHE_BYTES)))
#define ____cacheline_aligned_in_smp ____cacheline_aligned
#define ____cacheline_aligned_in_smp
#define __cacheline_aligned					\
__attribute__((__aligned__(SMP_CACHE_BYTES),			\
__section__(".data..cacheline_aligned")))
#define __cacheline_aligned_in_smp __cacheline_aligned
#define __cacheline_aligned_in_smp
#define INTERNODE_CACHE_SHIFT L1_CACHE_SHIFT
#if !defined(____cacheline_internodealigned_in_smp)
#if defined(CONFIG_SMP)
#define ____cacheline_internodealigned_in_smp \
__attribute__((__aligned__(1 << (INTERNODE_CACHE_SHIFT))))
#define ____cacheline_internodealigned_in_smp
#define cache_line_size()	L1_CACHE_BYTES
