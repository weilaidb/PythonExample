struct system_cpuinfo_parisc boot_cpu_data __read_mostly;
EXPORT_SYMBOL(boot_cpu_data);
DEFINE_PER_CPU(struct cpuinfo_parisc, cpu_data);
extern int update_cr16_clocksource(void);
static void __cpuinit
init_percpu_prof(unsigned long cpunum)
static int __cpuinit processor_probe(struct parisc_device *dev)
void __init collect_boot_cpu_data(void)
int __cpuinit init_per_cpu(int cpunum)
int
show_cpuinfo (struct seq_file *m, void *v)
static const struct parisc_device_id processor_tbl[] = ;
static struct parisc_driver cpu_driver = ;
void __init processor_init(void)
