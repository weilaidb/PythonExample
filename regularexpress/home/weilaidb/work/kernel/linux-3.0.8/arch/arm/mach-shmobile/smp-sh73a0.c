#define WUPCR		0xe6151010
#define SRESCR		0xe6151018
#define PSTR		0xe6151040
#define SBAR            0xe6180020
#define APARMBAREA      0xe6f10020
static void __iomem *scu_base_addr(void)
static DEFINE_SPINLOCK(scu_lock);
static unsigned long tmp;
static void modify_scu_cpu_psr(unsigned long set, unsigned long clr)
unsigned int __init sh73a0_get_core_count(void)
void __cpuinit sh73a0_secondary_init(unsigned int cpu)
int __cpuinit sh73a0_boot_secondary(unsigned int cpu)
void __init sh73a0_smp_prepare_cpus(void)
