void prepare_ftrace_return(unsigned long *parent, unsigned long self_addr)
static int ftrace_modify_code(unsigned long addr, unsigned int value)
#define MICROBLAZE_NOP 0x80000000
#define MICROBLAZE_BRI 0xb800000C
static unsigned int recorded;
static unsigned int imm;
#undef USE_FTRACE_NOP
static unsigned int bralid;
int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int __init ftrace_dyn_arch_init(void *data)
int ftrace_update_ftrace_func(ftrace_func_t func)
unsigned int old_jump;
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
