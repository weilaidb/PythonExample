#if (CONFIG_INTERRUPT_VECTOR_BASE & 0xffffff)
#error "INTERRUPT_VECTOR_BASE not aligned to 16MiB boundary!"
int kstack_depth_to_print = 24;
spinlock_t die_lock = __SPIN_LOCK_UNLOCKED(die_lock);
struct exception_to_signal_map ;
static const struct exception_to_signal_map exception_to_signal_map[256] = ;
int die_if_no_fixup(const char *str, struct pt_regs *regs,
enum exception_code code)
asmlinkage void handle_exception(struct pt_regs *regs, u32 intcode)
asmlinkage void nmi(struct pt_regs *regs, enum exception_code code)
void show_trace(unsigned long *sp)
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void show_registers_only(struct pt_regs *regs)
void show_registers(struct pt_regs *regs)
void show_trace_task(struct task_struct *tsk)
void die(const char *str, struct pt_regs *regs, enum exception_code code)
asmlinkage void do_double_fault(struct pt_regs *regs)
asmlinkage void io_bus_error(u32 bcberr, u32 bcbear, struct pt_regs *regs)
asmlinkage void uninitialised_exception(struct pt_regs *regs,
enum exception_code code)
void __init __set_intr_stub(enum exception_code code, void *handler)
void __init set_intr_stub(enum exception_code code, void *handler)
void __init trap_init(void)
int is_valid_bugaddr(unsigned long pc)
