#define pr_fmt(fmt)	KBUILD_MODNAME ": " fmt
struct iommu_ctx_iter_data ;
static struct platform_device *msm_iommu_root_dev;
static int each_iommu_ctx(struct device *dev, void *data)
static int each_iommu(struct device *dev, void *data)
struct device *msm_iommu_get_ctx(const char *ctx_name)
EXPORT_SYMBOL(msm_iommu_get_ctx);
static void msm_iommu_reset(void __iomem *base, int ncb)
static int msm_iommu_probe(struct platform_device *pdev)
static int msm_iommu_remove(struct platform_device *pdev)
static int msm_iommu_ctx_probe(struct platform_device *pdev)
static int msm_iommu_ctx_remove(struct platform_device *pdev)
static struct platform_driver msm_iommu_driver = ;
static struct platform_driver msm_iommu_ctx_driver = ;
static int __init msm_iommu_driver_init(void)
static void __exit msm_iommu_driver_exit(void)
subsys_initcall(msm_iommu_driver_init);
module_exit(msm_iommu_driver_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Stepan Moskovchenko <stepanm@codeaurora.org>");
