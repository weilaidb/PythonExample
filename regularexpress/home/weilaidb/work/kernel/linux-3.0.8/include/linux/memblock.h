#define _LINUX_MEMBLOCK_H
#define MEMBLOCK_ERROR	0
#define INIT_MEMBLOCK_REGIONS	128
struct memblock_region ;
struct memblock_type ;
struct memblock ;
extern struct memblock memblock;
extern int memblock_debug;
extern int memblock_can_resize;
#define memblock_dbg(fmt, ...) \
if (memblock_debug) printk(KERN_INFO pr_fmt(fmt), ##__VA_ARGS__)
u64 memblock_find_in_range(u64 start, u64 end, u64 size, u64 align);
int memblock_free_reserved_regions(void);
int memblock_reserve_reserved_regions(void);
extern void memblock_init(void);
extern void memblock_analyze(void);
extern long memblock_add(phys_addr_t base, phys_addr_t size);
extern long memblock_remove(phys_addr_t base, phys_addr_t size);
extern long memblock_free(phys_addr_t base, phys_addr_t size);
extern long memblock_reserve(phys_addr_t base, phys_addr_t size);
extern phys_addr_t memblock_alloc_nid(phys_addr_t size, phys_addr_t align,
int nid);
extern phys_addr_t memblock_alloc_try_nid(phys_addr_t size, phys_addr_t align,
int nid);
extern phys_addr_t memblock_alloc(phys_addr_t size, phys_addr_t align);
#define MEMBLOCK_ALLOC_ANYWHERE	(~(phys_addr_t)0)
#define MEMBLOCK_ALLOC_ACCESSIBLE	0
extern phys_addr_t memblock_alloc_base(phys_addr_t size,
phys_addr_t align,
phys_addr_t max_addr);
extern phys_addr_t __memblock_alloc_base(phys_addr_t size,
phys_addr_t align,
phys_addr_t max_addr);
extern phys_addr_t memblock_phys_mem_size(void);
extern phys_addr_t memblock_end_of_DRAM(void);
extern void memblock_enforce_memory_limit(phys_addr_t memory_limit);
extern int memblock_is_memory(phys_addr_t addr);
extern int memblock_is_region_memory(phys_addr_t base, phys_addr_t size);
extern int memblock_is_reserved(phys_addr_t addr);
extern int memblock_is_region_reserved(phys_addr_t base, phys_addr_t size);
extern void memblock_dump_all(void);
extern phys_addr_t memblock_nid_range(phys_addr_t start, phys_addr_t end, int *nid);
extern int memblock_memory_can_coalesce(phys_addr_t addr1, phys_addr_t size1,
phys_addr_t addr2, phys_addr_t size2);
extern void memblock_set_current_limit(phys_addr_t limit);
static inline unsigned long memblock_region_memory_base_pfn(const struct memblock_region *reg)
static inline unsigned long memblock_region_memory_end_pfn(const struct memblock_region *reg)
static inline unsigned long memblock_region_reserved_base_pfn(const struct memblock_region *reg)
static inline unsigned long memblock_region_reserved_end_pfn(const struct memblock_region *reg)
#define for_each_memblock(memblock_type, region)					\
for (region = memblock.memblock_type.regions;				\
region < (memblock.memblock_type.regions + memblock.memblock_type.cnt);	\
region++)
#define __init_memblock __init
#define __initdata_memblock __initdata
#define __init_memblock
#define __initdata_memblock
static inline phys_addr_t memblock_alloc(phys_addr_t size, phys_addr_t align)
