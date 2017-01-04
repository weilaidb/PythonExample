unsigned long __initdata pgt_buf_start;
unsigned long __meminitdata pgt_buf_end;
unsigned long __meminitdata pgt_buf_top;
int after_bootmem;
int direct_gbpages
= 1
;
static void __init find_early_table_space(unsigned long end, int use_pse,
int use_gbpages)
void __init native_pagetable_reserve(u64 start, u64 end)
struct map_range ;
#define NR_RANGE_MR 3
#define NR_RANGE_MR 5
static int __meminit save_mr(struct map_range *mr, int nr_range,
unsigned long start_pfn, unsigned long end_pfn,
unsigned long page_size_mask)
unsigned long __init_refok init_memory_mapping(unsigned long start,
unsigned long end)
int devmem_is_allowed(unsigned long pagenr)
void free_init_pages(char *what, unsigned long begin, unsigned long end)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
