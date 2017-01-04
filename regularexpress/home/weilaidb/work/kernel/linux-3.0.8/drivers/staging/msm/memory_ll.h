#define __ASM_ARCH_MEMORY_LL_H
#define MAX_PHYSMEM_BITS 32
#define SECTION_SIZE_BITS 25
#define HAS_ARCH_IO_REMAP_PFN_RANGE
void *alloc_bootmem_aligned(unsigned long size, unsigned long alignment);
void clean_and_invalidate_caches(unsigned long, unsigned long, unsigned long);
void clean_caches(unsigned long, unsigned long, unsigned long);
void invalidate_caches(unsigned long, unsigned long, unsigned long);
int platform_physical_remove_pages(unsigned long, unsigned long);
int platform_physical_add_pages(unsigned long, unsigned long);
int platform_physical_low_power_pages(unsigned long, unsigned long);
void write_to_strongly_ordered_memory(void);
#define arch_barrier_extra() do \
while (0)
extern void l2x0_cache_sync(void);
#define finish_arch_switch(prev)     do  while (0)
#define arch_has_speculative_dfetch()	1
#define MEMORY_DEEP_POWERDOWN	0
#define MEMORY_SELF_REFRESH	1
#define MEMORY_ACTIVE		2
#define NPA_MEMORY_NODE_NAME	"/mem/ebi1/cs1"
