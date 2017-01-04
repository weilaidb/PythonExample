#define CREATE_TRACE_POINTS
#define PARAMETER_SAVE_AREA_OFFSET	24
#define PARAMETER_SAVE_AREA_OFFSET	48
struct pt_regs_offset ;
#define STR(s)	#s
#define REG_OFFSET_NAME(r)
#define GPR_OFFSET_NAME(num)	\
#define REG_OFFSET_END
static const struct pt_regs_offset regoffset_table[] = ;
int regs_query_register_offset(const char *name)
const char *regs_query_register_name(unsigned int offset)
#define MSR_DEBUGCHANGE	0
#define MSR_DEBUGCHANGE	(MSR_SE | MSR_BE)
#define PT_MAX_PUT_REG	PT_MQ
#define PT_MAX_PUT_REG	PT_CCR
static unsigned long get_user_msr(struct task_struct *task)
static int set_user_msr(struct task_struct *task, unsigned long msr)
static int set_user_trap(struct task_struct *task, unsigned long trap)
unsigned long ptrace_get_reg(struct task_struct *task, int regno)
int ptrace_put_reg(struct task_struct *task, int regno, unsigned long data)
static int gpr_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int gpr_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int fpr_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int fpr_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int vr_active(struct task_struct *target,
const struct user_regset *regset)
static int vr_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int vr_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int vsr_active(struct task_struct *target,
const struct user_regset *regset)
static int vsr_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int vsr_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static int evr_active(struct task_struct *target,
const struct user_regset *regset)
static int evr_get(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int evr_set(struct task_struct *target, const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
enum powerpc_regset ;
static const struct user_regset native_regsets[] = ;
static const struct user_regset_view user_ppc_native_view = ;
static int gpr32_get(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
void *kbuf, void __user *ubuf)
static int gpr32_set(struct task_struct *target,
const struct user_regset *regset,
unsigned int pos, unsigned int count,
const void *kbuf, const void __user *ubuf)
static const struct user_regset compat_regsets[] = ;
static const struct user_regset_view user_ppc_compat_view = ;
const struct user_regset_view *task_user_regset_view(struct task_struct *task)
void user_enable_single_step(struct task_struct *task)
void user_enable_block_step(struct task_struct *task)
void user_disable_single_step(struct task_struct *task)
void ptrace_triggered(struct perf_event *bp, int nmi,
struct perf_sample_data *data, struct pt_regs *regs)
int ptrace_set_debugreg(struct task_struct *task, unsigned long addr,
unsigned long data)
void ptrace_disable(struct task_struct *child)
static long set_intruction_bp(struct task_struct *child,
struct ppc_hw_breakpoint *bp_info)
static int del_instruction_bp(struct task_struct *child, int slot)
static int set_dac(struct task_struct *child, struct ppc_hw_breakpoint *bp_info)
static int del_dac(struct task_struct *child, int slot)
static int set_dac_range(struct task_struct *child,
struct ppc_hw_breakpoint *bp_info)
static long ppc_set_hwdebug(struct task_struct *child,
struct ppc_hw_breakpoint *bp_info)
static long ppc_del_hwdebug(struct task_struct *child, long addr, long data)
static long arch_ptrace_old(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
long arch_ptrace(struct task_struct *child, long request,
unsigned long addr, unsigned long data)
long do_syscall_trace_enter(struct pt_regs *regs)
void do_syscall_trace_leave(struct pt_regs *regs)
