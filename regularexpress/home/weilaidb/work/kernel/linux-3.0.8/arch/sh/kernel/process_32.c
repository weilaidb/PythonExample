void show_regs(struct pt_regs * regs)
ATTRIB_NORET void kernel_thread_helper(void *arg, int (*fn)(void *))
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void start_thread(struct pt_regs *regs, unsigned long new_pc,
unsigned long new_sp)
EXPORT_SYMBOL(start_thread);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpu)
EXPORT_SYMBOL(dump_fpu);
void prepare_to_copy(struct task_struct *tsk)
asmlinkage void ret_from_fork(void);
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
__notrace_funcgraph struct task_struct *
__switch_to(struct task_struct *prev, struct task_struct *next)
asmlinkage int sys_fork(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
unsigned long parent_tidptr,
unsigned long child_tidptr,
struct pt_regs __regs)
asmlinkage int sys_vfork(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage int sys_execve(const char __user *ufilename,
const char __user *const __user *uargv,
const char __user *const __user *uenvp,
unsigned long r7, struct pt_regs __regs)
unsigned long get_wchan(struct task_struct *p)
