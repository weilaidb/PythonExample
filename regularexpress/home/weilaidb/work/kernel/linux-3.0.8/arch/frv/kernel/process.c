asmlinkage void ret_from_fork(void);
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
struct task_struct *alloc_task_struct_node(int node)
void free_task_struct(struct task_struct *p)
static void core_sleep_idle(void)
void (*idle)(void) = core_sleep_idle;
void cpu_idle(void)
void machine_restart(char * __unused)
void machine_halt(void)
void machine_power_off(void)
void flush_thread(void)
inline unsigned long user_stack(const struct pt_regs *regs)
asmlinkage int sys_fork(void)
asmlinkage int sys_vfork(void)
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
int __user *parent_tidptr, int __user *child_tidptr,
int __user *tlsptr)
void prepare_to_copy(struct task_struct *tsk)
int copy_thread(unsigned long clone_flags,
unsigned long usp, unsigned long topstk,
struct task_struct *p, struct pt_regs *regs)
asmlinkage int sys_execve(const char __user *name,
const char __user *const __user *argv,
const char __user *const __user *envp)
unsigned long get_wchan(struct task_struct *p)
unsigned long thread_saved_pc(struct task_struct *tsk)
int elf_check_arch(const struct elf32_hdr *hdr)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpregs)
