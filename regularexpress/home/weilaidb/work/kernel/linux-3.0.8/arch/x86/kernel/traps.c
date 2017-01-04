#if defined(CONFIG_EDAC)
asmlinkage int system_call(void);
char ignore_fpu_irq;
gate_desc idt_table[NR_VECTORS] __page_aligned_data = ;
DECLARE_BITMAP(used_vectors, NR_VECTORS);
EXPORT_SYMBOL_GPL(used_vectors);
static int ignore_nmis;
int unknown_nmi_panic;
static DEFINE_RAW_SPINLOCK(nmi_reason_lock);
static inline void conditional_sti(struct pt_regs *regs)
static inline void preempt_conditional_sti(struct pt_regs *regs)
static inline void conditional_cli(struct pt_regs *regs)
static inline void preempt_conditional_cli(struct pt_regs *regs)
static void __kprobes
do_trap(int trapnr, int signr, char *str, struct pt_regs *regs,
long error_code, siginfo_t *info)
#define DO_ERROR(trapnr, signr, str, name)				\
dotraplinkage void do_##name(struct pt_regs *regs, long error_code)	\
#define DO_ERROR_INFO(trapnr, signr, str, name, sicode, siaddr)		\
dotraplinkage void do_##name(struct pt_regs *regs, long error_code)	\
DO_ERROR_INFO(0, SIGFPE, "divide error", divide_error, FPE_INTDIV, regs->ip)
DO_ERROR(4, SIGSEGV, "overflow", overflow)
DO_ERROR(5, SIGSEGV, "bounds", bounds)
DO_ERROR_INFO(6, SIGILL, "invalid opcode", invalid_op, ILL_ILLOPN, regs->ip)
DO_ERROR(9, SIGFPE, "coprocessor segment overrun", coprocessor_segment_overrun)
DO_ERROR(10, SIGSEGV, "invalid TSS", invalid_TSS)
DO_ERROR(11, SIGBUS, "segment not present", segment_not_present)
DO_ERROR(12, SIGBUS, "stack segment", stack_segment)
DO_ERROR_INFO(17, SIGBUS, "alignment check", alignment_check, BUS_ADRALN, 0)
dotraplinkage void do_stack_segment(struct pt_regs *regs, long error_code)
dotraplinkage void do_double_fault(struct pt_regs *regs, long error_code)
dotraplinkage void __kprobes
do_general_protection(struct pt_regs *regs, long error_code)
static int __init setup_unknown_nmi_panic(char *str)
__setup("unknown_nmi_panic", setup_unknown_nmi_panic);
static notrace __kprobes void
pci_serr_error(unsigned char reason, struct pt_regs *regs)
static notrace __kprobes void
io_check_error(unsigned char reason, struct pt_regs *regs)
static notrace __kprobes void
unknown_nmi_error(unsigned char reason, struct pt_regs *regs)
static notrace __kprobes void default_do_nmi(struct pt_regs *regs)
dotraplinkage notrace __kprobes void
do_nmi(struct pt_regs *regs, long error_code)
void stop_nmi(void)
void restart_nmi(void)
dotraplinkage void __kprobes do_int3(struct pt_regs *regs, long error_code)
asmlinkage __kprobes struct pt_regs *sync_regs(struct pt_regs *eregs)
dotraplinkage void __kprobes do_debug(struct pt_regs *regs, long error_code)
void math_error(struct pt_regs *regs, int error_code, int trapnr)
dotraplinkage void do_coprocessor_error(struct pt_regs *regs, long error_code)
dotraplinkage void
do_simd_coprocessor_error(struct pt_regs *regs, long error_code)
dotraplinkage void
do_spurious_interrupt_bug(struct pt_regs *regs, long error_code)
asmlinkage void __attribute__((weak)) smp_thermal_interrupt(void)
asmlinkage void __attribute__((weak)) smp_threshold_interrupt(void)
void __math_state_restore(void)
asmlinkage void math_state_restore(void)
EXPORT_SYMBOL_GPL(math_state_restore);
dotraplinkage void __kprobes
do_device_not_available(struct pt_regs *regs, long error_code)
dotraplinkage void do_iret_error(struct pt_regs *regs, long error_code)
void __init early_trap_init(void)
void __init trap_init(void)
