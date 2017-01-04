struct memblock memblock __initdata_memblock;
int memblock_debug __initdata_memblock;
int memblock_can_resize __initdata_memblock;
static struct memblock_region memblock_memory_init_regions[INIT_MEMBLOCK_REGIONS + 1] __initdata_memblock;
static struct memblock_region memblock_reserved_init_regions[INIT_MEMBLOCK_REGIONS + 1] __initdata_memblock;
static inline const char *memblock_type_name(struct memblock_type *type)
static phys_addr_t __init_memblock memblock_align_down(phys_addr_t addr, phys_addr_t size)
static phys_addr_t __init_memblock memblock_align_up(phys_addr_t addr, phys_addr_t size)
static unsigned long __init_memblock memblock_addrs_overlap(phys_addr_t base1, phys_addr_t size1,
phys_addr_t base2, phys_addr_t size2)
long __init_memblock memblock_overlaps_region(struct memblock_type *type, phys_addr_t base, phys_addr_t size)
static phys_addr_t __init_memblock memblock_find_region(phys_addr_t start, phys_addr_t end,
phys_addr_t size, phys_addr_t align)
static phys_addr_t __init_memblock memblock_find_base(phys_addr_t size,
phys_addr_t align, phys_addr_t start, phys_addr_t end)
u64 __init_memblock memblock_find_in_range(u64 start, u64 end, u64 size, u64 align)
int __init_memblock memblock_free_reserved_regions(void)
int __init_memblock memblock_reserve_reserved_regions(void)
static void __init_memblock memblock_remove_region(struct memblock_type *type, unsigned long r)
static long memblock_add_region(struct memblock_type *type, phys_addr_t base, phys_addr_t size);
static int __init_memblock memblock_double_array(struct memblock_type *type)
extern int __init_memblock __weak memblock_memory_can_coalesce(phys_addr_t addr1, phys_addr_t size1,
phys_addr_t addr2, phys_addr_t size2)
static long __init_memblock memblock_add_region(struct memblock_type *type,
phys_addr_t base, phys_addr_t size)
long __init_memblock memblock_add(phys_addr_t base, phys_addr_t size)
static long __init_memblock __memblock_remove(struct memblock_type *type,
phys_addr_t base, phys_addr_t size)
long __init_memblock memblock_remove(phys_addr_t base, phys_addr_t size)
long __init_memblock memblock_free(phys_addr_t base, phys_addr_t size)
long __init_memblock memblock_reserve(phys_addr_t base, phys_addr_t size)
phys_addr_t __init __memblock_alloc_base(phys_addr_t size, phys_addr_t align, phys_addr_t max_addr)
phys_addr_t __init memblock_alloc_base(phys_addr_t size, phys_addr_t align, phys_addr_t max_addr)
phys_addr_t __init memblock_alloc(phys_addr_t size, phys_addr_t align)
phys_addr_t __weak __init memblock_nid_range(phys_addr_t start, phys_addr_t end, int *nid)
static phys_addr_t __init memblock_alloc_nid_region(struct memblock_region *mp,
phys_addr_t size,
phys_addr_t align, int nid)
phys_addr_t __init memblock_alloc_nid(phys_addr_t size, phys_addr_t align, int nid)
phys_addr_t __init memblock_alloc_try_nid(phys_addr_t size, phys_addr_t align, int nid)
phys_addr_t __init memblock_phys_mem_size(void)
phys_addr_t __init_memblock memblock_end_of_DRAM(void)
void __init memblock_enforce_memory_limit(phys_addr_t memory_limit)
static int __init_memblock memblock_search(struct memblock_type *type, phys_addr_t addr)
int __init memblock_is_reserved(phys_addr_t addr)
int __init_memblock memblock_is_memory(phys_addr_t addr)
int __init_memblock memblock_is_region_memory(phys_addr_t base, phys_addr_t size)
int __init_memblock memblock_is_region_reserved(phys_addr_t base, phys_addr_t size)
void __init_memblock memblock_set_current_limit(phys_addr_t limit)
static void __init_memblock memblock_dump(struct memblock_type *region, char *name)
void __init_memblock memblock_dump_all(void)
void __init memblock_analyze(void)
void __init memblock_init(void)
static int __init early_memblock(char *p)
early_param("memblock", early_memblock);
#if defined(CONFIG_DEBUG_FS) && !defined(ARCH_DISCARD_MEMBLOCK)
static int memblock_debug_show(struct seq_file *m, void *private)
static int memblock_debug_open(struct inode *inode, struct file *file)
static const struct file_operations memblock_debug_fops = ;
static int __init memblock_init_debugfs(void)
__initcall(memblock_init_debugfs);
