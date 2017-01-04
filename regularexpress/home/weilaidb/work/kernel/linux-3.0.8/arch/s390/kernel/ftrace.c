#define MCOUNT_OFFSET_RET 12
#define MCOUNT_OFFSET_RET 22
void ftrace_disable_code(void);
void ftrace_enable_insn(void);
asm(
"	.align	4\n"
"ftrace_disable_code:\n"
"	jg	0f\n"
"	lgr	%r0,%r0\n"
"	basr	%r14,%r1\n"
"0:\n"
"	.align	4\n"
"ftrace_enable_insn:\n"
"	lg	%r1,"__stringify(__LC_FTRACE_FUNC)"\n");
#define FTRACE_INSN_SIZE	6
asm(
"	.align	4\n"
"ftrace_disable_code:\n"
"	j	1f\n"
"	j	0f\n"
"	.fill	12,1,0x07\n"
"0:	basr	%r14,%r14\n"
"1:\n"
"	.align	4\n"
"ftrace_enable_insn:\n"
"	l	%r14,"__stringify(__LC_FTRACE_FUNC)"\n");
#define FTRACE_INSN_SIZE	4
int ftrace_make_nop(struct module *mod, struct dyn_ftrace *rec,
unsigned long addr)
int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr)
int ftrace_update_ftrace_func(ftrace_func_t func)
int __init ftrace_dyn_arch_init(void *data)
unsigned long __kprobes prepare_ftrace_return(unsigned long parent,
unsigned long ip)
int ftrace_enable_ftrace_graph_caller(void)
int ftrace_disable_ftrace_graph_caller(void)
