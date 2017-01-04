void show_regs(struct pt_regs *regs)
void (*pm_idle)(void);
void (*pm_power_off)(void) = NULL;
EXPORT_SYMBOL(pm_power_off);
static int hlt_counter = 1;
void disable_hlt(void)
EXPORT_SYMBOL(disable_hlt);
void enable_hlt(void)
EXPORT_SYMBOL(enable_hlt);
static int __init nohlt_setup(char *__unused)
__setup("nohlt", nohlt_setup);
static int __init hlt_setup(char *__unused)
__setup("hlt", hlt_setup);
void default_idle(void)
void cpu_idle(void)
void flush_thread(void)
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
unsigned long thread_saved_pc(struct task_struct *tsk)
static void kernel_thread_helper(int (*fn)(void *), void *arg)
int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
EXPORT_SYMBOL_GPL(kernel_thread);
unsigned long get_wchan(struct task_struct *p)
void start_thread(struct pt_regs *regs, unsigned long pc, unsigned long usp)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpregs)
