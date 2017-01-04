static pmd_t *get_old_pmd(struct mm_struct *mm, unsigned long addr)
static pmd_t *alloc_new_pmd(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr)
static void move_ptes(struct vm_area_struct *vma, pmd_t *old_pmd,
unsigned long old_addr, unsigned long old_end,
struct vm_area_struct *new_vma, pmd_t *new_pmd,
unsigned long new_addr)
#define LATENCY_LIMIT	(64 * PAGE_SIZE)
unsigned long move_page_tables(struct vm_area_struct *vma,
unsigned long old_addr, struct vm_area_struct *new_vma,
unsigned long new_addr, unsigned long len)
static unsigned long move_vma(struct vm_area_struct *vma,
unsigned long old_addr, unsigned long old_len,
unsigned long new_len, unsigned long new_addr)
static struct vm_area_struct *vma_to_resize(unsigned long addr,
unsigned long old_len, unsigned long new_len, unsigned long *p)
static unsigned long mremap_to(unsigned long addr,
unsigned long old_len, unsigned long new_addr,
unsigned long new_len)
static int vma_expandable(struct vm_area_struct *vma, unsigned long delta)
unsigned long do_mremap(unsigned long addr,
unsigned long old_len, unsigned long new_len,
unsigned long flags, unsigned long new_addr)
SYSCALL_DEFINE5(mremap, unsigned long, addr, unsigned long, old_len,
unsigned long, new_len, unsigned long, flags,
unsigned long, new_addr)
