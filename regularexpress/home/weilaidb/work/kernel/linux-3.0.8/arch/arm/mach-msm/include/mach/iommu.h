#define MSM_IOMMU_H
#define MSM_IOMMU_ATTR_NON_SH		0x0
#define MSM_IOMMU_ATTR_SH		0x4
#define MSM_IOMMU_ATTR_NONCACHED	0x0
#define MSM_IOMMU_ATTR_CACHED_WB_WA	0x1
#define MSM_IOMMU_ATTR_CACHED_WB_NWA	0x2
#define MSM_IOMMU_ATTR_CACHED_WT	0x3
#define MSM_IOMMU_CP_MASK		0x03
#define MAX_NUM_MIDS	32
struct msm_iommu_dev ;
struct msm_iommu_ctx_dev ;
struct msm_iommu_drvdata ;
struct msm_iommu_ctx_drvdata ;
struct device *msm_iommu_get_ctx(const char *ctx_name);
irqreturn_t msm_iommu_fault_handler(int irq, void *dev_id);
