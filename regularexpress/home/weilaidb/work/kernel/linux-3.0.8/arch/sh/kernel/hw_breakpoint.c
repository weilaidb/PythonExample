static DEFINE_PER_CPU(struct perf_event *, bp_per_reg[HBP_NUM]);
static struct sh_ubc ubc_dummy = ;
static struct sh_ubc *sh_ubc __read_mostly = &ubc_dummy;
int arch_install_hw_breakpoint(struct perf_event *bp)
void arch_uninstall_hw_breakpoint(struct perf_event *bp)
static int get_hbp_len(u16 hbp_len)
int arch_check_bp_in_kernelspace(struct perf_event *bp)
int arch_bp_generic_fields(int sh_len, int sh_type,
int *gen_len, int *gen_type)
static int arch_build_bp_info(struct perf_event *bp)
int arch_validate_hwbkpt_settings(struct perf_event *bp)
void flush_ptrace_hw_breakpoint(struct task_struct *tsk)
static int __kprobes hw_breakpoint_handler(struct die_args *args)
BUILD_TRAP_HANDLER(breakpoint)
int __kprobes hw_breakpoint_exceptions_notify(struct notifier_block *unused,
unsigned long val, void *data)
void hw_breakpoint_pmu_read(struct perf_event *bp)
int register_sh_ubc(struct sh_ubc *ubc)
