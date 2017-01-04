extern void tegra_secondary_startup(void);
static DEFINE_SPINLOCK(boot_lock);
static void __iomem *scu_base = IO_ADDRESS(TEGRA_ARM_PERIF_BASE);
#define EVP_CPU_RESET_VECTOR \
(IO_ADDRESS(TEGRA_EXCEPTION_VECTORS_BASE) + 0x100)
#define CLK_RST_CONTROLLER_CLK_CPU_CMPLX \
(IO_ADDRESS(TEGRA_CLK_RESET_BASE) + 0x4c)
#define CLK_RST_CONTROLLER_RST_CPU_CMPLX_CLR \
(IO_ADDRESS(TEGRA_CLK_RESET_BASE) + 0x344)
void __cpuinit platform_secondary_init(unsigned int cpu)
int __cpuinit boot_secondary(unsigned int cpu, struct task_struct *idle)
void __init smp_init_cpus(void)
void __init platform_smp_prepare_cpus(unsigned int max_cpus)
