#define MMCR0_PMAO	0
static void dummy_perf(struct pt_regs *regs)
static DEFINE_RAW_SPINLOCK(pmc_owner_lock);
static void *pmc_owner_caller;
perf_irq_t perf_irq = dummy_perf;
int reserve_pmc_hardware(perf_irq_t new_perf_irq)
EXPORT_SYMBOL_GPL(reserve_pmc_hardware);
void release_pmc_hardware(void)
EXPORT_SYMBOL_GPL(release_pmc_hardware);
void power4_enable_pmcs(void)
