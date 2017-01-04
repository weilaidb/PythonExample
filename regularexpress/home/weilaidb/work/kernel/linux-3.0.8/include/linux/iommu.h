#define __LINUX_IOMMU_H
#define IOMMU_READ	(1)
#define IOMMU_WRITE	(2)
#define IOMMU_CACHE	(4)
struct device;
struct iommu_domain ;
#define IOMMU_CAP_CACHE_COHERENCY	0x1
#define IOMMU_CAP_INTR_REMAP		0x2
struct iommu_ops ;
extern void register_iommu(struct iommu_ops *ops);
extern bool iommu_found(void);
extern struct iommu_domain *iommu_domain_alloc(void);
extern void iommu_domain_free(struct iommu_domain *domain);
extern int iommu_attach_device(struct iommu_domain *domain,
struct device *dev);
extern void iommu_detach_device(struct iommu_domain *domain,
struct device *dev);
extern int iommu_map(struct iommu_domain *domain, unsigned long iova,
phys_addr_t paddr, int gfp_order, int prot);
extern int iommu_unmap(struct iommu_domain *domain, unsigned long iova,
int gfp_order);
extern phys_addr_t iommu_iova_to_phys(struct iommu_domain *domain,
unsigned long iova);
extern int iommu_domain_has_cap(struct iommu_domain *domain,
unsigned long cap);
static inline void register_iommu(struct iommu_ops *ops)
static inline bool iommu_found(void)
static inline struct iommu_domain *iommu_domain_alloc(void)
static inline void iommu_domain_free(struct iommu_domain *domain)
static inline int iommu_attach_device(struct iommu_domain *domain,
struct device *dev)
static inline void iommu_detach_device(struct iommu_domain *domain,
struct device *dev)
static inline int iommu_map(struct iommu_domain *domain, unsigned long iova,
phys_addr_t paddr, int gfp_order, int prot)
static inline int iommu_unmap(struct iommu_domain *domain, unsigned long iova,
int gfp_order)
static inline phys_addr_t iommu_iova_to_phys(struct iommu_domain *domain,
unsigned long iova)
static inline int domain_has_cap(struct iommu_domain *domain,
unsigned long cap)
