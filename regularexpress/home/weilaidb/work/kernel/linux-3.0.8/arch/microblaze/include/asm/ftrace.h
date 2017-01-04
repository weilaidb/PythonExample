#define _ASM_MICROBLAZE_FTRACE
#define MCOUNT_ADDR		((long)(_mcount))
#define MCOUNT_INSN_SIZE	8
extern void _mcount(void);
extern void ftrace_call_graph(void);
static inline unsigned long ftrace_call_adjust(unsigned long addr)
struct dyn_arch_ftrace ;
