#define _H8300_TLBFLUSH_H
static inline void __flush_tlb(void)
static inline void __flush_tlb_one(unsigned long addr)
#define flush_tlb() __flush_tlb()
static inline void flush_tlb_all(void)
static inline void flush_tlb_mm(struct mm_struct *mm)
static inline void flush_tlb_page(struct vm_area_struct *vma, unsigned long addr)
static inline void flush_tlb_range(struct mm_struct *mm,
unsigned long start, unsigned long end)
static inline void flush_tlb_kernel_page(unsigned long addr)
