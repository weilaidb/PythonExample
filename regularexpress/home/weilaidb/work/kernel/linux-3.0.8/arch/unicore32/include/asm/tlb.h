#define __UNICORE_TLB_H__
#define tlb_start_vma(tlb, vma)				do  while (0)
#define tlb_end_vma(tlb, vma)				do  while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address)	do  while (0)
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)
#define __pte_free_tlb(tlb, pte, addr)				\
do  while (0)
