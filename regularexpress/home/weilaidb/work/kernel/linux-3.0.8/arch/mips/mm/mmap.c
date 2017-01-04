unsigned long shm_align_mask = PAGE_SIZE - 1;
EXPORT_SYMBOL(shm_align_mask);
#define COLOUR_ALIGN(addr,pgoff)				\
((((addr) + shm_align_mask) & ~shm_align_mask) +	\
(((pgoff) << PAGE_SHIFT) & shm_align_mask))
unsigned long arch_get_unmapped_area(struct file *filp, unsigned long addr,
unsigned long len, unsigned long pgoff, unsigned long flags)
void arch_pick_mmap_layout(struct mm_struct *mm)
static inline unsigned long brk_rnd(void)
unsigned long arch_randomize_brk(struct mm_struct *mm)
