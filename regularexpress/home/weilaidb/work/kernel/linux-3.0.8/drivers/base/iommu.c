static struct iommu_ops *iommu_ops;
void register_iommu(struct iommu_ops *ops)
bool iommu_found(void)
EXPORT_SYMBOL_GPL(iommu_found);
struct iommu_domain *iommu_domain_alloc(void)
EXPORT_SYMBOL_GPL(iommu_domain_alloc);
void iommu_domain_free(struct iommu_domain *domain)
EXPORT_SYMBOL_GPL(iommu_domain_free);
int iommu_attach_device(struct iommu_domain *domain, struct device *dev)
EXPORT_SYMBOL_GPL(iommu_attach_device);
void iommu_detach_device(struct iommu_domain *domain, struct device *dev)
EXPORT_SYMBOL_GPL(iommu_detach_device);
phys_addr_t iommu_iova_to_phys(struct iommu_domain *domain,
unsigned long iova)
EXPORT_SYMBOL_GPL(iommu_iova_to_phys);
int iommu_domain_has_cap(struct iommu_domain *domain,
unsigned long cap)
EXPORT_SYMBOL_GPL(iommu_domain_has_cap);
int iommu_map(struct iommu_domain *domain, unsigned long iova,
phys_addr_t paddr, int gfp_order, int prot)
EXPORT_SYMBOL_GPL(iommu_map);
int iommu_unmap(struct iommu_domain *domain, unsigned long iova, int gfp_order)
EXPORT_SYMBOL_GPL(iommu_unmap);
