static inline int is_exec_fault(void)
static inline int pte_looks_normal(pte_t pte)
struct page * maybe_pte_to_page(pte_t pte)
#if defined(CONFIG_PPC_STD_MMU) || _PAGE_EXEC == 0
static pte_t set_pte_filter(pte_t pte, unsigned long addr)
static pte_t set_access_flags_filter(pte_t pte, struct vm_area_struct *vma,
int dirty)
static pte_t set_pte_filter(pte_t pte, unsigned long addr)
static pte_t set_access_flags_filter(pte_t pte, struct vm_area_struct *vma,
int dirty)
void set_pte_at(struct mm_struct *mm, unsigned long addr, pte_t *ptep,
pte_t pte)
int ptep_set_access_flags(struct vm_area_struct *vma, unsigned long address,
pte_t *ptep, pte_t entry, int dirty)
void assert_pte_locked(struct mm_struct *mm, unsigned long addr)
