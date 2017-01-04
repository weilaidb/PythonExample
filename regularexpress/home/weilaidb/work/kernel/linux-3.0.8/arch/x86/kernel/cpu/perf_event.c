static unsigned long
copy_from_user_nmi(void *to, const void __user *from, unsigned long n)
struct event_constraint ;
struct amd_nb ;
struct intel_percore;
#define MAX_LBR_ENTRIES		16
struct cpu_hw_events ;
#define __EVENT_CONSTRAINT(c, n, m, w)
#define EVENT_CONSTRAINT(c, n, m)	\
__EVENT_CONSTRAINT(c, n, m, HWEIGHT(n))
#define INTEL_EVENT_CONSTRAINT(c, n)	\
EVENT_CONSTRAINT(c, n, ARCH_PERFMON_EVENTSEL_EVENT)
#define FIXED_EVENT_CONSTRAINT(c, n)	\
EVENT_CONSTRAINT(c, (1ULL << (32+n)), X86_RAW_EVENT_MASK)
#define INTEL_UEVENT_CONSTRAINT(c, n)	\
EVENT_CONSTRAINT(c, n, INTEL_ARCH_EVENT_MASK)
#define EVENT_CONSTRAINT_END		\
EVENT_CONSTRAINT(0, 0, 0)
#define for_each_event_constraint(e, c)	\
for ((e) = (c); (e)->weight; (e)++)
struct extra_reg ;
#define EVENT_EXTRA_REG(e, ms, m, vm)
#define INTEL_EVENT_EXTRA_REG(event, msr, vm)	\
EVENT_EXTRA_REG(event, msr, ARCH_PERFMON_EVENTSEL_EVENT, vm)
#define EVENT_EXTRA_END EVENT_EXTRA_REG(0, 0, 0, 0)
union perf_capabilities ;
struct x86_pmu ;
static struct x86_pmu x86_pmu __read_mostly;
static DEFINE_PER_CPU(struct cpu_hw_events, cpu_hw_events) = ;
static int x86_perf_event_set_period(struct perf_event *event);
#define C(x) PERF_COUNT_HW_CACHE_##x
static u64 __read_mostly hw_cache_event_ids
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX];
static u64 __read_mostly hw_cache_extra_regs
[PERF_COUNT_HW_CACHE_MAX]
[PERF_COUNT_HW_CACHE_OP_MAX]
[PERF_COUNT_HW_CACHE_RESULT_MAX];
static u64
x86_perf_event_update(struct perf_event *event)
static inline int x86_pmu_addr_offset(int index)
static inline unsigned int x86_pmu_config_addr(int index)
static inline unsigned int x86_pmu_event_addr(int index)
static int x86_pmu_extra_regs(u64 config, struct perf_event *event)
static atomic_t active_events;
static DEFINE_MUTEX(pmc_reserve_mutex);
static bool reserve_pmc_hardware(void)
static void release_pmc_hardware(void)
static bool reserve_pmc_hardware(void)
static void release_pmc_hardware(void)
static bool check_hw_exists(void)
static void reserve_ds_buffers(void);
static void release_ds_buffers(void);
static void hw_perf_event_destroy(struct perf_event *event)
static inline int x86_pmu_initialized(void)
static inline int
set_ext_hw_attr(struct hw_perf_event *hwc, struct perf_event *event)
static int x86_setup_perfctr(struct perf_event *event)
static int x86_pmu_hw_config(struct perf_event *event)
static int __x86_pmu_event_init(struct perf_event *event)
static void x86_pmu_disable_all(void)
static void x86_pmu_disable(struct pmu *pmu)
static inline void __x86_pmu_enable_event(struct hw_perf_event *hwc,
u64 enable_mask)
static void x86_pmu_enable_all(int added)
static struct pmu pmu;
static inline int is_x86_event(struct perf_event *event)
static int x86_schedule_events(struct cpu_hw_events *cpuc, int n, int *assign)
static int collect_events(struct cpu_hw_events *cpuc, struct perf_event *leader, bool dogrp)
static inline void x86_assign_hw_event(struct perf_event *event,
struct cpu_hw_events *cpuc, int i)
static inline int match_prev_assignment(struct hw_perf_event *hwc,
struct cpu_hw_events *cpuc,
int i)
static void x86_pmu_start(struct perf_event *event, int flags);
static void x86_pmu_stop(struct perf_event *event, int flags);
static void x86_pmu_enable(struct pmu *pmu)
static inline void x86_pmu_disable_event(struct perf_event *event)
static DEFINE_PER_CPU(u64 [X86_PMC_IDX_MAX], pmc_prev_left);
static int
x86_perf_event_set_period(struct perf_event *event)
static void x86_pmu_enable_event(struct perf_event *event)
static int x86_pmu_add(struct perf_event *event, int flags)
static void x86_pmu_start(struct perf_event *event, int flags)
void perf_event_print_debug(void)
static void x86_pmu_stop(struct perf_event *event, int flags)
static void x86_pmu_del(struct perf_event *event, int flags)
static int x86_pmu_handle_irq(struct pt_regs *regs)
void perf_events_lapic_init(void)
struct pmu_nmi_state ;
static DEFINE_PER_CPU(struct pmu_nmi_state, pmu_nmi);
static int __kprobes
perf_event_nmi_handler(struct notifier_block *self,
unsigned long cmd, void *__args)
static __read_mostly struct notifier_block perf_event_nmi_notifier = ;
static struct event_constraint unconstrained;
static struct event_constraint emptyconstraint;
static struct event_constraint *
x86_get_event_constraints(struct cpu_hw_events *cpuc, struct perf_event *event)
static int __cpuinit
x86_pmu_notifier(struct notifier_block *self, unsigned long action, void *hcpu)
static void __init pmu_check_apic(void)
static int __init init_hw_perf_events(void)
early_initcall(init_hw_perf_events);
static inline void x86_pmu_read(struct perf_event *event)
static void x86_pmu_start_txn(struct pmu *pmu)
static void x86_pmu_cancel_txn(struct pmu *pmu)
static int x86_pmu_commit_txn(struct pmu *pmu)
static int validate_event(struct perf_event *event)
static int validate_group(struct perf_event *event)
static int x86_pmu_event_init(struct perf_event *event)
static struct pmu pmu = ;
static int backtrace_stack(void *data, char *name)
static void backtrace_address(void *data, unsigned long addr, int reliable)
static const struct stacktrace_ops backtrace_ops = ;
void
perf_callchain_kernel(struct perf_callchain_entry *entry, struct pt_regs *regs)
static inline int
perf_callchain_user32(struct pt_regs *regs, struct perf_callchain_entry *entry)
static inline int
perf_callchain_user32(struct pt_regs *regs, struct perf_callchain_entry *entry)
void
perf_callchain_user(struct perf_callchain_entry *entry, struct pt_regs *regs)
unsigned long perf_instruction_pointer(struct pt_regs *regs)
unsigned long perf_misc_flags(struct pt_regs *regs)
