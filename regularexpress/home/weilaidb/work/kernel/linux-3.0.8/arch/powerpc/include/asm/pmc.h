#define _POWERPC_PMC_H
typedef void (*perf_irq_t)(struct pt_regs *);
extern perf_irq_t perf_irq;
int reserve_pmc_hardware(perf_irq_t new_perf_irq);
void release_pmc_hardware(void);
void ppc_enable_pmcs(void);
static inline void ppc_set_pmu_inuse(int inuse)
extern void power4_enable_pmcs(void);
static inline void ppc_set_pmu_inuse(int inuse)
