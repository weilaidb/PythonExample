#define __ASM_ARM_ARCH_SYSMMU_H __FILE__
enum exynos4_sysmmu_ips ;
#define S5P_SYSMMU_TOTAL_IPNUM		EXYNOS4_SYSMMU_TOTAL_IPNUM
extern const char *sysmmu_ips_name[EXYNOS4_SYSMMU_TOTAL_IPNUM];
typedef enum exynos4_sysmmu_ips sysmmu_ips;
void sysmmu_clk_init(struct device *dev, sysmmu_ips ips);
void sysmmu_clk_enable(sysmmu_ips ips);
void sysmmu_clk_disable(sysmmu_ips ips);
