struct iommu_device ;
static struct iommu_device *devices;
static int num_iommu_devices;
static struct iommu_device omap3_devices[] = ;
#define NR_OMAP3_IOMMU_DEVICES ARRAY_SIZE(omap3_devices)
static struct platform_device *omap3_iommu_pdev[NR_OMAP3_IOMMU_DEVICES];
#define omap3_devices		NULL
#define NR_OMAP3_IOMMU_DEVICES	0
#define omap3_iommu_pdev	NULL
static struct iommu_device omap4_devices[] = ;
#define NR_OMAP4_IOMMU_DEVICES ARRAY_SIZE(omap4_devices)
static struct platform_device *omap4_iommu_pdev[NR_OMAP4_IOMMU_DEVICES];
#define omap4_devices		NULL
#define NR_OMAP4_IOMMU_DEVICES	0
#define omap4_iommu_pdev	NULL
static struct platform_device **omap_iommu_pdev;
static int __init omap_iommu_init(void)
module_init(omap_iommu_init);
static void __exit omap_iommu_exit(void)
module_exit(omap_iommu_exit);
MODULE_AUTHOR("Hiroshi DOYU");
MODULE_DESCRIPTION("omap iommu: omap device registration");
MODULE_LICENSE("GPL v2");
