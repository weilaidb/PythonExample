pgm_check_handler_t *pgm_check_table[128];
int show_unhandled_signals;
extern pgm_check_handler_t do_protection_exception;
extern pgm_check_handler_t do_dat_exception;
extern pgm_check_handler_t do_asce_exception;
#define stack_pointer ()
#define LONG "%08lx "
#define FOURLONG "%08lx %08lx %08lx %08lx\n"
static int kstack_depth_to_print = 12;
#define LONG "%016lx "
#define FOURLONG "%016lx %016lx %016lx %016lx\n"
static int kstack_depth_to_print = 20;
static unsigned long
__show_trace(unsigned long sp, unsigned long low, unsigned long high)
static void show_trace(struct task_struct *task, unsigned long *stack)
void show_stack(struct task_struct *task, unsigned long *sp)
static void show_last_breaking_event(struct pt_regs *regs)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static inline int mask_bits(struct pt_regs *regs, unsigned long bits)
void show_registers(struct pt_regs *regs)
void show_regs(struct pt_regs *regs)
static DEFINE_SPINLOCK(die_lock);
void die(const char * str, struct pt_regs * regs, long err)
static void inline report_user_fault(struct pt_regs *regs, long int_code,
int signr)
int is_valid_bugaddr(unsigned long addr)
static inline void __kprobes do_trap(long pgm_int_code, int signr, char *str,
struct pt_regs *regs, siginfo_t *info)
static inline void __user *get_psw_address(struct pt_regs *regs,
long pgm_int_code)
void __kprobes do_per_trap(struct pt_regs *regs)
static void default_trap_handler(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
#define DO_ERROR_INFO(name, signr, sicode, str) \
static void name(struct pt_regs *regs, long pgm_int_code, \
unsigned long trans_exc_code) \
DO_ERROR_INFO(addressing_exception, SIGILL, ILL_ILLADR,
"addressing exception")
DO_ERROR_INFO(execute_exception, SIGILL, ILL_ILLOPN,
"execute exception")
DO_ERROR_INFO(divide_exception, SIGFPE, FPE_INTDIV,
"fixpoint divide exception")
DO_ERROR_INFO(overflow_exception, SIGFPE, FPE_INTOVF,
"fixpoint overflow exception")
DO_ERROR_INFO(hfp_overflow_exception, SIGFPE, FPE_FLTOVF,
"HFP overflow exception")
DO_ERROR_INFO(hfp_underflow_exception, SIGFPE, FPE_FLTUND,
"HFP underflow exception")
DO_ERROR_INFO(hfp_significance_exception, SIGFPE, FPE_FLTRES,
"HFP significance exception")
DO_ERROR_INFO(hfp_divide_exception, SIGFPE, FPE_FLTDIV,
"HFP divide exception")
DO_ERROR_INFO(hfp_sqrt_exception, SIGFPE, FPE_FLTINV,
"HFP square root exception")
DO_ERROR_INFO(operand_exception, SIGILL, ILL_ILLOPN,
"operand exception")
DO_ERROR_INFO(privileged_op, SIGILL, ILL_PRVOPC,
"privileged operation")
DO_ERROR_INFO(special_op_exception, SIGILL, ILL_ILLOPN,
"special operation exception")
DO_ERROR_INFO(translation_exception, SIGILL, ILL_ILLOPN,
"translation exception")
static inline void do_fp_trap(struct pt_regs *regs, void __user *location,
int fpc, long pgm_int_code)
static void __kprobes illegal_op(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
asmlinkage void specification_exception(struct pt_regs *regs,
long pgm_int_code,
unsigned long trans_exc_code)
DO_ERROR_INFO(specification_exception, SIGILL, ILL_ILLOPN,
"specification exception");
static void data_exception(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
static void space_switch_exception(struct pt_regs *regs, long pgm_int_code,
unsigned long trans_exc_code)
asmlinkage void __kprobes kernel_stack_overflow(struct pt_regs * regs)
void __init trap_init(void)
