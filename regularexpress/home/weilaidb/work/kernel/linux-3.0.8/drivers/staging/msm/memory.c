#if defined(CONFIG_MSM_NPA_REMOTE)
int arch_io_remap_pfn_range(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn, unsigned long size, pgprot_t prot)
void *zero_page_strongly_ordered;
static void map_zero_page_strongly_ordered(void)
void write_to_strongly_ordered_memory(void)
EXPORT_SYMBOL(write_to_strongly_ordered_memory);
void flush_axi_bus_buffer(void)
#define CACHE_LINE_SIZE 32
void clean_and_invalidate_caches(unsigned long vstart,
unsigned long length, unsigned long pstart)
void clean_caches(unsigned long vstart,
unsigned long length, unsigned long pstart)
void invalidate_caches(unsigned long vstart,
unsigned long length, unsigned long pstart)
void *alloc_bootmem_aligned(unsigned long size, unsigned long alignment)
#if defined(CONFIG_MSM_NPA_REMOTE)
struct npa_client *npa_memory_client;
static int change_memory_power_state(unsigned long start_pfn,
unsigned long nr_pages, int state)
int platform_physical_remove_pages(unsigned long start_pfn,
unsigned long nr_pages)
int platform_physical_add_pages(unsigned long start_pfn,
unsigned long nr_pages)
int platform_physical_low_power_pages(unsigned long start_pfn,
unsigned long nr_pages)
