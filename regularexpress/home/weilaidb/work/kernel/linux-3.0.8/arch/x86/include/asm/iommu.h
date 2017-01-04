#define _ASM_X86_IOMMU_H
extern struct dma_map_ops nommu_dma_ops;
extern int force_iommu, no_iommu;
extern int iommu_detected;
extern int iommu_pass_through;
#define DMAR_OPERATION_TIMEOUT ((cycles_t) tsc_khz*10*1000)
