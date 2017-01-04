#define ROOT_SIZE		VTD_PAGE_SIZE
#define CONTEXT_SIZE		VTD_PAGE_SIZE
#define IS_BRIDGE_HOST_DEVICE(pdev) \
((pdev->class >> 8) == PCI_CLASS_BRIDGE_HOST)
#define IS_GFX_DEVICE(pdev) ((pdev->class >> 16) == PCI_BASE_CLASS_DISPLAY)
#define IS_ISA_DEVICE(pdev) ((pdev->class >> 8) == PCI_CLASS_BRIDGE_ISA)
#define IS_AZALIA(pdev) ((pdev)->vendor == 0x8086 && (pdev)->device == 0x3a3e)
#define IOAPIC_RANGE_START	(0xfee00000)
#define IOAPIC_RANGE_END	(0xfeefffff)
#define IOVA_START_ADDR		(0x1000)
#define DEFAULT_DOMAIN_ADDRESS_WIDTH 48
#define MAX_AGAW_WIDTH 64
#define __DOMAIN_MAX_PFN(gaw)  ((((uint64_t)1) << (gaw-VTD_PAGE_SHIFT)) - 1)
#define __DOMAIN_MAX_ADDR(gaw) ((((uint64_t)1) << gaw) - 1)
#define DOMAIN_MAX_PFN(gaw)	((unsigned long) min_t(uint64_t, \
__DOMAIN_MAX_PFN(gaw), (unsigned long)-1))
#define DOMAIN_MAX_ADDR(gaw)	(((uint64_t)__DOMAIN_MAX_PFN(gaw)) << VTD_PAGE_SHIFT)
#define IOVA_PFN(addr)		((addr) >> PAGE_SHIFT)
#define DMA_32BIT_PFN		IOVA_PFN(DMA_BIT_MASK(32))
#define DMA_64BIT_PFN		IOVA_PFN(DMA_BIT_MASK(64))
#define LEVEL_STRIDE		(9)
#define LEVEL_MASK		(((u64)1 << LEVEL_STRIDE) - 1)
static inline int agaw_to_level(int agaw)
static inline int agaw_to_width(int agaw)
static inline int width_to_agaw(int width)
static inline unsigned int level_to_offset_bits(int level)
static inline int pfn_level_offset(unsigned long pfn, int level)
static inline unsigned long level_mask(int level)
static inline unsigned long level_size(int level)
static inline unsigned long align_to_level(unsigned long pfn, int level)
static inline unsigned long lvl_to_nr_pages(unsigned int lvl)
static inline unsigned long dma_to_mm_pfn(unsigned long dma_pfn)
static inline unsigned long mm_to_dma_pfn(unsigned long mm_pfn)
static inline unsigned long page_to_dma_pfn(struct page *pg)
static inline unsigned long virt_to_dma_pfn(void *p)
static struct intel_iommu **g_iommus;
static void __init check_tylersburg_isoch(void);
static int rwbf_quirk;
static int force_on = 0;
struct root_entry ;
#define ROOT_ENTRY_NR (VTD_PAGE_SIZE/sizeof(struct root_entry))
static inline bool root_present(struct root_entry *root)
static inline void set_root_present(struct root_entry *root)
static inline void set_root_value(struct root_entry *root, unsigned long value)
static inline struct context_entry *
get_context_addr_from_root(struct root_entry *root)
struct context_entry ;
static inline bool context_present(struct context_entry *context)
static inline void context_set_present(struct context_entry *context)
static inline void context_set_fault_enable(struct context_entry *context)
static inline void context_set_translation_type(struct context_entry *context,
unsigned long value)
static inline void context_set_address_root(struct context_entry *context,
unsigned long value)
static inline void context_set_address_width(struct context_entry *context,
unsigned long value)
static inline void context_set_domain_id(struct context_entry *context,
unsigned long value)
static inline void context_clear_entry(struct context_entry *context)
struct dma_pte ;
static inline void dma_clear_pte(struct dma_pte *pte)
static inline void dma_set_pte_readable(struct dma_pte *pte)
static inline void dma_set_pte_writable(struct dma_pte *pte)
static inline void dma_set_pte_snp(struct dma_pte *pte)
static inline void dma_set_pte_prot(struct dma_pte *pte, unsigned long prot)
static inline u64 dma_pte_addr(struct dma_pte *pte)
static inline void dma_set_pte_pfn(struct dma_pte *pte, unsigned long pfn)
static inline bool dma_pte_present(struct dma_pte *pte)
static inline int first_pte_in_page(struct dma_pte *pte)
static struct dmar_domain *si_domain;
static int hw_pass_through = 1;
#define DOMAIN_FLAG_P2P_MULTIPLE_DEVICES (1 << 0)
#define DOMAIN_FLAG_VIRTUAL_MACHINE	(1 << 1)
#define DOMAIN_FLAG_STATIC_IDENTITY	(1 << 2)
struct dmar_domain ;
struct device_domain_info ;
static void flush_unmaps_timeout(unsigned long data);
DEFINE_TIMER(unmap_timer,  flush_unmaps_timeout, 0, 0);
#define HIGH_WATER_MARK 250
struct deferred_flush_tables ;
static struct deferred_flush_tables *deferred_flush;
static int g_num_of_iommus;
static DEFINE_SPINLOCK(async_umap_flush_lock);
static LIST_HEAD(unmaps_to_do);
static int timer_on;
static long list_size;
static void domain_remove_dev_info(struct dmar_domain *domain);
int dmar_disabled = 0;
int dmar_disabled = 1;
static int dmar_map_gfx = 1;
static int dmar_forcedac;
static int intel_iommu_strict;
static int intel_iommu_superpage = 1;
#define DUMMY_DEVICE_DOMAIN_INFO ((struct device_domain_info *)(-1))
static DEFINE_SPINLOCK(device_domain_lock);
static LIST_HEAD(device_domain_list);
static struct iommu_ops intel_iommu_ops;
static int __init intel_iommu_setup(char *str)
__setup("intel_iommu=", intel_iommu_setup);
static struct kmem_cache *iommu_domain_cache;
static struct kmem_cache *iommu_devinfo_cache;
static struct kmem_cache *iommu_iova_cache;
static inline void *alloc_pgtable_page(int node)
static inline void free_pgtable_page(void *vaddr)
static inline void *alloc_domain_mem(void)
static void free_domain_mem(void *vaddr)
static inline void * alloc_devinfo_mem(void)
static inline void free_devinfo_mem(void *vaddr)
struct iova *alloc_iova_mem(void)
void free_iova_mem(struct iova *iova)
static int __iommu_calculate_agaw(struct intel_iommu *iommu, int max_gaw)
int iommu_calculate_max_sagaw(struct intel_iommu *iommu)
int iommu_calculate_agaw(struct intel_iommu *iommu)
static struct intel_iommu *domain_get_iommu(struct dmar_domain *domain)
static void domain_update_iommu_coherency(struct dmar_domain *domain)
static void domain_update_iommu_snooping(struct dmar_domain *domain)
static void domain_update_iommu_superpage(struct dmar_domain *domain)
static void domain_update_iommu_cap(struct dmar_domain *domain)
static struct intel_iommu *device_to_iommu(int segment, u8 bus, u8 devfn)
static void domain_flush_cache(struct dmar_domain *domain,
void *addr, int size)
static struct context_entry * device_to_context_entry(struct intel_iommu *iommu,
u8 bus, u8 devfn)
static int device_context_mapped(struct intel_iommu *iommu, u8 bus, u8 devfn)
static void clear_context_table(struct intel_iommu *iommu, u8 bus, u8 devfn)
static void free_context_table(struct intel_iommu *iommu)
static struct dma_pte *pfn_to_dma_pte(struct dmar_domain *domain,
unsigned long pfn, int large_level)
static struct dma_pte *dma_pfn_level_pte(struct dmar_domain *domain,
unsigned long pfn,
int level, int *large_page)
static void dma_pte_clear_range(struct dmar_domain *domain,
unsigned long start_pfn,
unsigned long last_pfn)
static void dma_pte_free_pagetable(struct dmar_domain *domain,
unsigned long start_pfn,
unsigned long last_pfn)
static int iommu_alloc_root_entry(struct intel_iommu *iommu)
static void iommu_set_root_entry(struct intel_iommu *iommu)
static void iommu_flush_write_buffer(struct intel_iommu *iommu)
static void __iommu_flush_context(struct intel_iommu *iommu,
u16 did, u16 source_id, u8 function_mask,
u64 type)
static void __iommu_flush_iotlb(struct intel_iommu *iommu, u16 did,
u64 addr, unsigned int size_order, u64 type)
static struct device_domain_info *iommu_support_dev_iotlb(
struct dmar_domain *domain, int segment, u8 bus, u8 devfn)
static void iommu_enable_dev_iotlb(struct device_domain_info *info)
static void iommu_disable_dev_iotlb(struct device_domain_info *info)
static void iommu_flush_dev_iotlb(struct dmar_domain *domain,
u64 addr, unsigned mask)
static void iommu_flush_iotlb_psi(struct intel_iommu *iommu, u16 did,
unsigned long pfn, unsigned int pages, int map)
static void iommu_disable_protect_mem_regions(struct intel_iommu *iommu)
static int iommu_enable_translation(struct intel_iommu *iommu)
static int iommu_disable_translation(struct intel_iommu *iommu)
static int iommu_init_domains(struct intel_iommu *iommu)
static void domain_exit(struct dmar_domain *domain);
static void vm_domain_exit(struct dmar_domain *domain);
void free_dmar_iommu(struct intel_iommu *iommu)
static struct dmar_domain *alloc_domain(void)
static int iommu_attach_domain(struct dmar_domain *domain,
struct intel_iommu *iommu)
static void iommu_detach_domain(struct dmar_domain *domain,
struct intel_iommu *iommu)
static struct iova_domain reserved_iova_list;
static struct lock_class_key reserved_rbtree_key;
static int dmar_init_reserved_ranges(void)
static void domain_reserve_special_ranges(struct dmar_domain *domain)
static inline int guestwidth_to_adjustwidth(int gaw)
static int domain_init(struct dmar_domain *domain, int guest_width)
static void domain_exit(struct dmar_domain *domain)
static int domain_context_mapping_one(struct dmar_domain *domain, int segment,
u8 bus, u8 devfn, int translation)
static int
domain_context_mapping(struct dmar_domain *domain, struct pci_dev *pdev,
int translation)
static int domain_context_mapped(struct pci_dev *pdev)
static inline unsigned long aligned_nrpages(unsigned long host_addr,
size_t size)
static inline int hardware_largepage_caps(struct dmar_domain *domain,
unsigned long iov_pfn,
unsigned long phy_pfn,
unsigned long pages)
static int __domain_mapping(struct dmar_domain *domain, unsigned long iov_pfn,
struct scatterlist *sg, unsigned long phys_pfn,
unsigned long nr_pages, int prot)
static inline int domain_sg_mapping(struct dmar_domain *domain, unsigned long iov_pfn,
struct scatterlist *sg, unsigned long nr_pages,
int prot)
static inline int domain_pfn_mapping(struct dmar_domain *domain, unsigned long iov_pfn,
unsigned long phys_pfn, unsigned long nr_pages,
int prot)
static void iommu_detach_dev(struct intel_iommu *iommu, u8 bus, u8 devfn)
static void domain_remove_dev_info(struct dmar_domain *domain)
static struct dmar_domain *
find_domain(struct pci_dev *pdev)
static struct dmar_domain *get_domain_for_dev(struct pci_dev *pdev, int gaw)
static int iommu_identity_mapping;
#define IDENTMAP_ALL		1
#define IDENTMAP_GFX		2
#define IDENTMAP_AZALIA		4
static int iommu_domain_identity_map(struct dmar_domain *domain,
unsigned long long start,
unsigned long long end)
static int iommu_prepare_identity_map(struct pci_dev *pdev,
unsigned long long start,
unsigned long long end)
static inline int iommu_prepare_rmrr_dev(struct dmar_rmrr_unit *rmrr,
struct pci_dev *pdev)
static inline void iommu_prepare_isa(void)
static inline void iommu_prepare_isa(void)
static int md_domain_init(struct dmar_domain *domain, int guest_width);
static int __init si_domain_work_fn(unsigned long start_pfn,
unsigned long end_pfn, void *datax)
static int __init si_domain_init(int hw)
static void domain_remove_one_dev_info(struct dmar_domain *domain,
struct pci_dev *pdev);
static int identity_mapping(struct pci_dev *pdev)
static int domain_add_dev_info(struct dmar_domain *domain,
struct pci_dev *pdev,
int translation)
static int iommu_should_identity_map(struct pci_dev *pdev, int startup)
static int __init iommu_prepare_static_identity_mapping(int hw)
static int __init init_dmars(void)
static struct iova *intel_alloc_iova(struct device *dev,
struct dmar_domain *domain,
unsigned long nrpages, uint64_t dma_mask)
static struct dmar_domain *__get_valid_domain_for_dev(struct pci_dev *pdev)
static inline struct dmar_domain *get_valid_domain_for_dev(struct pci_dev *dev)
static int iommu_dummy(struct pci_dev *pdev)
static int iommu_no_mapping(struct device *dev)
static dma_addr_t __intel_map_single(struct device *hwdev, phys_addr_t paddr,
size_t size, int dir, u64 dma_mask)
static dma_addr_t intel_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void flush_unmaps(void)
static void flush_unmaps_timeout(unsigned long data)
static void add_unmap(struct dmar_domain *dom, struct iova *iova)
static void intel_unmap_page(struct device *dev, dma_addr_t dev_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void *intel_alloc_coherent(struct device *hwdev, size_t size,
dma_addr_t *dma_handle, gfp_t flags)
static void intel_free_coherent(struct device *hwdev, size_t size, void *vaddr,
dma_addr_t dma_handle)
static void intel_unmap_sg(struct device *hwdev, struct scatterlist *sglist,
int nelems, enum dma_data_direction dir,
struct dma_attrs *attrs)
static int intel_nontranslate_map_sg(struct device *hddev,
struct scatterlist *sglist, int nelems, int dir)
static int intel_map_sg(struct device *hwdev, struct scatterlist *sglist, int nelems,
enum dma_data_direction dir, struct dma_attrs *attrs)
static int intel_mapping_error(struct device *dev, dma_addr_t dma_addr)
struct dma_map_ops intel_dma_ops = ;
static inline int iommu_domain_cache_init(void)
static inline int iommu_devinfo_cache_init(void)
static inline int iommu_iova_cache_init(void)
static int __init iommu_init_mempool(void)
static void __init iommu_exit_mempool(void)
static void quirk_ioat_snb_local_iommu(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_ENABLE(PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_IOAT_SNB, quirk_ioat_snb_local_iommu);
static void __init init_no_remapping_devices(void)
static int init_iommu_hw(void)
static void iommu_flush_all(void)
static int iommu_suspend(void)
static void iommu_resume(void)
static struct syscore_ops iommu_syscore_ops = ;
static void __init init_iommu_pm_ops(void)
static inline void init_iommu_pm_ops(void)
static int device_notifier(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block device_nb = ;
int __init intel_iommu_init(void)
static void iommu_detach_dependent_devices(struct intel_iommu *iommu,
struct pci_dev *pdev)
static void domain_remove_one_dev_info(struct dmar_domain *domain,
struct pci_dev *pdev)
static void vm_domain_remove_all_dev_info(struct dmar_domain *domain)
static unsigned long vm_domid;
static struct dmar_domain *iommu_alloc_vm_domain(void)
static int md_domain_init(struct dmar_domain *domain, int guest_width)
static void iommu_free_vm_domain(struct dmar_domain *domain)
static void vm_domain_exit(struct dmar_domain *domain)
static int intel_iommu_domain_init(struct iommu_domain *domain)
static void intel_iommu_domain_destroy(struct iommu_domain *domain)
static int intel_iommu_attach_device(struct iommu_domain *domain,
struct device *dev)
static void intel_iommu_detach_device(struct iommu_domain *domain,
struct device *dev)
static int intel_iommu_map(struct iommu_domain *domain,
unsigned long iova, phys_addr_t hpa,
int gfp_order, int iommu_prot)
static int intel_iommu_unmap(struct iommu_domain *domain,
unsigned long iova, int gfp_order)
static phys_addr_t intel_iommu_iova_to_phys(struct iommu_domain *domain,
unsigned long iova)
static int intel_iommu_domain_has_cap(struct iommu_domain *domain,
unsigned long cap)
static struct iommu_ops intel_iommu_ops = ;
static void __devinit quirk_iommu_rwbf(struct pci_dev *dev)
{
printk(KERN_INFO "DMAR: Forcing write-buffer flush capability\n");
rwbf_quirk = 1;
static void __init check_tylersburg_isoch(void)
