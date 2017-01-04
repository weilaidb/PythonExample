#define _POWERPC_XMON_DIS_ASM_H
extern void print_address (unsigned long memaddr);
extern int print_insn_powerpc(unsigned long insn, unsigned long memaddr);
extern int print_insn_spu(unsigned long insn, unsigned long memaddr);
static inline int print_insn_powerpc(unsigned long insn, unsigned long memaddr)
static inline int print_insn_spu(unsigned long insn, unsigned long memaddr)
