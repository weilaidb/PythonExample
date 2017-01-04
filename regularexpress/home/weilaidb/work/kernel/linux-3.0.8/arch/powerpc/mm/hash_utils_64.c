#undef DEBUG
#undef DEBUG_LOW
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
#define DBG_LOW(fmt...) udbg_printf(fmt)
#define DBG_LOW(fmt...)
#define KB (1024)
#define MB (1024*KB)
#define GB (1024L*MB)
extern unsigned long dart_tablebase;
static unsigned long _SDR1;
struct mmu_psize_def mmu_psize_defs[MMU_PAGE_COUNT];
struct hash_pte *htab_address;
unsigned long htab_size_bytes;
unsigned long htab_hash_mask;
EXPORT_SYMBOL_GPL(htab_hash_mask);
int mmu_linear_psize = MMU_PAGE_4K;
int mmu_virtual_psize = MMU_PAGE_4K;
int mmu_vmalloc_psize = MMU_PAGE_4K;
int mmu_vmemmap_psize = MMU_PAGE_4K;
int mmu_io_psize = MMU_PAGE_4K;
int mmu_kernel_ssize = MMU_SEGSIZE_256M;
int mmu_highuser_ssize = MMU_SEGSIZE_256M;
u16 mmu_slb_size = 64;
EXPORT_SYMBOL_GPL(mmu_slb_size);
unsigned int HPAGE_SHIFT;
int mmu_ci_restrictions;
static u8 *linear_map_hash_slots;
static unsigned long linear_map_hash_count;
static DEFINE_SPINLOCK(linear_map_hash_lock);
static struct mmu_psize_def mmu_psize_defaults_old[] = ;
static struct mmu_psize_def mmu_psize_defaults_gp[] = ;
static unsigned long htab_convert_pte_flags(unsigned long pteflags)
int htab_bolt_mapping(unsigned long vstart, unsigned long vend,
unsigned long pstart, unsigned long prot,
int psize, int ssize)
static int htab_remove_mapping(unsigned long vstart, unsigned long vend,
int psize, int ssize)
static int __init htab_dt_scan_seg_sizes(unsigned long node,
const char *uname, int depth,
void *data)
static void __init htab_init_seg_sizes(void)
static int __init htab_dt_scan_page_sizes(unsigned long node,
const char *uname, int depth,
void *data)
static int __init htab_dt_scan_hugepage_blocks(unsigned long node,
const char *uname, int depth,
void *data)
static void __init htab_init_page_sizes(void)
static int __init htab_dt_scan_pftsize(unsigned long node,
const char *uname, int depth,
void *data)
static unsigned long __init htab_get_table_size(void)
void create_section_mapping(unsigned long start, unsigned long end)
int remove_section_mapping(unsigned long start, unsigned long end)
#define FUNCTION_TEXT(A)	((*(unsigned long *)(A)))
static void __init htab_finish_init(void)
static void __init htab_initialize(void)
#undef KB
#undef MB
void __init early_init_mmu(void)
void __cpuinit early_init_mmu_secondary(void)
unsigned int hash_page_do_lazy_icache(unsigned int pp, pte_t pte, int trap)
unsigned int get_paca_psize(unsigned long addr)
unsigned int get_paca_psize(unsigned long addr)
void demote_segment_4k(struct mm_struct *mm, unsigned long addr)
static int subpage_protection(struct mm_struct *mm, unsigned long ea)
static inline int subpage_protection(struct mm_struct *mm, unsigned long ea)
void hash_failure_debug(unsigned long ea, unsigned long access,
unsigned long vsid, unsigned long trap,
int ssize, int psize, unsigned long pte)
int hash_page(unsigned long ea, unsigned long access, unsigned long trap)
EXPORT_SYMBOL_GPL(hash_page);
void hash_preload(struct mm_struct *mm, unsigned long ea,
unsigned long access, unsigned long trap)
void flush_hash_page(unsigned long va, real_pte_t pte, int psize, int ssize,
int local)
void flush_hash_range(unsigned long number, int local)
void low_hash_fault(struct pt_regs *regs, unsigned long address, int rc)
static void kernel_map_linear_page(unsigned long vaddr, unsigned long lmi)
static void kernel_unmap_linear_page(unsigned long vaddr, unsigned long lmi)
void kernel_map_pages(struct page *page, int numpages, int enable)
void setup_initial_memory_limit(phys_addr_t first_memblock_base,
phys_addr_t first_memblock_size)
