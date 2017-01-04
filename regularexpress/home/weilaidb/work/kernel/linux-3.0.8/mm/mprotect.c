static inline pgprot_t pgprot_modify(pgprot_t oldprot, pgprot_t newprot)
static void change_pte_range(struct mm_struct *mm, pmd_t *pmd,
unsigned long addr, unsigned long end, pgprot_t newprot,
int dirty_accountable)
static inline void change_pmd_range(struct vm_area_struct *vma, pud_t *pud,
unsigned long addr, unsigned long end, pgprot_t newprot,
int dirty_accountable)
static inline void change_pud_range(struct vm_area_struct *vma, pgd_t *pgd,
unsigned long addr, unsigned long end, pgprot_t newprot,
int dirty_accountable)
static void change_protection(struct vm_area_struct *vma,
unsigned long addr, unsigned long end, pgprot_t newprot,
int dirty_accountable)
int
mprotect_fixup(struct vm_area_struct *vma, struct vm_area_struct **pprev,
unsigned long start, unsigned long end, unsigned long newflags)
SYSCALL_DEFINE3(mprotect, unsigned long, start, size_t, len,
unsigned long, prot)
