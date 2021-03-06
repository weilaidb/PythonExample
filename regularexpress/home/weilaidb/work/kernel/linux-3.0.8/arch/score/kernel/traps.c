unsigned long exception_handlers[32];
void show_stack(struct task_struct *task, unsigned long *sp)
static void show_trace(long *sp)
static void show_code(unsigned int *pc)
void show_regs(struct pt_regs *regs)
static void show_registers(struct pt_regs *regs)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void __die(const char *str, struct pt_regs *regs, const char *file,
const char *func, unsigned long line)
void __die_if_kernel(const char *str, struct pt_regs *regs,
const char *file, const char *func, unsigned long line)
asmlinkage void do_adelinsn(struct pt_regs *regs)
asmlinkage void do_adedata(struct pt_regs *regs)
asmlinkage void do_pel(struct pt_regs *regs)
asmlinkage void do_cee(struct pt_regs *regs)
asmlinkage void do_cpe(struct pt_regs *regs)
asmlinkage void do_be(struct pt_regs *regs)
asmlinkage void do_ov(struct pt_regs *regs)
asmlinkage void do_tr(struct pt_regs *regs)
asmlinkage void do_ri(struct pt_regs *regs)
asmlinkage void do_ccu(struct pt_regs *regs)
asmlinkage void do_reserved(struct pt_regs *regs)
void nmi_exception_handler(struct pt_regs *regs)
void *set_except_vector(int n, void *addr)
void __init trap_init(void)
