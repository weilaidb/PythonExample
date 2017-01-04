extern int  data_start;
struct node_map_data node_data[MAX_NUMNODES] __read_mostly;
unsigned char pfnnid_map[PFNNID_MAP_MAX] __read_mostly;
static struct resource data_resource = ;
static struct resource code_resource = ;
static struct resource pdcdata_resource = ;
static struct resource sysram_resources[MAX_PHYSMEM_RANGES] __read_mostly;
physmem_range_t pmem_ranges[MAX_PHYSMEM_RANGES] __read_mostly;
int npmem_ranges __read_mostly;
#define MAX_MEM         (~0UL)
#define MAX_MEM         (3584U*1024U*1024U)
static unsigned long mem_limit __read_mostly = MAX_MEM;
static void __init mem_limit_func(void)
#define MAX_GAP (0x40000000UL >> PAGE_SHIFT)
static void __init setup_bootmem(void)
static void __init map_pages(unsigned long start_vaddr,
unsigned long start_paddr, unsigned long size,
pgprot_t pgprot, int force)
void free_initmem(void)
void mark_rodata_ro(void)
#if KERNEL_MAP_START < GATEWAY_PAGE_SIZE
#error KERNEL_MAP_START is in gateway reserved region
#define MAP_START (KERNEL_MAP_START)
#define VM_MAP_OFFSET  (32*1024)
#define SET_MAP_OFFSET(x) ((void *)(((unsigned long)(x) + VM_MAP_OFFSET) \
& ~(VM_MAP_OFFSET-1)))
void *parisc_vmalloc_start __read_mostly;
EXPORT_SYMBOL(parisc_vmalloc_start);
unsigned long pcxl_dma_start __read_mostly;
void __init mem_init(void)
unsigned long *empty_zero_page __read_mostly;
EXPORT_SYMBOL(empty_zero_page);
void show_mem(unsigned int filter)
static void __init pagetable_init(void)
static void __init gateway_init(void)
void
map_hpux_gateway_page(struct task_struct *tsk, struct mm_struct *mm)
EXPORT_SYMBOL(map_hpux_gateway_page);
void __init paging_init(void)
#define NR_SPACE_IDS 262144
#define NR_SPACE_IDS 32768
#define RECYCLE_THRESHOLD (NR_SPACE_IDS / 2)
#define SID_ARRAY_SIZE  (NR_SPACE_IDS / (8 * sizeof(long)))
static unsigned long space_id[SID_ARRAY_SIZE] = ;
static unsigned long dirty_space_id[SID_ARRAY_SIZE];
static unsigned long space_id_index;
static unsigned long free_space_ids = NR_SPACE_IDS - 1;
static unsigned long dirty_space_ids = 0;
static DEFINE_SPINLOCK(sid_lock);
unsigned long alloc_sid(void)
void free_sid(unsigned long spaceid)
static void get_dirty_sids(unsigned long *ndirtyptr,unsigned long *dirty_array)
static void recycle_sids(unsigned long ndirty,unsigned long *dirty_array)
static void recycle_sids(void)
static unsigned long recycle_ndirty;
static unsigned long recycle_dirty_array[SID_ARRAY_SIZE];
static unsigned int recycle_inuse;
void flush_tlb_all(void)
void flush_tlb_all(void)
void free_initrd_mem(unsigned long start, unsigned long end)
