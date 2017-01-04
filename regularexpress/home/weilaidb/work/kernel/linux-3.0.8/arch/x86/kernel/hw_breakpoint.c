DEFINE_PER_CPU(unsigned long, cpu_dr7);
EXPORT_PER_CPU_SYMBOL(cpu_dr7);
static DEFINE_PER_CPU(unsigned long, cpu_debugreg[HBP_NUM]);
static DEFINE_PER_CPU(struct perf_event *, bp_per_reg[HBP_NUM]);
static inline unsigned long
__encode_dr7(int drnum, unsigned int len, unsigned int type)
unsigned long encode_dr7(int drnum, unsigned int len, unsigned int type)
int decode_dr7(unsigned long dr7, int bpnum, unsigned *len, unsigned *type)
int arch_install_hw_breakpoint(struct perf_event *bp)
void arch_uninstall_hw_breakpoint(struct perf_event *bp)
static int get_hbp_len(u8 hbp_len)
int arch_check_bp_in_kernelspace(struct perf_event *bp)
int arch_bp_generic_fields(int x86_len, int x86_type,
int *gen_len, int *gen_type)
static int arch_build_bp_info(struct perf_event *bp)
int arch_validate_hwbkpt_settings(struct perf_event *bp)
void aout_dump_debugregs(struct user *dump)
EXPORT_SYMBOL_GPL(aout_dump_debugregs);
void flush_ptrace_hw_breakpoint(struct task_struct *tsk)
void hw_breakpoint_restore(void)
EXPORT_SYMBOL_GPL(hw_breakpoint_restore);
static int __kprobes hw_breakpoint_handler(struct die_args *args)
int __kprobes hw_breakpoint_exceptions_notify(
struct notifier_block *unused, unsigned long val, void *data)
void hw_breakpoint_pmu_read(struct perf_event *bp)
