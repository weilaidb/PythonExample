static unsigned char __attribute__((aligned(8)))
ftrace_orig_code[MCOUNT_INSN_SIZE] = ;
struct ftrace_orig_insn ;
static unsigned char ftrace_nop_code[MCOUNT_INSN_SIZE] = ;
static unsigned char *ftrace_nop_replace(void)
static unsigned char __attribute__((aligned(8)))
ftrace_call_code[MCOUNT_INSN_SIZE] = ;
struct ftrace_call_insn ;
static unsigned char *ftrace_call_replace(unsigned long ip, unsigned long addr)
static int
ftrace_modify_code(unsigned long ip, unsigned char *old_code,
unsigned char *new_code, int do_check)
static int ftrace_make_nop_check(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_nop(struct module *mod,
struct dyn_ftrace *rec, unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
