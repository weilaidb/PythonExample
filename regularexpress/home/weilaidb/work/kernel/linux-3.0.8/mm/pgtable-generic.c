int ptep_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep,
pte_t entry, int dirty)
int pmdp_set_access_flags(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp,
pmd_t entry, int dirty)
int ptep_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pte_t *ptep)
int pmdp_clear_flush_young(struct vm_area_struct *vma,
unsigned long address, pmd_t *pmdp)
pte_t ptep_clear_flush(struct vm_area_struct *vma, unsigned long address,
pte_t *ptep)
pmd_t pmdp_clear_flush(struct vm_area_struct *vma, unsigned long address,
pmd_t *pmdp)
pmd_t pmdp_splitting_flush(struct vm_area_struct *vma, unsigned long address,
pmd_t *pmdp)
