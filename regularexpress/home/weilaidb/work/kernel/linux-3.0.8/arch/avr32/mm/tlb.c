#define NR_TLB_ENTRIES 32
static void show_dtlb_entry(unsigned int index)
void dump_dtlb(void)
static void update_dtlb(unsigned long address, pte_t pte)
void update_mmu_cache(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
static void __flush_tlb_page(unsigned long asid, unsigned long page)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void flush_tlb_kernel_range(unsigned long start, unsigned long end)
void flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_all(void)
static void *tlb_start(struct seq_file *tlb, loff_t *pos)
static void *tlb_next(struct seq_file *tlb, void *v, loff_t *pos)
static void tlb_stop(struct seq_file *tlb, void *v)
static int tlb_show(struct seq_file *tlb, void *v)
static const struct seq_operations tlb_ops = ;
static int tlb_open(struct inode *inode, struct file *file)
static const struct file_operations proc_tlb_operations = ;
static int __init proctlb_init(void)
late_initcall(proctlb_init);
