#define __ASM_SH_PERF_EVENT_H
struct hw_perf_event;
#define MAX_HWEVENTS	2
struct sh_pmu ;
extern int register_sh_pmu(struct sh_pmu *);
extern int reserve_pmc_hardware(void);
extern void release_pmc_hardware(void);
