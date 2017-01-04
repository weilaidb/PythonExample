#define _ASM_S390_DIAG_H
static inline void diag10_range(unsigned long start_pfn, unsigned long num_pfn)
extern int diag14(unsigned long rx, unsigned long ry1, unsigned long subcode);
struct diag210  __attribute__((packed, aligned(4)));
extern int diag210(struct diag210 *addr);
