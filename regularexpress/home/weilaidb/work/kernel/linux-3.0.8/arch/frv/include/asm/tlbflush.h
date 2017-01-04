#define _ASM_TLBFLUSH_H
extern void asmlinkage __flush_tlb_all(void);
extern void asmlinkage __flush_tlb_mm(unsigned long contextid);
extern void asmlinkage __flush_tlb_page(unsigned long contextid, unsigned long start);
extern void asmlinkage __flush_tlb_range(unsigned long contextid,
unsigned long start, unsigned long end);
#define flush_tlb_all()				\
do  while(0)
#define flush_tlb_mm(mm)			\
do  while(0)
#define flush_tlb_range(vma,start,end)					\
do  while(0)
#define flush_tlb_page(vma,addr)				\
do  while(0)
#define __flush_tlb_global()			flush_tlb_all()
#define flush_tlb()				flush_tlb_all()
#define flush_tlb_kernel_range(start, end)	flush_tlb_all()
#define flush_tlb()				BUG()
#define flush_tlb_all()				BUG()
#define flush_tlb_mm(mm)			BUG()
#define flush_tlb_page(vma,addr)		BUG()
#define flush_tlb_range(mm,start,end)		BUG()
#define flush_tlb_kernel_range(start, end)	BUG()
