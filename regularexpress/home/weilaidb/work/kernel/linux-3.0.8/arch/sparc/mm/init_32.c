unsigned long *sparc_valid_addr_bitmap;
EXPORT_SYMBOL(sparc_valid_addr_bitmap);
unsigned long phys_base;
EXPORT_SYMBOL(phys_base);
unsigned long pfn_base;
EXPORT_SYMBOL(pfn_base);
unsigned long page_kernel;
EXPORT_SYMBOL(page_kernel);
struct sparc_phys_banks sp_banks[SPARC_PHYS_BANKS+1];
unsigned long sparc_unmapped_base;
struct pgtable_cache_struct pgt_quicklists;
extern unsigned int sparc_ramdisk_image;
extern unsigned int sparc_ramdisk_size;
unsigned long highstart_pfn, highend_pfn;
pte_t *kmap_pte;
pgprot_t kmap_prot;
#define kmap_get_fixmap_pte(vaddr) \
pte_offset_kernel(pmd_offset(pgd_offset_k(vaddr), (vaddr)), (vaddr))
void __init kmap_init(void)
void show_mem(unsigned int filter)
void __init sparc_context_init(int numctx)
extern unsigned long cmdline_memory_size;
unsigned long last_valid_pfn;
unsigned long calc_highpages(void)
static unsigned long calc_max_low_pfn(void)
unsigned long __init bootmem_init(unsigned long *pages_avail)
static int pgt_cache_water[2] = ;
void check_pgt_cache(void)
extern void sun4c_paging_init(void);
extern void srmmu_paging_init(void);
extern void device_scan(void);
pgprot_t PAGE_SHARED __read_mostly;
EXPORT_SYMBOL(PAGE_SHARED);
void __init paging_init(void)
static void __init taint_real_pages(void)
static void map_high_region(unsigned long start_pfn, unsigned long end_pfn)
void __init mem_init(void)
void free_initmem (void)
void free_initrd_mem(unsigned long start, unsigned long end)
void sparc_flush_page_to_ram(struct page *page)
EXPORT_SYMBOL(sparc_flush_page_to_ram);
