#define CREATE_TRACE_POINTS
enum s390_regset ;
void update_per_regs(struct task_struct *task)
void user_enable_single_step(struct task_struct *task)
void user_disable_single_step(struct task_struct *task)
void ptrace_disable(struct task_struct *task)
# define __ADDR_MASK 3
# define __ADDR_MASK 7
static inline unsigned long __peek_user_per(struct task_struct *child,
addr_t addr)
static unsigned long __peek_user(struct task_struct *child, addr_t addr)
static int
peek_user(struct task_struct *child, addr_t addr, addr_t data)
static inline void __poke_user_per(struct task_struct *child,
addr_t addr, addr_t data)
static int __poke_user(struct task_struct *child, addr_t addr, addr_t data)
static int poke_user(struct task_struct *child, addr_t addr, addr_t data)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
static inline __u32 __peek_user_per_compat(struct task_struct *child,
addr_t addr)
static u32 __peek_user_compat(struct task_struct *child, addr_t addr)
static int peek_user_compat(struct task_struct *child,
addr_t addr, addr_t data)
static inline void __poke_user_per_compat(struct task_struct *child,
addr_t addr, __u32 data)
static int __poke_user_compat(struct task_struct *child,
addr_t addr, addr_t data)
static int poke_user_compat(struct task_struct *child,
addr_t addr, addr_t data)
long compat_arch_ptrace(struct task_struct *child, compat_long_t request,
compat_ulong_t caddr, compat_ulong_t cdata)
asmlinkage long do_syscall_trace_enter(struct pt_regs *regs)
asmlinkage void do_syscall_trace_exit(struct pt_regs *regs)
static int s390_regs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int s390_regs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int s390_fpregs_get(struct task_struct *target,
const struct user_regset *regset, unsigned int pos,
unsigned int count, void *kbuf, void __user *ubuf)
static int s390_fpregs_set(struct task_struct *target,
const struct user_regset *regset, unsigned int pos,
unsigned int count, const void *kbuf,
const void __user *ubuf)
static int s390_last_break_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static const struct user_regset s390_regsets[] = ;
static const struct user_regset_view user_s390_view = ;
static int s390_compat_regs_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int s390_compat_regs_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int s390_compat_regs_high_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int s390_compat_regs_high_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int s390_compat_last_break_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static const struct user_regset s390_compat_regsets[] = ;
static const struct user_regset_view user_s390_compat_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
static const char *gpr_names[NUM_GPRS] = ;
unsigned long regs_get_register(struct pt_regs *regs, unsigned int offset)
int regs_query_register_offset(const char *name)
const char *regs_query_register_name(unsigned int offset)
static int regs_within_kernel_stack(struct pt_regs *regs, unsigned long addr)
unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs, unsigned int n)
