int __read_mostly pat_enabled = 1;
static inline void pat_disable(const char *reason)
static int __init nopat(char *str)
early_param("nopat", nopat);
static inline void pat_disable(const char *reason)
int pat_debug_enable;
static int __init pat_debug_setup(char *str)
__setup("debugpat", pat_debug_setup);
static u64 __read_mostly boot_pat_state;
enum ;
#define PAT(x, y)	((u64)PAT_ ## y << ((x)*8))
void pat_init(void)
#undef PAT
static DEFINE_SPINLOCK(memtype_lock);
static unsigned long pat_x_mtrr_type(u64 start, u64 end, unsigned long req_type)
static int pat_pagerange_is_ram(resource_size_t start, resource_size_t end)
static int reserve_ram_pages_type(u64 start, u64 end, unsigned long req_type,
unsigned long *new_type)
static int free_ram_pages_type(u64 start, u64 end)
int reserve_memtype(u64 start, u64 end, unsigned long req_type,
unsigned long *new_type)
int free_memtype(u64 start, u64 end)
static unsigned long lookup_memtype(u64 paddr)
int io_reserve_memtype(resource_size_t start, resource_size_t end,
unsigned long *type)
void io_free_memtype(resource_size_t start, resource_size_t end)
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot)
static inline int range_is_allowed(unsigned long pfn, unsigned long size)
static inline int range_is_allowed(unsigned long pfn, unsigned long size)
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t *vma_prot)
int kernel_map_sync_memtype(u64 base, unsigned long size, unsigned long flags)
static int reserve_pfn_range(u64 paddr, unsigned long size, pgprot_t *vma_prot,
int strict_prot)
static void free_pfn_range(u64 paddr, unsigned long size)
int track_pfn_vma_copy(struct vm_area_struct *vma)
int track_pfn_vma_new(struct vm_area_struct *vma, pgprot_t *prot,
unsigned long pfn, unsigned long size)
void untrack_pfn_vma(struct vm_area_struct *vma, unsigned long pfn,
unsigned long size)
pgprot_t pgprot_writecombine(pgprot_t prot)
EXPORT_SYMBOL_GPL(pgprot_writecombine);
#if defined(CONFIG_DEBUG_FS) && defined(CONFIG_X86_PAT)
static struct memtype *memtype_get_idx(loff_t pos)
static void *memtype_seq_start(struct seq_file *seq, loff_t *pos)
static void *memtype_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void memtype_seq_stop(struct seq_file *seq, void *v)
static int memtype_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations memtype_seq_ops = ;
static int memtype_seq_open(struct inode *inode, struct file *file)
static const struct file_operations memtype_fops = ;
static int __init pat_memtype_list_init(void)
late_initcall(pat_memtype_list_init);
