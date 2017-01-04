s8 physnode_map[MAX_ELEMENTS] __read_mostly = ;
EXPORT_SYMBOL(physnode_map);
void memory_present(int nid, unsigned long start, unsigned long end)
unsigned long node_memmap_size_bytes(int nid, unsigned long start_pfn,
unsigned long end_pfn)
extern unsigned long highend_pfn, highstart_pfn;
#define LARGE_PAGE_BYTES (PTRS_PER_PTE * PAGE_SIZE)
static void *node_remap_start_vaddr[MAX_NUMNODES];
void set_pmd_pfn(unsigned long vaddr, unsigned long pfn, pgprot_t flags);
static unsigned long node_remap_start_pfn[MAX_NUMNODES];
static void *node_remap_end_vaddr[MAX_NUMNODES];
static void *node_remap_alloc_vaddr[MAX_NUMNODES];
void *alloc_remap(int nid, unsigned long size)
void resume_map_numa_kva(pgd_t *pgd_base)
void __init init_alloc_remap(int nid, u64 start, u64 end)
void __init initmem_init(void)
