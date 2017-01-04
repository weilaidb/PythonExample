static unsigned long stack_maxrandom_size(void)
#define MIN_GAP (32*1024*1024)
#define MAX_GAP (STACK_TOP/6*5)
static inline int mmap_is_legacy(void)
static unsigned long mmap_rnd(void)
static inline unsigned long mmap_base(void)
void arch_pick_mmap_layout(struct mm_struct *mm)
EXPORT_SYMBOL_GPL(arch_pick_mmap_layout);
int s390_mmap_check(unsigned long addr, unsigned long len)
static unsigned long
s390_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
static unsigned long
s390_get_unmapped_area_topdown(struct file *filp, const unsigned long addr,
const unsigned long len, const unsigned long pgoff,
const unsigned long flags)
void arch_pick_mmap_layout(struct mm_struct *mm)
EXPORT_SYMBOL_GPL(arch_pick_mmap_layout);
