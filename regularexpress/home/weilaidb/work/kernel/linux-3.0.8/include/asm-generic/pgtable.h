#define _ASM_GENERIC_PGTABLE_H
extern int ptep_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep,
pte_t entry, int dirty);
extern int pmdp_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp,
pmd_t entry, int dirty);
static inline int ptep_test_and_clear_young(struct vm_area_struct *vma,
unsigned long address,
pte_t *ptep)
static inline int pmdp_test_and_clear_young(struct vm_area_struct *vma,
unsigned long address,
pmd_t *pmdp)
static inline int pmdp_test_and_clear_young(struct vm_area_struct *vma,
unsigned long address,
pmd_t *pmdp)
int ptep_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep);
int pmdp_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp);
static inline pte_t ptep_get_and_clear(struct mm_struct *mm,
unsigned long address,
pte_t *ptep)
static inline pmd_t pmdp_get_and_clear(struct mm_struct *mm,
unsigned long address,
pmd_t *pmdp)
static inline pte_t ptep_get_and_clear_full(struct mm_struct *mm,
unsigned long address, pte_t *ptep,
int full)
static inline void pte_clear_not_present_full(struct mm_struct *mm,
unsigned long address,
pte_t *ptep,
int full)
extern pte_t ptep_clear_flush(struct vm_area_struct *vma,
unsigned long address,
pte_t *ptep);
extern pmd_t pmdp_clear_flush(struct vm_area_struct *vma,
unsigned long address,
pmd_t *pmdp);
struct mm_struct;
static inline void ptep_set_wrprotect(struct mm_struct *mm, unsigned long address, pte_t *ptep)
static inline void pmdp_set_wrprotect(struct mm_struct *mm,
unsigned long address, pmd_t *pmdp)
static inline void pmdp_set_wrprotect(struct mm_struct *mm,
unsigned long address, pmd_t *pmdp)
extern pmd_t pmdp_splitting_flush(struct vm_area_struct *vma,
unsigned long address,
pmd_t *pmdp);
static inline int pte_same(pte_t pte_a, pte_t pte_b)
static inline int pmd_same(pmd_t pmd_a, pmd_t pmd_b)
static inline int pmd_same(pmd_t pmd_a, pmd_t pmd_b)
#define page_test_and_clear_dirty(pfn, mapped)	(0)
#define pte_maybe_dirty(pte)		pte_dirty(pte)
#define pte_maybe_dirty(pte)		(1)
#define page_test_and_clear_young(pfn) (0)
#define pgd_offset_gate(mm, addr)	pgd_offset(mm, addr)
#define move_pte(pte, prot, old_addr, new_addr)	(pte)
#define flush_tlb_fix_spurious_fault(vma, address) flush_tlb_page(vma, address)
#define pgprot_noncached(prot)	(prot)
#define pgprot_writecombine pgprot_noncached
#define pgd_addr_end(addr, end)						\
()
#define pud_addr_end(addr, end)						\
()
#define pmd_addr_end(addr, end)						\
()
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);
static inline int pgd_none_or_clear_bad(pgd_t *pgd)
static inline int pud_none_or_clear_bad(pud_t *pud)
static inline int pmd_none_or_clear_bad(pmd_t *pmd)
static inline pte_t __ptep_modify_prot_start(struct mm_struct *mm,
unsigned long addr,
pte_t *ptep)
static inline void __ptep_modify_prot_commit(struct mm_struct *mm,
unsigned long addr,
pte_t *ptep, pte_t pte)
static inline pte_t ptep_modify_prot_start(struct mm_struct *mm,
unsigned long addr,
pte_t *ptep)
static inline void ptep_modify_prot_commit(struct mm_struct *mm,
unsigned long addr,
pte_t *ptep, pte_t pte)
#define arch_enter_lazy_mmu_mode()	do  while (0)
#define arch_leave_lazy_mmu_mode()	do  while (0)
#define arch_flush_lazy_mmu_mode()	do  while (0)
#define arch_start_context_switch(prev)	do  while (0)
static inline int track_pfn_vma_new(struct vm_area_struct *vma, pgprot_t *prot,
unsigned long pfn, unsigned long size)
static inline int track_pfn_vma_copy(struct vm_area_struct *vma)
static inline void untrack_pfn_vma(struct vm_area_struct *vma,
unsigned long pfn, unsigned long size)
extern int track_pfn_vma_new(struct vm_area_struct *vma, pgprot_t *prot,
unsigned long pfn, unsigned long size);
extern int track_pfn_vma_copy(struct vm_area_struct *vma);
extern void untrack_pfn_vma(struct vm_area_struct *vma, unsigned long pfn,
unsigned long size);
static inline int pmd_trans_huge(pmd_t pmd)
static inline int pmd_trans_splitting(pmd_t pmd)
static inline int pmd_write(pmd_t pmd)
