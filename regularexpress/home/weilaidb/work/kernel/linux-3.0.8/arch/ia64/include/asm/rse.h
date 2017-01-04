#define _ASM_IA64_RSE_H
static __inline__ unsigned long
ia64_rse_slot_num (unsigned long *addr)
static __inline__ unsigned long
ia64_rse_is_rnat_slot (unsigned long *addr)
static __inline__ unsigned long *
ia64_rse_rnat_addr (unsigned long *slot_addr)
static __inline__ unsigned long
ia64_rse_num_regs (unsigned long *bspstore, unsigned long *bsp)
static __inline__ unsigned long *
ia64_rse_skip_regs (unsigned long *addr, long num_regs)
