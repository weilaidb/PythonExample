void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
void machine_restart(char *command)
void machine_halt(void)
void machine_power_off(void)
void __noreturn cpu_idle(void)
void ret_from_fork(void);
void start_thread(struct pt_regs *regs, unsigned long pc, unsigned long sp)
void exit_thread(void)
void flush_thread(void)
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *r)
static void __noreturn
kernel_thread_helper(void *unused0, int (*fn)(void *),
void *arg, void *unused1)
long kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
unsigned long thread_saved_pc(struct task_struct *tsk)
unsigned long get_wchan(struct task_struct *task)
unsigned long arch_align_stack(unsigned long sp)
