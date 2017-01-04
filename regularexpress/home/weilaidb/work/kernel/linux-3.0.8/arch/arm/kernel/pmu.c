#define pr_fmt(fmt) "PMU: " fmt
static volatile long pmu_lock;
static struct platform_device *pmu_devices[ARM_NUM_PMU_DEVICES];
static int __devinit pmu_device_probe(struct platform_device *pdev)
static struct platform_driver pmu_driver = ;
static int __init register_pmu_driver(void)
device_initcall(register_pmu_driver);
struct platform_device *
reserve_pmu(enum arm_pmu_type device)
EXPORT_SYMBOL_GPL(reserve_pmu);
int
release_pmu(struct platform_device *pdev)
EXPORT_SYMBOL_GPL(release_pmu);
static int
set_irq_affinity(int irq,
unsigned int cpu)
static int
init_cpu_pmu(void)
int
init_pmu(enum arm_pmu_type device)
EXPORT_SYMBOL_GPL(init_pmu);
