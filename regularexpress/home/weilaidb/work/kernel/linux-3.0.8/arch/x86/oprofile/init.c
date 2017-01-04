extern int op_nmi_init(struct oprofile_operations *ops);
extern int op_nmi_timer_init(struct oprofile_operations *ops);
extern void op_nmi_exit(void);
extern void x86_backtrace(struct pt_regs * const regs, unsigned int depth);
int __init oprofile_arch_init(struct oprofile_operations *ops)
void oprofile_arch_exit(void)
