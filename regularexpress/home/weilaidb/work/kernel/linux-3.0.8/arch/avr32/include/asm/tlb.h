#define __ASM_AVR32_TLB_H
#define tlb_start_vma(tlb, vma) \
flush_cache_range(vma, vma->vm_start, vma->vm_end)
#define tlb_end_vma(tlb, vma) \
flush_tlb_range(vma, vma->vm_start, vma->vm_end)
#define __tlb_remove_tlb_entry(tlb, pte, address) do  while(0)
#define tlb_flush(tlb) flush_tlb_mm((tlb)->mm)
extern void show_dtlb_entry(unsigned int index);
extern void dump_dtlb(void);
