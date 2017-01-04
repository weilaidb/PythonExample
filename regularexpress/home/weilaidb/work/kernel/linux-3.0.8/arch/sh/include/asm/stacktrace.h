#define _ASM_SH_STACKTRACE_H
struct stacktrace_ops ;
void dump_trace(struct task_struct *tsk, struct pt_regs *regs,
unsigned long *stack,
const struct stacktrace_ops *ops, void *data);
