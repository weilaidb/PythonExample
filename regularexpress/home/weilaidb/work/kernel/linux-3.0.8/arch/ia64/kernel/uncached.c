extern void __init efi_memmap_walk_uc(efi_freemem_callback_t, void *);
struct uncached_pool ;
#define MAX_CONVERTED_CHUNKS_PER_NODE	2
struct uncached_pool uncached_pools[MAX_NUMNODES];
static void uncached_ipi_visibility(void *data)
static void uncached_ipi_mc_drain(void *data)
static int uncached_add_chunk(struct uncached_pool *uc_pool, int nid)
unsigned long uncached_alloc_page(int starting_nid, int n_pages)
EXPORT_SYMBOL(uncached_alloc_page);
void uncached_free_page(unsigned long uc_addr, int n_pages)
EXPORT_SYMBOL(uncached_free_page);
static int __init uncached_build_memmap(u64 uc_start, u64 uc_end, void *arg)
static int __init uncached_init(void)
__initcall(uncached_init);
