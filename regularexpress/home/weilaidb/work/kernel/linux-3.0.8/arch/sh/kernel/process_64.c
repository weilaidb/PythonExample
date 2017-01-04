struct task_struct *last_task_used_math = NULL;
void show_regs(struct pt_regs *regs)
ATTRIB_NORET void kernel_thread_helper(void *arg, int (*fn)(void *))
int kernel_thread(int (*fn)(void *), void * arg, unsigned long flags)
EXPORT_SYMBOL(kernel_thread);
void exit_thread(void)
void flush_thread(void)
void release_thread(struct task_struct *dead_task)
int dump_fpu(struct pt_regs *regs, elf_fpregset_t *fpu)
EXPORT_SYMBOL(dump_fpu);
asmlinkage void ret_from_fork(void);
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused,
struct task_struct *p, struct pt_regs *regs)
asmlinkage int sys_fork(unsigned long r2, unsigned long r3,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs)
asmlinkage int sys_clone(unsigned long clone_flags, unsigned long newsp,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs)
asmlinkage int sys_vfork(unsigned long r2, unsigned long r3,
unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs)
asmlinkage int sys_execve(const char *ufilename, char **uargv,
char **uenvp, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs *pregs)
static int in_sh64_switch_to(unsigned long pc)
unsigned long get_wchan(struct task_struct *p)
