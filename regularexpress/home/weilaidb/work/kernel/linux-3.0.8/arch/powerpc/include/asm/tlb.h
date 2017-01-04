#define _ASM_POWERPC_TLB_H
#define tlb_start_vma(tlb, vma)	do  while (0)
#define tlb_end_vma(tlb, vma)	do  while (0)
extern void tlb_flush(struct mmu_gather *tlb);
extern void flush_hash_entry(struct mm_struct *mm, pte_t *ptep,
unsigned long address);
static inline void __tlb_remove_tlb_entry(struct mmu_gather *tlb, pte_t *ptep,
unsigned long address)
