static const u32 ftrace_nop = 0x01000000;
static u32 ftrace_call_replace(unsigned long ip, unsigned long addr)
static int ftrace_modify_code(unsigned long ip, u32 old, u32 new)
int ftrace_make_nop(struct module *mod, struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
extern void ftrace_graph_call(void);
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
unsigned long prepare_ftrace_return(unsigned long parent,
unsigned long self_addr,
unsigned long frame_pointer)
