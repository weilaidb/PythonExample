static inline long
get_reg(struct task_struct *task, unsigned long regno,
unsigned long __user *datap)
static inline int
put_reg(struct task_struct *task, unsigned long regno, unsigned long data)
int
is_user_addr_valid(struct task_struct *child, unsigned long start, unsigned long len)
static int genregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
enum bfin_regset ;
static const struct user_regset bfin_regsets[] = ;
static const struct user_regset_view user_bfin_native_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int syscall_trace_enter(struct pt_regs *regs)
asmlinkage void syscall_trace_leave(struct pt_regs *regs)
