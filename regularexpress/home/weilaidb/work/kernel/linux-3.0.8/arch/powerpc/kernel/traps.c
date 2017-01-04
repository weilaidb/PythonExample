#if defined(CONFIG_DEBUGGER) || defined(CONFIG_KEXEC)
int (*__debugger)(struct pt_regs *regs) __read_mostly;
int (*__debugger_ipi)(struct pt_regs *regs) __read_mostly;
int (*__debugger_bpt)(struct pt_regs *regs) __read_mostly;
int (*__debugger_sstep)(struct pt_regs *regs) __read_mostly;
int (*__debugger_iabr_match)(struct pt_regs *regs) __read_mostly;
int (*__debugger_dabr_match)(struct pt_regs *regs) __read_mostly;
int (*__debugger_fault_handler)(struct pt_regs *regs) __read_mostly;
EXPORT_SYMBOL(__debugger);
EXPORT_SYMBOL(__debugger_ipi);
EXPORT_SYMBOL(__debugger_bpt);
EXPORT_SYMBOL(__debugger_sstep);
EXPORT_SYMBOL(__debugger_iabr_match);
EXPORT_SYMBOL(__debugger_dabr_match);
EXPORT_SYMBOL(__debugger_fault_handler);
static void pmac_backlight_unblank(void)
static inline void pmac_backlight_unblank(void)
int die(const char *str, struct pt_regs *regs, long err)
void user_single_step_siginfo(struct task_struct *tsk,
struct pt_regs *regs, siginfo_t *info)
void _exception(int signr, struct pt_regs *regs, int code, unsigned long addr)
void system_reset_exception(struct pt_regs *regs)
static inline int check_io_access(struct pt_regs *regs)
#define get_reason(regs)	((regs)->dsisr)
#define get_mc_reason(regs)	((regs)->dsisr)
#define get_mc_reason(regs)	(mfspr(SPRN_MCSR))
#define REASON_FP		ESR_FP
#define REASON_ILLEGAL		(ESR_PIL | ESR_PUO)
#define REASON_PRIVILEGED	ESR_PPR
#define REASON_TRAP		ESR_PTR
#define single_stepping(regs)	(current->thread.dbcr0 & DBCR0_IC)
#define clear_single_step(regs)	(current->thread.dbcr0 &= ~DBCR0_IC)
#define get_reason(regs)	((regs)->msr)
#define get_mc_reason(regs)	((regs)->msr)
#define REASON_FP		0x100000
#define REASON_ILLEGAL		0x80000
#define REASON_PRIVILEGED	0x40000
#define REASON_TRAP		0x20000
#define single_stepping(regs)	((regs)->msr & MSR_SE)
#define clear_single_step(regs)	((regs)->msr &= ~MSR_SE)
#if defined(CONFIG_4xx)
int machine_check_4xx(struct pt_regs *regs)
int machine_check_440A(struct pt_regs *regs)
int machine_check_47x(struct pt_regs *regs)
#elif defined(CONFIG_E500)
int machine_check_e500mc(struct pt_regs *regs)
int machine_check_e500(struct pt_regs *regs)
int machine_check_generic(struct pt_regs *regs)
#elif defined(CONFIG_E200)
int machine_check_e200(struct pt_regs *regs)
int machine_check_generic(struct pt_regs *regs)
void machine_check_exception(struct pt_regs *regs)
void SMIException(struct pt_regs *regs)
void unknown_exception(struct pt_regs *regs)
void instruction_breakpoint_exception(struct pt_regs *regs)
void RunModeException(struct pt_regs *regs)
void __kprobes single_step_exception(struct pt_regs *regs)
static void emulate_single_step(struct pt_regs *regs)
static inline int __parse_fpscr(unsigned long fpscr)
static void parse_fpe(struct pt_regs *regs)
static int emulate_string_inst(struct pt_regs *regs, u32 instword)
static int emulate_popcntb_inst(struct pt_regs *regs, u32 instword)
static int emulate_isel(struct pt_regs *regs, u32 instword)
static int emulate_instruction(struct pt_regs *regs)
int is_valid_bugaddr(unsigned long addr)
void __kprobes program_check_exception(struct pt_regs *regs)
void alignment_exception(struct pt_regs *regs)
void StackOverflow(struct pt_regs *regs)
void nonrecoverable_exception(struct pt_regs *regs)
void trace_syscall(struct pt_regs *regs)
void kernel_fp_unavailable_exception(struct pt_regs *regs)
void altivec_unavailable_exception(struct pt_regs *regs)
void vsx_unavailable_exception(struct pt_regs *regs)
void performance_monitor_exception(struct pt_regs *regs)
void SoftwareEmulation(struct pt_regs *regs)
static void handle_debug(struct pt_regs *regs, unsigned long debug_status)
void __kprobes DebugException(struct pt_regs *regs, unsigned long debug_status)
#if !defined(CONFIG_TAU_INT)
void TAUException(struct pt_regs *regs)
void altivec_assist_exception(struct pt_regs *regs)
void vsx_assist_exception(struct pt_regs *regs)
void CacheLockingException(struct pt_regs *regs, unsigned long address,
unsigned long error_code)
void SPEFloatingPointException(struct pt_regs *regs)
void SPEFloatingPointRoundException(struct pt_regs *regs)
void unrecoverable_exception(struct pt_regs *regs)
void __attribute__ ((weak)) WatchdogHandler(struct pt_regs *regs)
void WatchdogException(struct pt_regs *regs)
void kernel_bad_stack(struct pt_regs *regs)
void __init trap_init(void)
#define WARN_EMULATED_SETUP(type)	.type =
struct ppc_emulated ppc_emulated = ;
u32 ppc_warn_emulated;
void ppc_warn_emulated_print(const char *type)
static int __init ppc_warn_emulated_init(void)
device_initcall(ppc_warn_emulated_init);
