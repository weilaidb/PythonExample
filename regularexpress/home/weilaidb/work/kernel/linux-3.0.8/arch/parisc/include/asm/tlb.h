#define _PARISC_TLB_H
#define tlb_flush(tlb)			\
do  while (0)
#define tlb_start_vma(tlb, vma) \
do  while (0)
#define tlb_end_vma(tlb, vma)	\
do  while (0)
#define __tlb_remove_tlb_entry(tlb, pte, address) \
do  while (0)
#define __pmd_free_tlb(tlb, pmd, addr)	pmd_free((tlb)->mm, pmd)
#define __pte_free_tlb(tlb, pte, addr)	pte_free((tlb)->mm, pte)
