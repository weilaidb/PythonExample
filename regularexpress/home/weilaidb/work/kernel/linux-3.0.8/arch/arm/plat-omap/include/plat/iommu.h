#define __MACH_IOMMU_H
struct iotlb_entry ;
struct iommu ;
struct cr_regs ;
struct iotlb_lock ;
struct iommu_functions ;
struct iommu_platform_data ;
#define OMAP_IOMMU_ERR_TLB_MISS		(1 << 0)
#define OMAP_IOMMU_ERR_TRANS_FAULT	(1 << 1)
#define OMAP_IOMMU_ERR_EMU_MISS		(1 << 2)
#define OMAP_IOMMU_ERR_TBLWALK_FAULT	(1 << 3)
#define OMAP_IOMMU_ERR_MULTIHIT_FAULT	(1 << 4)
#if defined(CONFIG_ARCH_OMAP1)
#error "iommu for this processor not implemented yet"
#define iopgsz_max(bytes)			\
(((bytes) >= SZ_16M) ? SZ_16M :		\
((bytes) >= SZ_1M)  ? SZ_1M  :		\
((bytes) >= SZ_64K) ? SZ_64K :		\
((bytes) >= SZ_4K)  ? SZ_4K  :	0)
#define bytes_to_iopgsz(bytes)				\
(((bytes) == SZ_16M) ? MMU_CAM_PGSZ_16M :	\
((bytes) == SZ_1M)  ? MMU_CAM_PGSZ_1M  :	\
((bytes) == SZ_64K) ? MMU_CAM_PGSZ_64K :	\
((bytes) == SZ_4K)  ? MMU_CAM_PGSZ_4K  : -1)
#define iopgsz_to_bytes(iopgsz)				\
(((iopgsz) == MMU_CAM_PGSZ_16M)	? SZ_16M :	\
((iopgsz) == MMU_CAM_PGSZ_1M)	? SZ_1M  :	\
((iopgsz) == MMU_CAM_PGSZ_64K)	? SZ_64K :	\
((iopgsz) == MMU_CAM_PGSZ_4K)	? SZ_4K  : 0)
#define iopgsz_ok(bytes) (bytes_to_iopgsz(bytes) >= 0)
extern u32 iommu_arch_version(void);
extern void iotlb_cr_to_e(struct cr_regs *cr, struct iotlb_entry *e);
extern u32 iotlb_cr_to_virt(struct cr_regs *cr);
extern int load_iotlb_entry(struct iommu *obj, struct iotlb_entry *e);
extern void iommu_set_twl(struct iommu *obj, bool on);
extern void flush_iotlb_page(struct iommu *obj, u32 da);
extern void flush_iotlb_range(struct iommu *obj, u32 start, u32 end);
extern void flush_iotlb_all(struct iommu *obj);
extern int iopgtable_store_entry(struct iommu *obj, struct iotlb_entry *e);
extern void iopgtable_lookup_entry(struct iommu *obj, u32 da, u32 **ppgd,
u32 **ppte);
extern size_t iopgtable_clear_entry(struct iommu *obj, u32 iova);
extern int iommu_set_da_range(struct iommu *obj, u32 start, u32 end);
extern struct iommu *iommu_get(const char *name);
extern void iommu_put(struct iommu *obj);
extern int iommu_set_isr(const char *name,
int (*isr)(struct iommu *obj, u32 da, u32 iommu_errs,
void *priv),
void *isr_priv);
extern void iommu_save_ctx(struct iommu *obj);
extern void iommu_restore_ctx(struct iommu *obj);
extern int install_iommu_arch(const struct iommu_functions *ops);
extern void uninstall_iommu_arch(const struct iommu_functions *ops);
extern int foreach_iommu_device(void *data,
int (*fn)(struct device *, void *));
extern ssize_t iommu_dump_ctx(struct iommu *obj, char *buf, ssize_t len);
extern size_t dump_tlb_entries(struct iommu *obj, char *buf, ssize_t len);
