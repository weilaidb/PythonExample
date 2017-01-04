#define _PPC_BOOK3S_64_HW_BREAKPOINT_H
struct arch_hw_breakpoint ;
struct perf_event;
struct pmu;
struct perf_sample_data;
#define HW_BREAKPOINT_ALIGN 0x7
#define HW_BREAKPOINT_LEN 0x8
extern int hw_breakpoint_slots(int type);
extern int arch_bp_generic_fields(int type, int *gen_bp_type);
extern int arch_check_bp_in_kernelspace(struct perf_event *bp);
extern int arch_validate_hwbkpt_settings(struct perf_event *bp);
extern int hw_breakpoint_exceptions_notify(struct notifier_block *unused,
unsigned long val, void *data);
int arch_install_hw_breakpoint(struct perf_event *bp);
void arch_uninstall_hw_breakpoint(struct perf_event *bp);
void hw_breakpoint_pmu_read(struct perf_event *bp);
extern void flush_ptrace_hw_breakpoint(struct task_struct *tsk);
extern struct pmu perf_ops_bp;
extern void ptrace_triggered(struct perf_event *bp, int nmi,
struct perf_sample_data *data, struct pt_regs *regs);
static inline void hw_breakpoint_disable(void)
extern void thread_change_pc(struct task_struct *tsk, struct pt_regs *regs);
static inline void hw_breakpoint_disable(void)
static inline void thread_change_pc(struct task_struct *tsk,
struct pt_regs *regs)
