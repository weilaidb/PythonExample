#define _LINUX_BOOTMEM_H
extern unsigned long max_low_pfn;
extern unsigned long min_low_pfn;
extern unsigned long max_pfn;
typedef struct bootmem_data  bootmem_data_t;
extern bootmem_data_t bootmem_node_data[];
extern unsigned long bootmem_bootmap_pages(unsigned long);
extern unsigned long init_bootmem_node(pg_data_t *pgdat,
unsigned long freepfn,
unsigned long startpfn,
unsigned long endpfn);
extern unsigned long init_bootmem(unsigned long addr, unsigned long memend);
unsigned long free_all_memory_core_early(int nodeid);
extern unsigned long free_all_bootmem_node(pg_data_t *pgdat);
extern unsigned long free_all_bootmem(void);
extern void free_bootmem_node(pg_data_t *pgdat,
unsigned long addr,
unsigned long size);
extern void free_bootmem(unsigned long addr, unsigned long size);
extern void free_bootmem_late(unsigned long addr, unsigned long size);
#define BOOTMEM_DEFAULT		0
#define BOOTMEM_EXCLUSIVE	(1<<0)
extern int reserve_bootmem(unsigned long addr,
unsigned long size,
int flags);
extern int reserve_bootmem_node(pg_data_t *pgdat,
unsigned long physaddr,
unsigned long size,
int flags);
extern void *__alloc_bootmem(unsigned long size,
unsigned long align,
unsigned long goal);
extern void *__alloc_bootmem_nopanic(unsigned long size,
unsigned long align,
unsigned long goal);
extern void *__alloc_bootmem_node(pg_data_t *pgdat,
unsigned long size,
unsigned long align,
unsigned long goal);
void *__alloc_bootmem_node_high(pg_data_t *pgdat,
unsigned long size,
unsigned long align,
unsigned long goal);
extern void *__alloc_bootmem_node_nopanic(pg_data_t *pgdat,
unsigned long size,
unsigned long align,
unsigned long goal);
extern void *__alloc_bootmem_low(unsigned long size,
unsigned long align,
unsigned long goal);
extern void *__alloc_bootmem_low_node(pg_data_t *pgdat,
unsigned long size,
unsigned long align,
unsigned long goal);
#define BOOTMEM_LOW_LIMIT 0
#define BOOTMEM_LOW_LIMIT __pa(MAX_DMA_ADDRESS)
#define alloc_bootmem(x) \
__alloc_bootmem(x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_align(x, align) \
__alloc_bootmem(x, align, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_nopanic(x) \
__alloc_bootmem_nopanic(x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages(x) \
__alloc_bootmem(x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages_nopanic(x) \
__alloc_bootmem_nopanic(x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_node(pgdat, x) \
__alloc_bootmem_node(pgdat, x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_node_nopanic(pgdat, x) \
__alloc_bootmem_node_nopanic(pgdat, x, SMP_CACHE_BYTES, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages_node(pgdat, x) \
__alloc_bootmem_node(pgdat, x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_pages_node_nopanic(pgdat, x) \
__alloc_bootmem_node_nopanic(pgdat, x, PAGE_SIZE, BOOTMEM_LOW_LIMIT)
#define alloc_bootmem_low(x) \
__alloc_bootmem_low(x, SMP_CACHE_BYTES, 0)
#define alloc_bootmem_low_pages(x) \
__alloc_bootmem_low(x, PAGE_SIZE, 0)
#define alloc_bootmem_low_pages_node(pgdat, x) \
__alloc_bootmem_low_node(pgdat, x, PAGE_SIZE, 0)
extern int reserve_bootmem_generic(unsigned long addr, unsigned long size,
int flags);
extern void *alloc_bootmem_section(unsigned long size,
unsigned long section_nr);
extern void *alloc_remap(int nid, unsigned long size);
static inline void *alloc_remap(int nid, unsigned long size)
extern void *alloc_large_system_hash(const char *tablename,
unsigned long bucketsize,
unsigned long numentries,
int scale,
int flags,
unsigned int *_hash_shift,
unsigned int *_hash_mask,
unsigned long limit);
#define HASH_EARLY	0x00000001
#define HASH_SMALL	0x00000002
#if defined(CONFIG_NUMA) && defined(CONFIG_64BIT)
#define HASHDIST_DEFAULT 1
#define HASHDIST_DEFAULT 0
extern int hashdist;
