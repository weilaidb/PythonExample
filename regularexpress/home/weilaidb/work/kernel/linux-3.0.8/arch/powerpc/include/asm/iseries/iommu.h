#define _ASM_POWERPC_ISERIES_IOMMU_H
struct pci_dev;
struct vio_dev;
struct device_node;
struct iommu_table;
extern void iommu_table_getparms_iSeries(unsigned long busno,
unsigned char slotno, unsigned char virtbus,
struct iommu_table *tbl);
extern struct iommu_table *vio_build_iommu_table_iseries(struct vio_dev *dev);
extern void iommu_vio_init(void);
