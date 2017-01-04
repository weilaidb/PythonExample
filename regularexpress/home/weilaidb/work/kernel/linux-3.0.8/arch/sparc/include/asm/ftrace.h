#define _ASM_SPARC64_FTRACE
#define MCOUNT_ADDR		((long)(_mcount))
#define MCOUNT_INSN_SIZE	4
extern void _mcount(void);
static inline unsigned long ftrace_call_adjust(unsigned long addr)
struct dyn_arch_ftrace ;
