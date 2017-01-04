static const char *handler[]= ;
void *vectors_page;
unsigned int user_debug;
static int __init user_debug_setup(char *str)
__setup("user_debug=", user_debug_setup);
static void dump_mem(const char *, const char *, unsigned long, unsigned long);
void dump_backtrace_entry(unsigned long where, unsigned long from, unsigned long frame)
static int verify_stack(unsigned long sp)
static void dump_mem(const char *lvl, const char *str, unsigned long bottom,
unsigned long top)
static void dump_instr(const char *lvl, struct pt_regs *regs)
static inline void dump_backtrace(struct pt_regs *regs, struct task_struct *tsk)
static void dump_backtrace(struct pt_regs *regs, struct task_struct *tsk)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void show_stack(struct task_struct *tsk, unsigned long *sp)
#define S_PREEMPT " PREEMPT"
#define S_PREEMPT ""
#define S_SMP " SMP"
#define S_SMP ""
static int __die(const char *str, int err, struct thread_info *thread, struct pt_regs *regs)
static DEFINE_SPINLOCK(die_lock);
void die(const char *str, struct pt_regs *regs, int err)
void arm_notify_die(const char *str, struct pt_regs *regs,
struct siginfo *info, unsigned long err, unsigned long trap)
static LIST_HEAD(undef_hook);
static DEFINE_SPINLOCK(undef_lock);
void register_undef_hook(struct undef_hook *hook)
void unregister_undef_hook(struct undef_hook *hook)
static int call_undef_hook(struct pt_regs *regs, unsigned int instr)
asmlinkage void __exception do_undefinstr(struct pt_regs *regs)
asmlinkage void do_unexp_fiq (struct pt_regs *regs)
asmlinkage void bad_mode(struct pt_regs *regs, int reason)
static int bad_syscall(int n, struct pt_regs *regs)
static inline void
do_cache_op(unsigned long start, unsigned long end, int flags)
#define NR(x) ((__ARM_NR_##x) - __ARM_NR_BASE)
asmlinkage int arm_syscall(int no, struct pt_regs *regs)
static int get_tp_trap(struct pt_regs *regs, unsigned int instr)
static struct undef_hook arm_mrc_hook = ;
static int __init arm_mrc_hook_init(void)
late_initcall(arm_mrc_hook_init);
void __bad_xchg(volatile void *ptr, int size)
EXPORT_SYMBOL(__bad_xchg);
asmlinkage void
baddataabort(int code, unsigned long instr, struct pt_regs *regs)
void __attribute__((noreturn)) __bug(const char *file, int line)
EXPORT_SYMBOL(__bug);
void __readwrite_bug(const char *fn)
EXPORT_SYMBOL(__readwrite_bug);
void __pte_error(const char *file, int line, pte_t pte)
void __pmd_error(const char *file, int line, pmd_t pmd)
void __pgd_error(const char *file, int line, pgd_t pgd)
asmlinkage void __div0(void)
EXPORT_SYMBOL(__div0);
void abort(void)
EXPORT_SYMBOL(abort);
void __init trap_init(void)
static void __init kuser_get_tls_init(unsigned long vectors)
void __init early_trap_init(void)
