#define __IOMMU_MMAP_H
struct iovm_struct ;
#define IOVMF_SW_SHIFT		16
#define IOVMF_CAM_MASK		(~((1 << 10) - 1))
#define IOVMF_RAM_MASK		(~IOVMF_CAM_MASK)
#define IOVMF_PGSZ_MASK		(3 << 0)
#define IOVMF_PGSZ_1M		MMU_CAM_PGSZ_1M
#define IOVMF_PGSZ_64K		MMU_CAM_PGSZ_64K
#define IOVMF_PGSZ_4K		MMU_CAM_PGSZ_4K
#define IOVMF_PGSZ_16M		MMU_CAM_PGSZ_16M
#define IOVMF_ENDIAN_MASK	(1 << 9)
#define IOVMF_ENDIAN_BIG	MMU_RAM_ENDIAN_BIG
#define IOVMF_ENDIAN_LITTLE	MMU_RAM_ENDIAN_LITTLE
#define IOVMF_ELSZ_MASK		(3 << 7)
#define IOVMF_ELSZ_8		MMU_RAM_ELSZ_8
#define IOVMF_ELSZ_16		MMU_RAM_ELSZ_16
#define IOVMF_ELSZ_32		MMU_RAM_ELSZ_32
#define IOVMF_ELSZ_NONE		MMU_RAM_ELSZ_NONE
#define IOVMF_MIXED_MASK	(1 << 6)
#define IOVMF_MIXED		MMU_RAM_MIXED
#define IOVMF_MMIO		(1 << IOVMF_SW_SHIFT)
#define IOVMF_ALLOC		(2 << IOVMF_SW_SHIFT)
#define IOVMF_ALLOC_MASK	(3 << IOVMF_SW_SHIFT)
#define IOVMF_DISCONT		(1 << (2 + IOVMF_SW_SHIFT))
#define IOVMF_LINEAR		(2 << (2 + IOVMF_SW_SHIFT))
#define IOVMF_LINEAR_MASK	(3 << (2 + IOVMF_SW_SHIFT))
#define IOVMF_DA_FIXED		(1 << (4 + IOVMF_SW_SHIFT))
extern struct iovm_struct *find_iovm_area(struct iommu *obj, u32 da);
extern u32 iommu_vmap(struct iommu *obj, u32 da,
const struct sg_table *sgt, u32 flags);
extern struct sg_table *iommu_vunmap(struct iommu *obj, u32 da);
extern u32 iommu_vmalloc(struct iommu *obj, u32 da, size_t bytes,
u32 flags);
extern void iommu_vfree(struct iommu *obj, const u32 da);
extern u32 iommu_kmap(struct iommu *obj, u32 da, u32 pa, size_t bytes,
u32 flags);
extern void iommu_kunmap(struct iommu *obj, u32 da);
extern u32 iommu_kmalloc(struct iommu *obj, u32 da, size_t bytes,
u32 flags);
extern void iommu_kfree(struct iommu *obj, u32 da);
extern void *da_to_va(struct iommu *obj, u32 da);
