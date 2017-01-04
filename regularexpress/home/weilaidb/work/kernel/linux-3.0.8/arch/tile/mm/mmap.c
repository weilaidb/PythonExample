#define MIN_GAP (128*1024*1024)
#define MAX_GAP (TASK_SIZE/6*5)
static inline unsigned long mmap_base(struct mm_struct *mm)
void arch_pick_mmap_layout(struct mm_struct *mm)
