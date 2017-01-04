static void zap_pte(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr, pte_t *ptep)
static int install_file_pte(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr, unsigned long pgoff, pgprot_t prot)
static int populate_range(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long addr, unsigned long size, pgoff_t pgoff)
SYSCALL_DEFINE5(remap_file_pages, unsigned long, start, unsigned long, size,
unsigned long, prot, unsigned long, pgoff, unsigned long, flags)
