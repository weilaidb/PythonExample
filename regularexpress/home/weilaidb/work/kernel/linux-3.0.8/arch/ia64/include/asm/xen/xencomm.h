#define _ASM_IA64_XEN_XENCOMM_H
extern void xencomm_initialize(void);
extern int xencomm_is_initialized(void);
static inline int xencomm_is_phys_contiguous(unsigned long addr)
