const char *sysmmu_ips_name[EXYNOS4_SYSMMU_TOTAL_IPNUM] = ;
static struct resource exynos4_sysmmu_resource[] = ;
struct platform_device exynos4_device_sysmmu = ;
EXPORT_SYMBOL(exynos4_device_sysmmu);
static struct clk *sysmmu_clk[S5P_SYSMMU_TOTAL_IPNUM];
void sysmmu_clk_init(struct device *dev, sysmmu_ips ips)
void sysmmu_clk_enable(sysmmu_ips ips)
void sysmmu_clk_disable(sysmmu_ips ips)
