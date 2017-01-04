static int genregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
enum score7_regset ;
static const struct user_regset score7_regsets[] = ;
static const struct user_regset_view user_score_native_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
static int is_16bitinsn(unsigned long insn)
int
read_tsk_long(struct task_struct *child,
unsigned long addr, unsigned long *res)
int
read_tsk_short(struct task_struct *child,
unsigned long addr, unsigned short *res)
static int
write_tsk_short(struct task_struct *child,
unsigned long addr, unsigned short val)
static int
write_tsk_long(struct task_struct *child,
unsigned long addr, unsigned long val)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long
arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage void do_syscall_trace(struct pt_regs *regs, int entryexit)
