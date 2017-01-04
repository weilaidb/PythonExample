#define __PLAT_OMAP_IOMMU_H
#define IOPGD_SHIFT		20
#define IOPGD_SIZE		(1UL << IOPGD_SHIFT)
#define IOPGD_MASK		(~(IOPGD_SIZE - 1))
#define IOSECTION_SHIFT		20
#define IOSECTION_SIZE		(1UL << IOSECTION_SHIFT)
#define IOSECTION_MASK		(~(IOSECTION_SIZE - 1))
#define IOSUPER_SHIFT		24
#define IOSUPER_SIZE		(1UL << IOSUPER_SHIFT)
#define IOSUPER_MASK		(~(IOSUPER_SIZE - 1))
#define PTRS_PER_IOPGD		(1UL << (32 - IOPGD_SHIFT))
#define IOPGD_TABLE_SIZE	(PTRS_PER_IOPGD * sizeof(u32))
#define IOPTE_SHIFT		12
#define IOPTE_SIZE		(1UL << IOPTE_SHIFT)
#define IOPTE_MASK		(~(IOPTE_SIZE - 1))
#define IOLARGE_SHIFT		16
#define IOLARGE_SIZE		(1UL << IOLARGE_SHIFT)
#define IOLARGE_MASK		(~(IOLARGE_SIZE - 1))
#define PTRS_PER_IOPTE		(1UL << (IOPGD_SHIFT - IOPTE_SHIFT))
#define IOPTE_TABLE_SIZE	(PTRS_PER_IOPTE * sizeof(u32))
#define IOPAGE_MASK		IOPTE_MASK
#define IOPGD_TABLE		(1 << 0)
#define IOPGD_SECTION		(2 << 0)
#define IOPGD_SUPER		(1 << 18 | 2 << 0)
#define iopgd_is_table(x)	(((x) & 3) == IOPGD_TABLE)
#define IOPTE_SMALL		(2 << 0)
#define IOPTE_LARGE		(1 << 0)
#define iopgd_index(da)		(((da) >> IOPGD_SHIFT) & (PTRS_PER_IOPGD - 1))
#define iopgd_offset(obj, da)	((obj)->iopgd + iopgd_index(da))
#define iopgd_page_paddr(iopgd)	(*iopgd & ~((1 << 10) - 1))
#define iopgd_page_vaddr(iopgd)	((u32 *)phys_to_virt(iopgd_page_paddr(iopgd)))
#define iopte_index(da)		(((da) >> IOPTE_SHIFT) & (PTRS_PER_IOPTE - 1))
#define iopte_offset(iopgd, da)	(iopgd_page_vaddr(iopgd) + iopte_index(da))
static inline u32 iotlb_init_entry(struct iotlb_entry *e, u32 da, u32 pa,
u32 flags)
#define to_iommu(dev)							\
(struct iommu *)platform_get_drvdata(to_platform_device(dev))
