#define for_each_iotlb_cr(obj, n, __i, cr)				\
for (__i = 0;							\
(__i < (n)) && (cr = __iotlb_read_cr((obj), __i), true);	\
__i++)
static const struct iommu_functions *arch_iommu;
static struct platform_driver omap_iommu_driver;
static struct kmem_cache *iopte_cachep;
int install_iommu_arch(const struct iommu_functions *ops)
EXPORT_SYMBOL_GPL(install_iommu_arch);
void uninstall_iommu_arch(const struct iommu_functions *ops)
EXPORT_SYMBOL_GPL(uninstall_iommu_arch);
void iommu_save_ctx(struct iommu *obj)
EXPORT_SYMBOL_GPL(iommu_save_ctx);
void iommu_restore_ctx(struct iommu *obj)
EXPORT_SYMBOL_GPL(iommu_restore_ctx);
u32 iommu_arch_version(void)
EXPORT_SYMBOL_GPL(iommu_arch_version);
static int iommu_enable(struct iommu *obj)
static void iommu_disable(struct iommu *obj)
void iotlb_cr_to_e(struct cr_regs *cr, struct iotlb_entry *e)
EXPORT_SYMBOL_GPL(iotlb_cr_to_e);
static inline int iotlb_cr_valid(struct cr_regs *cr)
static inline struct cr_regs *iotlb_alloc_cr(struct iommu *obj,
struct iotlb_entry *e)
u32 iotlb_cr_to_virt(struct cr_regs *cr)
EXPORT_SYMBOL_GPL(iotlb_cr_to_virt);
static u32 get_iopte_attr(struct iotlb_entry *e)
static u32 iommu_report_fault(struct iommu *obj, u32 *da)
static void iotlb_lock_get(struct iommu *obj, struct iotlb_lock *l)
static void iotlb_lock_set(struct iommu *obj, struct iotlb_lock *l)
static void iotlb_read_cr(struct iommu *obj, struct cr_regs *cr)
static void iotlb_load_cr(struct iommu *obj, struct cr_regs *cr)
static inline ssize_t iotlb_dump_cr(struct iommu *obj, struct cr_regs *cr,
char *buf)
static struct cr_regs __iotlb_read_cr(struct iommu *obj, int n)
int load_iotlb_entry(struct iommu *obj, struct iotlb_entry *e)
EXPORT_SYMBOL_GPL(load_iotlb_entry);
void flush_iotlb_page(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(flush_iotlb_page);
void flush_iotlb_range(struct iommu *obj, u32 start, u32 end)
EXPORT_SYMBOL_GPL(flush_iotlb_range);
void flush_iotlb_all(struct iommu *obj)
EXPORT_SYMBOL_GPL(flush_iotlb_all);
void iommu_set_twl(struct iommu *obj, bool on)
EXPORT_SYMBOL_GPL(iommu_set_twl);
#if defined(CONFIG_OMAP_IOMMU_DEBUG_MODULE)
ssize_t iommu_dump_ctx(struct iommu *obj, char *buf, ssize_t bytes)
EXPORT_SYMBOL_GPL(iommu_dump_ctx);
static int __dump_tlb_entries(struct iommu *obj, struct cr_regs *crs, int num)
size_t dump_tlb_entries(struct iommu *obj, char *buf, ssize_t bytes)
EXPORT_SYMBOL_GPL(dump_tlb_entries);
int foreach_iommu_device(void *data, int (*fn)(struct device *, void *))
EXPORT_SYMBOL_GPL(foreach_iommu_device);
static void flush_iopgd_range(u32 *first, u32 *last)
static void flush_iopte_range(u32 *first, u32 *last)
static void iopte_free(u32 *iopte)
static u32 *iopte_alloc(struct iommu *obj, u32 *iopgd, u32 da)
static int iopgd_alloc_section(struct iommu *obj, u32 da, u32 pa, u32 prot)
static int iopgd_alloc_super(struct iommu *obj, u32 da, u32 pa, u32 prot)
static int iopte_alloc_page(struct iommu *obj, u32 da, u32 pa, u32 prot)
static int iopte_alloc_large(struct iommu *obj, u32 da, u32 pa, u32 prot)
static int iopgtable_store_entry_core(struct iommu *obj, struct iotlb_entry *e)
int iopgtable_store_entry(struct iommu *obj, struct iotlb_entry *e)
EXPORT_SYMBOL_GPL(iopgtable_store_entry);
void iopgtable_lookup_entry(struct iommu *obj, u32 da, u32 **ppgd, u32 **ppte)
EXPORT_SYMBOL_GPL(iopgtable_lookup_entry);
static size_t iopgtable_clear_entry_core(struct iommu *obj, u32 da)
size_t iopgtable_clear_entry(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(iopgtable_clear_entry);
static void iopgtable_clear_entry_all(struct iommu *obj)
static irqreturn_t iommu_fault_handler(int irq, void *data)
static int device_match_by_alias(struct device *dev, void *data)
int iommu_set_da_range(struct iommu *obj, u32 start, u32 end)
EXPORT_SYMBOL_GPL(iommu_set_da_range);
struct iommu *iommu_get(const char *name)
EXPORT_SYMBOL_GPL(iommu_get);
void iommu_put(struct iommu *obj)
EXPORT_SYMBOL_GPL(iommu_put);
int iommu_set_isr(const char *name,
int (*isr)(struct iommu *obj, u32 da, u32 iommu_errs,
void *priv),
void *isr_priv)
EXPORT_SYMBOL_GPL(iommu_set_isr);
static int __devinit omap_iommu_probe(struct platform_device *pdev)
static int __devexit omap_iommu_remove(struct platform_device *pdev)
static struct platform_driver omap_iommu_driver = ;
static void iopte_cachep_ctor(void *iopte)
static int __init omap_iommu_init(void)
module_init(omap_iommu_init);
static void __exit omap_iommu_exit(void)
module_exit(omap_iommu_exit);
MODULE_DESCRIPTION("omap iommu: tlb and pagetable primitives");
MODULE_ALIAS("platform:omap-iommu");
MODULE_AUTHOR("Hiroshi DOYU, Paul Mundt and Toshihiro Kobayashi");
MODULE_LICENSE("GPL v2");
