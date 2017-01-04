struct pglist_data __refdata contig_page_data = ;
EXPORT_SYMBOL(contig_page_data);
unsigned long max_low_pfn;
unsigned long min_low_pfn;
unsigned long max_pfn;
bootmem_data_t bootmem_node_data[MAX_NUMNODES] __initdata;
static struct list_head bdata_list __initdata = LIST_HEAD_INIT(bdata_list);
static int bootmem_debug;
static int __init bootmem_debug_setup(char *buf)
early_param("bootmem_debug", bootmem_debug_setup);
#define bdebug(fmt, args...) ()
static unsigned long __init bootmap_bytes(unsigned long pages)
unsigned long __init bootmem_bootmap_pages(unsigned long pages)
static void __init link_bootmem(bootmem_data_t *bdata)
static unsigned long __init init_bootmem_core(bootmem_data_t *bdata,
unsigned long mapstart, unsigned long start, unsigned long end)
unsigned long __init init_bootmem_node(pg_data_t *pgdat, unsigned long freepfn,
unsigned long startpfn, unsigned long endpfn)
unsigned long __init init_bootmem(unsigned long start, unsigned long pages)
void __init free_bootmem_late(unsigned long addr, unsigned long size)
static unsigned long __init free_all_bootmem_core(bootmem_data_t *bdata)
unsigned long __init free_all_bootmem_node(pg_data_t *pgdat)
unsigned long __init free_all_bootmem(void)
static void __init __free(bootmem_data_t *bdata,
unsigned long sidx, unsigned long eidx)
static int __init __reserve(bootmem_data_t *bdata, unsigned long sidx,
unsigned long eidx, int flags)
static int __init mark_bootmem_node(bootmem_data_t *bdata,
unsigned long start, unsigned long end,
int reserve, int flags)
static int __init mark_bootmem(unsigned long start, unsigned long end,
int reserve, int flags)
void __init free_bootmem_node(pg_data_t *pgdat, unsigned long physaddr,
unsigned long size)
void __init free_bootmem(unsigned long addr, unsigned long size)
int __init reserve_bootmem_node(pg_data_t *pgdat, unsigned long physaddr,
unsigned long size, int flags)
int __init reserve_bootmem(unsigned long addr, unsigned long size,
int flags)
int __weak __init reserve_bootmem_generic(unsigned long phys, unsigned long len,
int flags)
static unsigned long __init align_idx(struct bootmem_data *bdata,
unsigned long idx, unsigned long step)
static unsigned long __init align_off(struct bootmem_data *bdata,
unsigned long off, unsigned long align)
static void * __init alloc_bootmem_core(struct bootmem_data *bdata,
unsigned long size, unsigned long align,
unsigned long goal, unsigned long limit)
static void * __init alloc_arch_preferred_bootmem(bootmem_data_t *bdata,
unsigned long size, unsigned long align,
unsigned long goal, unsigned long limit)
static void * __init ___alloc_bootmem_nopanic(unsigned long size,
unsigned long align,
unsigned long goal,
unsigned long limit)
void * __init __alloc_bootmem_nopanic(unsigned long size, unsigned long align,
unsigned long goal)
static void * __init ___alloc_bootmem(unsigned long size, unsigned long align,
unsigned long goal, unsigned long limit)
void * __init __alloc_bootmem(unsigned long size, unsigned long align,
unsigned long goal)
static void * __init ___alloc_bootmem_node(bootmem_data_t *bdata,
unsigned long size, unsigned long align,
unsigned long goal, unsigned long limit)
void * __init __alloc_bootmem_node(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
void * __init __alloc_bootmem_node_high(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
void * __init alloc_bootmem_section(unsigned long size,
unsigned long section_nr)
void * __init __alloc_bootmem_node_nopanic(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
#define ARCH_LOW_ADDRESS_LIMIT	0xffffffffUL
void * __init __alloc_bootmem_low(unsigned long size, unsigned long align,
unsigned long goal)
void * __init __alloc_bootmem_low_node(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
