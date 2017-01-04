#define MAX_HWEVENTS		8
#define MAX_EVENT_ALTERNATIVES	8
#define MAX_LIMITED_HWCOUNTERS	2
struct power_pmu ;
#define PPMU_LIMITED_PMC5_6	1
#define PPMU_ALT_SIPR		2
#define PPMU_LIMITED_PMC_OK	1
#define PPMU_LIMITED_PMC_REQD	2
#define PPMU_ONLY_COUNT_RUN	4
extern int register_power_pmu(struct power_pmu *);
struct pt_regs;
extern unsigned long perf_misc_flags(struct pt_regs *regs);
extern unsigned long perf_instruction_pointer(struct pt_regs *regs);
#define PERF_EVENT_INDEX_OFFSET	1
#define perf_misc_flags(regs)	perf_misc_flags(regs)
