#define __TLB_H__
extern void force_flush_all(void);
extern int flush_tlb_kernel_range_common(unsigned long start,
unsigned long end);
