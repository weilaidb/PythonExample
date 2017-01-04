void task_mem(struct seq_file *m, struct mm_struct *mm)
unsigned long task_vsize(struct mm_struct *mm)
unsigned long task_statm(struct mm_struct *mm,
unsigned long *shared, unsigned long *text,
unsigned long *data, unsigned long *resident)
static void pad_len_spaces(struct seq_file *m, int len)
static void vma_stop(struct proc_maps_private *priv, struct vm_area_struct *vma)
static void *m_start(struct seq_file *m, loff_t *pos)
static void *m_next(struct seq_file *m, void *v, loff_t *pos)
static void m_stop(struct seq_file *m, void *v)
static int do_maps_open(struct inode *inode, struct file *file,
const struct seq_operations *ops)
static void show_map_vma(struct seq_file *m, struct vm_area_struct *vma)
static int show_map(struct seq_file *m, void *v)
static const struct seq_operations proc_pid_maps_op = ;
static int maps_open(struct inode *inode, struct file *file)
const struct file_operations proc_maps_operations = ;
#define PSS_SHIFT 12
struct mem_size_stats ;
static void smaps_pte_entry(pte_t ptent, unsigned long addr,
unsigned long ptent_size, struct mm_walk *walk)
static int smaps_pte_range(pmd_t *pmd, unsigned long addr, unsigned long end,
struct mm_walk *walk)
static int show_smap(struct seq_file *m, void *v)
static const struct seq_operations proc_pid_smaps_op = ;
static int smaps_open(struct inode *inode, struct file *file)
const struct file_operations proc_smaps_operations = ;
static int clear_refs_pte_range(pmd_t *pmd, unsigned long addr,
unsigned long end, struct mm_walk *walk)
#define CLEAR_REFS_ALL 1
#define CLEAR_REFS_ANON 2
#define CLEAR_REFS_MAPPED 3
static ssize_t clear_refs_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
const struct file_operations proc_clear_refs_operations = ;
struct pagemapread ;
#define PM_ENTRY_BYTES      sizeof(u64)
#define PM_STATUS_BITS      3
#define PM_STATUS_OFFSET    (64 - PM_STATUS_BITS)
#define PM_STATUS_MASK      (((1LL << PM_STATUS_BITS) - 1) << PM_STATUS_OFFSET)
#define PM_STATUS(nr)       (((nr) << PM_STATUS_OFFSET) & PM_STATUS_MASK)
#define PM_PSHIFT_BITS      6
#define PM_PSHIFT_OFFSET    (PM_STATUS_OFFSET - PM_PSHIFT_BITS)
#define PM_PSHIFT_MASK      (((1LL << PM_PSHIFT_BITS) - 1) << PM_PSHIFT_OFFSET)
#define PM_PSHIFT(x)        (((u64) (x) << PM_PSHIFT_OFFSET) & PM_PSHIFT_MASK)
#define PM_PFRAME_MASK      ((1LL << PM_PSHIFT_OFFSET) - 1)
#define PM_PFRAME(x)        ((x) & PM_PFRAME_MASK)
#define PM_PRESENT          PM_STATUS(4LL)
#define PM_SWAP             PM_STATUS(2LL)
#define PM_NOT_PRESENT      PM_PSHIFT(PAGE_SHIFT)
#define PM_END_OF_BUFFER    1
static int add_to_pagemap(unsigned long addr, u64 pfn,
struct pagemapread *pm)
static int pagemap_pte_hole(unsigned long start, unsigned long end,
struct mm_walk *walk)
static u64 swap_pte_to_pagemap_entry(pte_t pte)
static u64 pte_to_pagemap_entry(pte_t pte)
static int pagemap_pte_range(pmd_t *pmd, unsigned long addr, unsigned long end,
struct mm_walk *walk)
static u64 huge_pte_to_pagemap_entry(pte_t pte, int offset)
static int pagemap_hugetlb_range(pte_t *pte, unsigned long hmask,
unsigned long addr, unsigned long end,
struct mm_walk *walk)
#define PAGEMAP_WALK_SIZE	(PMD_SIZE)
#define PAGEMAP_WALK_MASK	(PMD_MASK)
static ssize_t pagemap_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
const struct file_operations proc_pagemap_operations = ;
struct numa_maps ;
struct numa_maps_private ;
static void gather_stats(struct page *page, struct numa_maps *md, int pte_dirty,
unsigned long nr_pages)
static struct page *can_gather_numa_stats(pte_t pte, struct vm_area_struct *vma,
unsigned long addr)
static int gather_pte_stats(pmd_t *pmd, unsigned long addr,
unsigned long end, struct mm_walk *walk)
static int gather_hugetbl_stats(pte_t *pte, unsigned long hmask,
unsigned long addr, unsigned long end, struct mm_walk *walk)
static int gather_hugetbl_stats(pte_t *pte, unsigned long hmask,
unsigned long addr, unsigned long end, struct mm_walk *walk)
static int show_numa_map(struct seq_file *m, void *v)
static const struct seq_operations proc_pid_numa_maps_op = ;
static int numa_maps_open(struct inode *inode, struct file *file)
const struct file_operations proc_numa_maps_operations = ;
