static unsigned int
ftrace_call_replace(unsigned long ip, unsigned long addr, int link)
static int
ftrace_modify_code(unsigned long ip, unsigned int old, unsigned int new)
static int test_24bit_addr(unsigned long ip, unsigned long addr)
static int is_bl_op(unsigned int op)
static unsigned long find_bl_target(unsigned long ip, unsigned int op)
static int
__ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
static int
__ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
static int
__ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
static int
__ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
extern void ftrace_graph_call(void);
extern void ftrace_graph_stub(void);
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
extern void mod_return_to_handler(void);
void prepare_ftrace_return(unsigned long *parent, unsigned long self_addr)
#if defined(CONFIG_FTRACE_SYSCALLS) && defined(CONFIG_PPC64)
unsigned long __init arch_syscall_addr(int nr)
