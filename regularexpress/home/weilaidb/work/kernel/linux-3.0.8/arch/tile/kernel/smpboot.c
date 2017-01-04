static DEFINE_PER_CPU(int, cpu_state) = ;
unsigned long start_cpu_function_addr;
void __init smp_prepare_boot_cpu(void)
static void start_secondary(void);
void __init smp_prepare_cpus(unsigned int max_cpus)
static __initdata struct cpumask init_affinity;
static __init int reset_init_affinity(void)
late_initcall(reset_init_affinity);
static struct cpumask cpu_started __cpuinitdata;
static void __cpuinit start_secondary(void)
void __cpuinit online_secondary(void)
int __cpuinit __cpu_up(unsigned int cpu)
static void panic_start_cpu(void)
void __init smp_cpus_done(unsigned int max_cpus)
