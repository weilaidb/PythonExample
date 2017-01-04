#define _SPARC64_TLBFLUSH_H
#define TLB_BATCH_NR	192
struct tlb_batch ;
extern void flush_tsb_kernel_range(unsigned long start, unsigned long end);
extern void flush_tsb_user(struct tlb_batch *tb);
extern void flush_tlb_pending(void);
#define flush_tlb_range(vma,start,end)	\
do  while (0)
#define flush_tlb_page(vma,addr)	flush_tlb_pending()
#define flush_tlb_mm(mm)		flush_tlb_pending()
extern void __flush_tlb_all(void);
extern void __flush_tlb_kernel_range(unsigned long start, unsigned long end);
#define flush_tlb_kernel_range(start,end) \
do  while (0)
extern void smp_flush_tlb_kernel_range(unsigned long start, unsigned long end);
#define flush_tlb_kernel_range(start, end) \
do  while (0)
