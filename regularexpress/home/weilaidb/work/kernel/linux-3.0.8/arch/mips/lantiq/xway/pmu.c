#define LTQ_PMU_PWDCR	0x1C
#define LTQ_PMU_PWDSR	0x20
#define ltq_pmu_w32(x, y)	ltq_w32((x), ltq_pmu_membase + (y))
#define ltq_pmu_r32(x)		ltq_r32(ltq_pmu_membase + (x))
static struct resource ltq_pmu_resource = ;
static void __iomem *ltq_pmu_membase;
void ltq_pmu_enable(unsigned int module)
EXPORT_SYMBOL(ltq_pmu_enable);
void ltq_pmu_disable(unsigned int module)
EXPORT_SYMBOL(ltq_pmu_disable);
int __init ltq_pmu_init(void)
core_initcall(ltq_pmu_init);
