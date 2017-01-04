#define _S390_TLBFLUSH_H
static inline void __tlb_flush_local(void)
void smp_ptlb_all(void);
static inline void __tlb_flush_global(void)
static inline void __tlb_flush_full(struct mm_struct *mm)
#define __tlb_flush_full(mm)	__tlb_flush_local()
static inline void __tlb_flush_idte(unsigned long asce)
static inline void __tlb_flush_mm(struct mm_struct * mm)
static inline void __tlb_flush_mm_cond(struct mm_struct * mm)
#define flush_tlb()				do  while (0)
#define flush_tlb_all()				do  while (0)
#define flush_tlb_page(vma, addr)		do  while (0)
static inline void flush_tlb_mm(struct mm_struct *mm)
static inline void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static inline void flush_tlb_kernel_range(unsigned long start,
unsigned long end)
