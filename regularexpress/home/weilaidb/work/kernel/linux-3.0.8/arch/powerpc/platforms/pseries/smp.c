static cpumask_var_t of_spin_mask;
int smp_query_cpu_stopped(unsigned int pcpu)
static inline int __devinit smp_startup_cpu(unsigned int lcpu)
static void __devinit smp_xics_setup_cpu(int cpu)
static int __devinit smp_pSeries_kick_cpu(int nr)
static int smp_pSeries_cpu_bootable(unsigned int nr)
static struct smp_ops_t pSeries_mpic_smp_ops = ;
static struct smp_ops_t pSeries_xics_smp_ops = ;
static void __init smp_init_pseries(void)
void __init smp_init_pseries_mpic(void)
void __init smp_init_pseries_xics(void)
