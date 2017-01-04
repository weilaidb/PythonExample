#define _ASM_S390_FTRACE_H
extern void _mcount(void);
struct dyn_arch_ftrace ;
#define MCOUNT_ADDR ((long)_mcount)
#define MCOUNT_INSN_SIZE  12
#define MCOUNT_INSN_SIZE  20
static inline unsigned long ftrace_call_adjust(unsigned long addr)
