#define __ASM_SH_HW_BREAKPOINT_H
#define __ARCH_HW_BREAKPOINT_H
struct arch_hw_breakpoint ;
enum ;
struct sh_ubc ;
struct perf_event;
struct task_struct;
struct pmu;
#define HBP_NUM		2
static inline int hw_breakpoint_slots(int type)
extern int arch_check_bp_in_kernelspace(struct perf_event *bp);
extern int arch_validate_hwbkpt_settings(struct perf_event *bp);
extern int hw_breakpoint_exceptions_notify(struct notifier_block *unused,
unsigned long val, void *data);
int arch_install_hw_breakpoint(struct perf_event *bp);
void arch_uninstall_hw_breakpoint(struct perf_event *bp);
void hw_breakpoint_pmu_read(struct perf_event *bp);
extern void arch_fill_perf_breakpoint(struct perf_event *bp);
extern int register_sh_ubc(struct sh_ubc *);
extern struct pmu perf_ops_bp;
