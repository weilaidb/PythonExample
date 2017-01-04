void __cpuinit x86_init_noop(void)
void __init x86_init_uint_noop(unsigned int unused)
void __init x86_init_pgd_noop(pgd_t *unused)
int __init iommu_init_noop(void)
void iommu_shutdown_noop(void)
struct x86_init_ops x86_init __initdata = ;
struct x86_cpuinit_ops x86_cpuinit __cpuinitdata = ;
static void default_nmi_init(void) ;
static int default_i8042_detect(void) ;
struct x86_platform_ops x86_platform = ;
EXPORT_SYMBOL_GPL(x86_platform);
struct x86_msi_ops x86_msi = ;
