extern unsigned long _get_SP(void);
struct task_struct *last_task_used_math = NULL;
struct task_struct *last_task_used_altivec = NULL;
struct task_struct *last_task_used_vsx = NULL;
struct task_struct *last_task_used_spe = NULL;
void flush_fp_to_thread(struct task_struct *tsk)
void enable_kernel_fp(void)
EXPORT_SYMBOL(enable_kernel_fp);
void enable_kernel_altivec(void)
EXPORT_SYMBOL(enable_kernel_altivec);
void flush_altivec_to_thread(struct task_struct *tsk)
}
EXPORT_SYMBOL(enable_kernel_vsx);
void giveup_vsx(struct task_struct *tsk)
void flush_vsx_to_thread(struct task_struct *tsk)
void enable_kernel_spe(void)
EXPORT_SYMBOL(enable_kernel_spe);
void flush_spe_to_thread(struct task_struct *tsk)
void discard_lazy_cpu_state(void)
void do_send_trap(struct pt_regs *regs, unsigned long address,
unsigned long error_code, int signal_code, int breakpt)
void do_dabr(struct pt_regs *regs, unsigned long address,
unsigned long error_code)
static DEFINE_PER_CPU(unsigned long, current_dabr);
static void set_debug_reg_defaults(struct thread_struct *thread)
static void prime_debug_regs(struct thread_struct *thread)
static void switch_booke_debug_regs(struct thread_struct *new_thread)
static void set_debug_reg_defaults(struct thread_struct *thread)
int set_dabr(unsigned long dabr)
DEFINE_PER_CPU(struct cpu_usage, cpu_usage_array);
struct task_struct *__switch_to(struct task_struct *prev,
struct task_struct *new)
static int instructions_to_print = 16;
static void show_instructions(struct pt_regs *regs)
static struct regbit  msr_bits[] = ;
static void printbits(unsigned long val, struct regbit *bits)
#define REG		"%016lx"
#define REGS_PER_LINE	4
#define LAST_VOLATILE	13
#define REG		"%08lx"
#define REGS_PER_LINE	8
#define LAST_VOLATILE	12
void show_regs(struct pt_regs * regs)
void exit_thread(void)
void flush_thread(void)
void
release_thread(struct task_struct *t)
void prepare_to_copy(struct task_struct *tsk)
extern unsigned long dscr_default;
int copy_thread(unsigned long clone_flags, unsigned long usp,
unsigned long unused, struct task_struct *p,
struct pt_regs *regs)
void start_thread(struct pt_regs *regs, unsigned long start, unsigned long sp)
#define PR_FP_ALL_EXCEPT (PR_FP_EXC_DIV | PR_FP_EXC_OVF | PR_FP_EXC_UND \
| PR_FP_EXC_RES | PR_FP_EXC_INV)
int set_fpexc_mode(struct task_struct *tsk, unsigned int val)
int get_fpexc_mode(struct task_struct *tsk, unsigned long adr)
int set_endian(struct task_struct *tsk, unsigned int val)
int get_endian(struct task_struct *tsk, unsigned long adr)
int set_unalign_ctl(struct task_struct *tsk, unsigned int val)
int get_unalign_ctl(struct task_struct *tsk, unsigned long adr)
#define TRUNC_PTR(x)	((typeof(x))(((unsigned long)(x)) & 0xffffffff))
int sys_clone(unsigned long clone_flags, unsigned long usp,
int __user *parent_tidp, void __user *child_threadptr,
int __user *child_tidp, int p6,
struct pt_regs *regs)
int sys_fork(unsigned long p1, unsigned long p2, unsigned long p3,
unsigned long p4, unsigned long p5, unsigned long p6,
struct pt_regs *regs)
int sys_vfork(unsigned long p1, unsigned long p2, unsigned long p3,
unsigned long p4, unsigned long p5, unsigned long p6,
struct pt_regs *regs)
int sys_execve(unsigned long a0, unsigned long a1, unsigned long a2,
unsigned long a3, unsigned long a4, unsigned long a5,
struct pt_regs *regs)
static inline int valid_irq_stack(unsigned long sp, struct task_struct *p,
unsigned long nbytes)
int validate_sp(unsigned long sp, struct task_struct *p,
unsigned long nbytes)
EXPORT_SYMBOL(validate_sp);
unsigned long get_wchan(struct task_struct *p)
static int kstack_depth_to_print = CONFIG_PRINT_STACK_DEPTH;
void show_stack(struct task_struct *tsk, unsigned long *stack)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void ppc64_runlatch_on(void)
void __ppc64_runlatch_off(void)
#if THREAD_SHIFT < PAGE_SHIFT
static struct kmem_cache *thread_info_cache;
struct thread_info *alloc_thread_info_node(struct task_struct *tsk, int node)
void free_thread_info(struct thread_info *ti)
void thread_info_cache_init(void)
unsigned long arch_align_stack(unsigned long sp)
static inline unsigned long brk_rnd(void)
unsigned long arch_randomize_brk(struct mm_struct *mm)
unsigned long randomize_et_dyn(unsigned long base)
