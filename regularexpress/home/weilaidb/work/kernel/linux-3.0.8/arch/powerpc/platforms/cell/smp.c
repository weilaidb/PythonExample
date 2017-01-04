#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static cpumask_t of_spin_map;
static inline int __devinit smp_startup_cpu(unsigned int lcpu)
static int __init smp_iic_probe(void)
static void __devinit smp_cell_setup_cpu(int cpu)
static int __devinit smp_cell_kick_cpu(int nr)
static int smp_cell_cpu_bootable(unsigned int nr)
static struct smp_ops_t bpa_iic_smp_ops = ;
void __init smp_init_cell(void)
