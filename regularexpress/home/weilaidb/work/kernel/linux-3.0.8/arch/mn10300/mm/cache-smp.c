DEFINE_SPINLOCK(smp_cache_lock);
static unsigned long smp_cache_mask;
static unsigned long smp_cache_start;
static unsigned long smp_cache_end;
static cpumask_t smp_cache_ipi_map;
void smp_cache_interrupt(void)
void smp_cache_call(unsigned long opr_mask,
unsigned long start, unsigned long end)
