static int genregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int genregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpmregs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpmregs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpmregs_active(struct task_struct *target,
const struct user_regset *regset)
enum frv_regset ;
static const struct user_regset frv_regsets[] = ;
static const struct user_regset_view user_frv_native_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
static inline long get_reg(struct task_struct *task, int regno)
static inline int put_reg(struct task_struct *task, int regno,
unsigned long data)
void user_enable_single_step(struct task_struct *child)
void user_disable_single_step(struct task_struct *child)
void ptrace_disable(struct task_struct *child)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage unsigned long syscall_trace_entry(void)
asmlinkage void syscall_trace_exit(void)
