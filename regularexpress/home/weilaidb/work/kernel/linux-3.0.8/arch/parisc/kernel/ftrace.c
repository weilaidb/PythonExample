static int push_return_trace(unsigned long ret, unsigned long long time,
unsigned long func, int *depth)
static void pop_return_trace(struct ftrace_graph_ret *trace, unsigned long *ret)
unsigned long ftrace_return_to_handler(unsigned long retval0,
unsigned long retval1)
void prepare_ftrace_return(unsigned long *parent, unsigned long self_addr)
void ftrace_function_trampoline(unsigned long parent,
unsigned long self_addr,
unsigned long org_sp_gr3)
