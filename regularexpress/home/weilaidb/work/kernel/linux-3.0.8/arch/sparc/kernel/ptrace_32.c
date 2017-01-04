void ptrace_disable(struct task_struct *child)
enum sparc_regset ;
static int genregs32_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs32_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpregs32_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpregs32_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static const struct user_regset sparc32_regsets[] = ;
static const struct user_regset_view user_sparc32_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
struct fps ;
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int syscall_trace(struct pt_regs *regs, int syscall_exit_p)
