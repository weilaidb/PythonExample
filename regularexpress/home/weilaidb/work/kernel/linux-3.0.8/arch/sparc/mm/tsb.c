extern struct tsb swapper_tsb[KERNEL_TSB_NENTRIES];
static inline unsigned long tsb_hash(unsigned long vaddr, unsigned long hash_shift, unsigned long nentries)
static inline int tag_compare(unsigned long tag, unsigned long vaddr)
void flush_tsb_kernel_range(unsigned long start, unsigned long end)
static void __flush_tsb_one(struct tlb_batch *tb, unsigned long hash_shift,
unsigned long tsb, unsigned long nentries)
void flush_tsb_user(struct tlb_batch *tb)
#if defined(CONFIG_SPARC64_PAGE_SIZE_8KB)
#define HV_PGSZ_IDX_BASE	HV_PGSZ_IDX_8K
#define HV_PGSZ_MASK_BASE	HV_PGSZ_MASK_8K
#elif defined(CONFIG_SPARC64_PAGE_SIZE_64KB)
#define HV_PGSZ_IDX_BASE	HV_PGSZ_IDX_64K
#define HV_PGSZ_MASK_BASE	HV_PGSZ_MASK_64K
#error Broken base page size setting...
#if defined(CONFIG_HUGETLB_PAGE_SIZE_64K)
#define HV_PGSZ_IDX_HUGE	HV_PGSZ_IDX_64K
#define HV_PGSZ_MASK_HUGE	HV_PGSZ_MASK_64K
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_512K)
#define HV_PGSZ_IDX_HUGE	HV_PGSZ_IDX_512K
#define HV_PGSZ_MASK_HUGE	HV_PGSZ_MASK_512K
#elif defined(CONFIG_HUGETLB_PAGE_SIZE_4MB)
#define HV_PGSZ_IDX_HUGE	HV_PGSZ_IDX_4MB
#define HV_PGSZ_MASK_HUGE	HV_PGSZ_MASK_4MB
#error Broken huge page size setting...
static void setup_tsb_params(struct mm_struct *mm, unsigned long tsb_idx, unsigned long tsb_bytes)
static struct kmem_cache *tsb_caches[8] __read_mostly;
static const char *tsb_cache_names[8] = ;
void __init pgtable_cache_init(void)
int sysctl_tsb_ratio = -2;
static unsigned long tsb_size_to_rss_limit(unsigned long new_size)
void tsb_grow(struct mm_struct *mm, unsigned long tsb_index, unsigned long rss)
int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static void tsb_destroy_one(struct tsb_config *tp)
void destroy_context(struct mm_struct *mm)
