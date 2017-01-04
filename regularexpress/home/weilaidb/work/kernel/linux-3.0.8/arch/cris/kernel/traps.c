extern void arch_enable_nmi(void);
extern void stop_watchdog(void);
extern void reset_watchdog(void);
extern void show_registers(struct pt_regs *regs);
extern void handle_BUG(struct pt_regs *regs);
#define handle_BUG(regs)
static int kstack_depth_to_print = 24;
void (*nmi_handler)(struct pt_regs *);
void
show_trace(unsigned long *stack)
#define MODULE_RANGE (8*1024*1024)
void
show_stack(struct task_struct *task, unsigned long *sp)
void
dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void
set_nmi_handler(void (*handler)(struct pt_regs *))
void
oops_nmi_handler(struct pt_regs *regs)
static int __init
oops_nmi_register(void)
__initcall(oops_nmi_register);
void
watchdog_bite_hook(struct pt_regs *regs)
void
die_if_kernel(const char *str, struct pt_regs *regs, long err)
void __init
trap_init(void)
