static const unsigned char mnop[] = ;
static void bfin_make_pcrel24(unsigned char *insn, unsigned long src,
unsigned long dst)
#define bfin_make_pcrel24(insn, src, dst) bfin_make_pcrel24(insn, src, (unsigned long)(dst))
static int ftrace_modify_code(unsigned long ip, const unsigned char *code,
unsigned long len)
int ftrace_make_nop(struct module *mod, struct dyn_ftrace *rec,
unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
# ifdef CONFIG_DYNAMIC_FTRACE
extern void ftrace_graph_call(void);
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
# endif
void prepare_ftrace_return(unsigned long *parent, unsigned long self_addr,
unsigned long frame_pointer)
