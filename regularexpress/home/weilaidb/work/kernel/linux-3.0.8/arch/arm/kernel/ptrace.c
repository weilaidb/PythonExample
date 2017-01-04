#define REG_PC	15
#define REG_PSR	16
struct pt_regs_offset ;
#define REG_OFFSET_NAME(r) \
#define REG_OFFSET_END
static const struct pt_regs_offset regoffset_table[] = ;
int regs_query_register_offset(const char *name)
const char *regs_query_register_name(unsigned int offset)
bool regs_within_kernel_stack(struct pt_regs *regs, unsigned long addr)
unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs, unsigned int n)
static inline long get_user_reg(struct task_struct *task, int offset)
static inline int
put_user_reg(struct task_struct *task, int offset, long data)
void ptrace_disable(struct task_struct *child)
void ptrace_break(struct task_struct *tsk, struct pt_regs *regs)
static int break_trap(struct pt_regs *regs, unsigned int instr)
static struct undef_hook arm_break_hook = ;
static struct undef_hook thumb_break_hook = ;
static int thumb2_break_trap(struct pt_regs *regs, unsigned int instr)
static struct undef_hook thumb2_break_hook = ;
static int __init ptrace_break_init(void)
core_initcall(ptrace_break_init);
static int ptrace_read_user(struct task_struct *tsk, unsigned long off,
unsigned long __user *ret)
static int ptrace_write_user(struct task_struct *tsk, unsigned long off,
unsigned long val)
static int ptrace_getwmmxregs(struct task_struct *tsk, void __user *ufp)
static int ptrace_setwmmxregs(struct task_struct *tsk, void __user *ufp)
static int ptrace_getcrunchregs(struct task_struct *tsk, void __user *ufp)
static int ptrace_setcrunchregs(struct task_struct *tsk, void __user *ufp)
static int ptrace_hbp_num_to_idx(long num)
static long ptrace_hbp_idx_to_num(int idx)
static void ptrace_hbptriggered(struct perf_event *bp, int unused,
struct perf_sample_data *data,
struct pt_regs *regs)
void clear_ptrace_hw_breakpoint(struct task_struct *tsk)
void flush_ptrace_hw_breakpoint(struct task_struct *tsk)
static u32 ptrace_get_hbp_resource_info(void)
static struct perf_event *ptrace_hbp_create(struct task_struct *tsk, int type)
static int ptrace_gethbpregs(struct task_struct *tsk, long num,
unsigned long  __user *data)
static int ptrace_sethbpregs(struct task_struct *tsk, long num,
unsigned long __user *data)
static int gpr_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int gpr_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpa_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpa_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int vfp_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int vfp_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
enum arm_regset ;
static const struct user_regset arm_regsets[] = ;
static const struct user_regset_view user_arm_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
asmlinkage int syscall_trace(int why, struct pt_regs *regs, int scno)
