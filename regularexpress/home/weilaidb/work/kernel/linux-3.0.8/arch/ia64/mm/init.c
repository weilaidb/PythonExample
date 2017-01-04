extern void ia64_tlb_init (void);
unsigned long MAX_DMA_ADDRESS = PAGE_OFFSET + 0x100000000UL;
unsigned long VMALLOC_END = VMALLOC_END_INIT;
EXPORT_SYMBOL(VMALLOC_END);
struct page *vmem_map;
EXPORT_SYMBOL(vmem_map);
struct page *zero_page_memmap_ptr;
EXPORT_SYMBOL(zero_page_memmap_ptr);
void
__ia64_sync_icache_dcache (pte_t pte)
void
dma_mark_clean(void *addr, size_t size)
inline void
ia64_set_rbs_bot (void)
void
ia64_init_addr_space (void)
void
free_initmem (void)
void __init
free_initrd_mem (unsigned long start, unsigned long end)
static struct page * __init
put_kernel_page (struct page *page, unsigned long address, pgprot_t pgprot)
static void __init
setup_gate (void)
void __devinit
ia64_mmu_init (void *my_cpu_data)
int vmemmap_find_next_valid_pfn(int node, int i)
int __init create_mem_map_page_table(u64 start, u64 end, void *arg)
struct memmap_init_callback_data ;
static int __meminit
virtual_memmap_init(u64 start, u64 end, void *arg)
void __meminit
memmap_init (unsigned long size, int nid, unsigned long zone,
unsigned long start_pfn)
int
ia64_pfn_valid (unsigned long pfn)
EXPORT_SYMBOL(ia64_pfn_valid);
int __init find_largest_hole(u64 start, u64 end, void *arg)
int __init register_active_ranges(u64 start, u64 len, int nid)
static int __init
count_reserved_pages(u64 start, u64 end, void *arg)
int
find_max_min_low_pfn (u64 start, u64 end, void *arg)
static int nolwsys __initdata;
static int __init
nolwsys_setup (char *s)
__setup("nolwsys", nolwsys_setup);
void __init
mem_init (void)
int arch_add_memory(int nid, u64 start, u64 size)
static struct exec_domain ia32_exec_domain;
static int __init
per_linux32_init(void)
__initcall(per_linux32_init);
