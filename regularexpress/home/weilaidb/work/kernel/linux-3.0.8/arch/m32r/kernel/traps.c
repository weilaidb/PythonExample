asmlinkage void alignment_check(void);
asmlinkage void ei_handler(void);
asmlinkage void rie_handler(void);
asmlinkage void debug_trap(void);
asmlinkage void cache_flushing_handler(void);
asmlinkage void ill_trap(void);
extern void smp_reschedule_interrupt(void);
extern void smp_invalidate_interrupt(void);
extern void smp_call_function_interrupt(void);
extern void smp_ipi_timer_interrupt(void);
extern void smp_flush_cache_all_interrupt(void);
extern void smp_call_function_single_interrupt(void);
asm (
"	.section .eit_vector4,\"ax\"	\n"
"	.global _AP_RE			\n"
"	.global startup_AP		\n"
"_AP_RE:				\n"
"	.fill 32, 4, 0			\n"
"_AP_EI: bra	startup_AP		\n"
"	.previous			\n"
);
extern unsigned long	eit_vector[];
#define BRA_INSN(func, entry)	\
((unsigned long)func - (unsigned long)eit_vector - entry*4)/4 \
+ 0xff000000UL
static void set_eit_vector_entries(void)
void __init trap_init(void)
static int kstack_depth_to_print = 24;
static void show_trace(struct task_struct *task, unsigned long *stack)
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static void show_registers(struct pt_regs *regs)
static DEFINE_SPINLOCK(die_lock);
void die(const char * str, struct pt_regs * regs, long err)
static __inline__ void die_if_kernel(const char * str,
struct pt_regs * regs, long err)
static __inline__ void do_trap(int trapnr, int signr, const char * str,
struct pt_regs * regs, long error_code, siginfo_t *info)
#define DO_ERROR(trapnr, signr, str, name) \
asmlinkage void do_##name(struct pt_regs * regs, long error_code) \
#define DO_ERROR_INFO(trapnr, signr, str, name, sicode, siaddr) \
asmlinkage void do_##name(struct pt_regs * regs, long error_code) \
DO_ERROR( 1, SIGTRAP, "debug trap", debug_trap)
DO_ERROR_INFO(0x20, SIGILL,  "reserved instruction ", rie_handler, ILL_ILLOPC, regs->bpc)
DO_ERROR_INFO(0x100, SIGILL,  "privileged instruction", pie_handler, ILL_PRVOPC, regs->bpc)
DO_ERROR_INFO(-1, SIGILL,  "illegal trap", ill_trap, ILL_ILLTRP, regs->bpc)
extern int handle_unaligned_access(unsigned long, struct pt_regs *);
asmlinkage void do_alignment_check(struct pt_regs *regs, long error_code)
