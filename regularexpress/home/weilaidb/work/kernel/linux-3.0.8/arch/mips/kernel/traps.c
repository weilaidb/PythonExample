extern void check_wait(void);
extern asmlinkage void r4k_wait(void);
extern asmlinkage void rollback_handle_int(void);
extern asmlinkage void handle_int(void);
extern asmlinkage void handle_tlbm(void);
extern asmlinkage void handle_tlbl(void);
extern asmlinkage void handle_tlbs(void);
extern asmlinkage void handle_adel(void);
extern asmlinkage void handle_ades(void);
extern asmlinkage void handle_ibe(void);
extern asmlinkage void handle_dbe(void);
extern asmlinkage void handle_sys(void);
extern asmlinkage void handle_bp(void);
extern asmlinkage void handle_ri(void);
extern asmlinkage void handle_ri_rdhwr_vivt(void);
extern asmlinkage void handle_ri_rdhwr(void);
extern asmlinkage void handle_cpu(void);
extern asmlinkage void handle_ov(void);
extern asmlinkage void handle_tr(void);
extern asmlinkage void handle_fpe(void);
extern asmlinkage void handle_mdmx(void);
extern asmlinkage void handle_watch(void);
extern asmlinkage void handle_mt(void);
extern asmlinkage void handle_dsp(void);
extern asmlinkage void handle_mcheck(void);
extern asmlinkage void handle_reserved(void);
extern int fpu_emulator_cop1Handler(struct pt_regs *xcp,
struct mips_fpu_struct *ctx, int has_fpu,
void *__user *fault_addr);
void (*board_be_init)(void);
int (*board_be_handler)(struct pt_regs *regs, int is_fixup);
void (*board_nmi_handler_setup)(void);
void (*board_ejtag_handler_setup)(void);
void (*board_bind_eic_interrupt)(int irq, int regset);
static void show_raw_backtrace(unsigned long reg29)
int raw_show_trace;
static int __init set_raw_show_trace(char *str)
__setup("raw_show_trace", set_raw_show_trace);
static void show_backtrace(struct task_struct *task, const struct pt_regs *regs)
static void show_stacktrace(struct task_struct *task,
const struct pt_regs *regs)
void show_stack(struct task_struct *task, unsigned long *sp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static void show_code(unsigned int __user *pc)
static void __show_regs(const struct pt_regs *regs)
void show_regs(struct pt_regs *regs)
void show_registers(struct pt_regs *regs)
static int regs_to_trapnr(struct pt_regs *regs)
static DEFINE_SPINLOCK(die_lock);
void __noreturn die(const char *str, struct pt_regs *regs)
extern struct exception_table_entry __start___dbe_table[];
extern struct exception_table_entry __stop___dbe_table[];
__asm__(
"	.section	__dbe_table, \"a\"\n"
"	.previous			\n");
static const struct exception_table_entry *search_dbe_tables(unsigned long addr)
asmlinkage void do_be(struct pt_regs *regs)
#define OPCODE 0xfc000000
#define BASE   0x03e00000
#define RT     0x001f0000
#define OFFSET 0x0000ffff
#define LL     0xc0000000
#define SC     0xe0000000
#define SPEC0  0x00000000
#define SPEC3  0x7c000000
#define RD     0x0000f800
#define FUNC   0x0000003f
#define SYNC   0x0000000f
#define RDHWR  0x0000003b
unsigned int ll_bit;
struct task_struct *ll_task;
static inline int simulate_ll(struct pt_regs *regs, unsigned int opcode)
static inline int simulate_sc(struct pt_regs *regs, unsigned int opcode)
static int simulate_llsc(struct pt_regs *regs, unsigned int opcode)
static int simulate_rdhwr(struct pt_regs *regs, unsigned int opcode)
static int simulate_sync(struct pt_regs *regs, unsigned int opcode)
asmlinkage void do_ov(struct pt_regs *regs)
static int process_fpemu_return(int sig, void __user *fault_addr)
asmlinkage void do_fpe(struct pt_regs *regs, unsigned long fcr31)
static void do_trap_or_bp(struct pt_regs *regs, unsigned int code,
const char *str)
asmlinkage void do_bp(struct pt_regs *regs)
asmlinkage void do_tr(struct pt_regs *regs)
asmlinkage void do_ri(struct pt_regs *regs)
static void mt_ase_fp_affinity(void)
static RAW_NOTIFIER_HEAD(cu2_chain);
int __ref register_cu2_notifier(struct notifier_block *nb)
int cu2_notifier_call_chain(unsigned long val, void *v)
static int default_cu2_call(struct notifier_block *nfb, unsigned long action,
void *data)
asmlinkage void do_cpu(struct pt_regs *regs)
asmlinkage void do_mdmx(struct pt_regs *regs)
asmlinkage void do_watch(struct pt_regs *regs)
asmlinkage void do_mcheck(struct pt_regs *regs)
asmlinkage void do_mt(struct pt_regs *regs)
asmlinkage void do_dsp(struct pt_regs *regs)
asmlinkage void do_reserved(struct pt_regs *regs)
static int __initdata l1parity = 1;
static int __init nol1parity(char *s)
__setup("nol1par", nol1parity);
static int __initdata l2parity = 1;
static int __init nol2parity(char *s)
__setup("nol2par", nol2parity);
static inline void parity_protection_init(void)
asmlinkage void cache_parity_error(void)
void ejtag_exception_handler(struct pt_regs *regs)
NORET_TYPE void ATTRIB_NORET nmi_exception_handler(struct pt_regs *regs)
#define VECTORSPACING 0x100
unsigned long ebase;
unsigned long exception_handlers[32];
unsigned long vi_handlers[64];
void __init *set_except_vector(int n, void *addr)
static asmlinkage void do_default_vi(void)
static void *set_vi_srs_handler(int n, vi_handler_t addr, int srs)
void *set_vi_handler(int n, vi_handler_t addr)
extern void cpu_cache_init(void);
extern void tlb_init(void);
extern void flush_tlb_handlers(void);
int cp0_compare_irq;
int cp0_compare_irq_shift;
int cp0_perfcount_irq;
EXPORT_SYMBOL_GPL(cp0_perfcount_irq);
static int __cpuinitdata noulri;
static int __init ulri_disable(char *s)
__setup("noulri", ulri_disable);
void __cpuinit per_cpu_trap_init(void)
void __init set_handler(unsigned long offset, void *addr, unsigned long size)
static char panic_null_cerr[] __cpuinitdata =
"Trying to set NULL cache error exception handler";
void __cpuinit set_uncached_handler(unsigned long offset, void *addr,
unsigned long size)
static int __initdata rdhwr_noopt;
static int __init set_rdhwr_noopt(char *str)
__setup("rdhwr_noopt", set_rdhwr_noopt);
void __init trap_init(void)
