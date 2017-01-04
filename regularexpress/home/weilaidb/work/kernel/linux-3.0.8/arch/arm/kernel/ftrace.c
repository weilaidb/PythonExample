#define	NOP		0xeb04f85d
#define	NOP		0xe8bd4000
#define OLD_MCOUNT_ADDR	((unsigned long) mcount)
#define OLD_FTRACE_ADDR ((unsigned long) ftrace_caller_old)
#define	OLD_NOP		0xe1a00000
static unsigned long ftrace_nop_replace(struct dyn_ftrace *rec)
static unsigned long adjust_address(struct dyn_ftrace *rec, unsigned long addr)
static unsigned long ftrace_nop_replace(struct dyn_ftrace *rec)
static unsigned long adjust_address(struct dyn_ftrace *rec, unsigned long addr)
static unsigned long ftrace_gen_branch(unsigned long pc, unsigned long addr,
bool link)
static unsigned long ftrace_gen_branch(unsigned long pc, unsigned long addr,
bool link)
static unsigned long ftrace_call_replace(unsigned long pc, unsigned long addr)
static int ftrace_modify_code(unsigned long pc, unsigned long old,
unsigned long new)
int ftrace_update_ftrace_func(ftrace_func_t func)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
int __init ftrace_dyn_arch_init(void *data)
void prepare_ftrace_return(unsigned long *parent, unsigned long self_addr,
unsigned long frame_pointer)
extern unsigned long ftrace_graph_call;
extern unsigned long ftrace_graph_call_old;
extern void ftrace_graph_caller_old(void);
static int __ftrace_modify_caller(unsigned long *callsite,
void (*func) (void), bool enable)
static int ftrace_modify_graph_caller(bool enable)
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
