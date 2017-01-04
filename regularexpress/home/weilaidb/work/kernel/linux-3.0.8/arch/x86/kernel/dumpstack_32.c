void dump_trace(struct task_struct *task, struct pt_regs *regs,
unsigned long *stack, unsigned long bp,
const struct stacktrace_ops *ops, void *data)
EXPORT_SYMBOL(dump_trace);
void
show_stack_log_lvl(struct task_struct *task, struct pt_regs *regs,
unsigned long *sp, unsigned long bp, char *log_lvl)
void show_registers(struct pt_regs *regs)
int is_valid_bugaddr(unsigned long ip)
