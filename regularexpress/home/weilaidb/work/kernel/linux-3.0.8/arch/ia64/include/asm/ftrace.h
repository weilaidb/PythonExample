#define _ASM_IA64_FTRACE_H
#define MCOUNT_INSN_SIZE        32
extern void _mcount(unsigned long pfs, unsigned long r1, unsigned long b0, unsigned long r0);
#define mcount _mcount
#define MCOUNT_ADDR (((struct fnptr *)mcount)->ip)
#define FTRACE_ADDR (((struct fnptr *)ftrace_caller)->ip)
static inline unsigned long ftrace_call_adjust(unsigned long addr)
struct dyn_arch_ftrace ;
