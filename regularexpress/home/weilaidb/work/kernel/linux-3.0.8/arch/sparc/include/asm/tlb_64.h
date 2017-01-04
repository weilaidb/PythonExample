#define _SPARC64_TLB_H
extern void smp_flush_tlb_pending(struct mm_struct *,
unsigned long, unsigned long *);
extern void smp_flush_tlb_mm(struct mm_struct *mm);
#define do_flush_tlb_mm(mm) smp_flush_tlb_mm(mm)
#define do_flush_tlb_mm(mm) __flush_tlb_mm(CTX_HWBITS(mm->context), SECONDARY_CONTEXT)
extern void __flush_tlb_pending(unsigned long, unsigned long, unsigned long *);
extern void flush_tlb_pending(void);
#define tlb_start_vma(tlb, vma) do  while (0)
#define tlb_end_vma(tlb, vma)	do  while (0)
#define __tlb_remove_tlb_entry(tlb, ptep, address) do  while (0)
#define tlb_flush(tlb)	flush_tlb_pending()
