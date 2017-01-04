static DEFINE_SPINLOCK(die_lock);
void NORET_TYPE die(const char *str, struct pt_regs *regs, long err)
void _exception(long signr, struct pt_regs *regs, int code,
unsigned long addr)
asmlinkage void do_nmi(unsigned long ecr, struct pt_regs *regs)
asmlinkage void do_critical_exception(unsigned long ecr, struct pt_regs *regs)
asmlinkage void do_address_exception(unsigned long ecr, struct pt_regs *regs)
static LIST_HEAD(undef_hook);
static DEFINE_SPINLOCK(undef_lock);
void register_undef_hook(struct undef_hook *hook)
void unregister_undef_hook(struct undef_hook *hook)
static int do_cop_absent(u32 insn)
int is_valid_bugaddr(unsigned long pc)
asmlinkage void do_illegal_opcode(unsigned long ecr, struct pt_regs *regs)
asmlinkage void do_fpe(unsigned long ecr, struct pt_regs *regs)
void __init trap_init(void)
