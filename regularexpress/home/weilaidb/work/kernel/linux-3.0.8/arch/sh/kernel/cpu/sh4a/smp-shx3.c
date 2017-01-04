#define STBCR_REG(phys_id) (0xfe400004 | (phys_id << 12))
#define RESET_REG(phys_id) (0xfe400008 | (phys_id << 12))
#define STBCR_MSTP	0x00000001
#define STBCR_RESET	0x00000002
#define STBCR_SLEEP	0x00000004
#define STBCR_LTSLP	0x80000000
static irqreturn_t ipi_interrupt_handler(int irq, void *arg)
static void shx3_smp_setup(void)
static void shx3_prepare_cpus(unsigned int max_cpus)
static void shx3_start_cpu(unsigned int cpu, unsigned long entry_point)
static unsigned int shx3_smp_processor_id(void)
static void shx3_send_ipi(unsigned int cpu, unsigned int message)
static void shx3_update_boot_vector(unsigned int cpu)
static int __cpuinit
shx3_cpu_callback(struct notifier_block *nfb, unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata shx3_cpu_notifier = ;
static int __cpuinit register_shx3_cpu_notifier(void)
late_initcall(register_shx3_cpu_notifier);
struct plat_smp_ops shx3_smp_ops = ;
