extern int perfmon_init(struct oprofile_operations *ops);
extern void perfmon_exit(void);
extern void ia64_backtrace(struct pt_regs * const regs, unsigned int depth);
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
