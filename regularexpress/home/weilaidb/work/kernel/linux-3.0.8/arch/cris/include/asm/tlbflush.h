#define _CRIS_TLBFLUSH_H
extern void __flush_tlb_all(void);
extern void __flush_tlb_mm(struct mm_struct *mm);
extern void __flush_tlb_page(struct vm_area_struct *vma,
unsigned long addr);
extern void flush_tlb_all(void);
extern void flush_tlb_mm(struct mm_struct *mm);
extern void flush_tlb_page(struct vm_area_struct *vma,
unsigned long addr);
#define flush_tlb_all __flush_tlb_all
#define flush_tlb_mm __flush_tlb_mm
#define flush_tlb_page __flush_tlb_page
static inline void flush_tlb_range(struct vm_area_struct * vma, unsigned long start, unsigned long end)
static inline void flush_tlb(void)
#define flush_tlb_kernel_range(start, end) flush_tlb_all()
