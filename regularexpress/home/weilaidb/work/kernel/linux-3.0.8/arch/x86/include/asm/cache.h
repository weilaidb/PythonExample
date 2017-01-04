#define _ASM_X86_CACHE_H
#define L1_CACHE_SHIFT	(CONFIG_X86_L1_CACHE_SHIFT)
#define L1_CACHE_BYTES	(1 << L1_CACHE_SHIFT)
#define __read_mostly __attribute__((__section__(".data..read_mostly")))
#define INTERNODE_CACHE_SHIFT CONFIG_X86_INTERNODE_CACHE_SHIFT
#define INTERNODE_CACHE_BYTES (1 << INTERNODE_CACHE_SHIFT)
#define __cacheline_aligned_in_smp					\
__attribute__((__aligned__(INTERNODE_CACHE_BYTES)))		\
__page_aligned_data
