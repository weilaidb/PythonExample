static struct kmem_cache *iovm_area_cachep;
static size_t sgtable_len(const struct sg_table *sgt)
#define sgtable_ok(x)	(!!sgtable_len(x))
static unsigned max_alignment(u32 addr)
static unsigned sgtable_nents(size_t bytes, u32 da, u32 pa)
static struct sg_table *sgtable_alloc(const size_t bytes, u32 flags,
u32 da, u32 pa)
static void sgtable_free(struct sg_table *sgt)
static void *vmap_sg(const struct sg_table *sgt)
static inline void vunmap_sg(const void *va)
static struct iovm_struct *__find_iovm_area(struct iommu *obj, const u32 da)
struct iovm_struct *find_iovm_area(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(find_iovm_area);
static struct iovm_struct *alloc_iovm_area(struct iommu *obj, u32 da,
size_t bytes, u32 flags)
static void free_iovm_area(struct iommu *obj, struct iovm_struct *area)
void *da_to_va(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(da_to_va);
static void sgtable_fill_vmalloc(struct sg_table *sgt, void *_va)
static inline void sgtable_drain_vmalloc(struct sg_table *sgt)
static void sgtable_fill_kmalloc(struct sg_table *sgt, u32 pa, u32 da,
size_t len)
static inline void sgtable_drain_kmalloc(struct sg_table *sgt)
static int map_iovm_area(struct iommu *obj, struct iovm_struct *new,
const struct sg_table *sgt, u32 flags)
static void unmap_iovm_area(struct iommu *obj, struct iovm_struct *area)
static struct sg_table *unmap_vm_area(struct iommu *obj, const u32 da,
void (*fn)(const void *), u32 flags)
static u32 map_iommu_region(struct iommu *obj, u32 da,
const struct sg_table *sgt, void *va, size_t bytes, u32 flags)
static inline u32 __iommu_vmap(struct iommu *obj, u32 da,
const struct sg_table *sgt, void *va, size_t bytes, u32 flags)
u32 iommu_vmap(struct iommu *obj, u32 da, const struct sg_table *sgt,
u32 flags)
EXPORT_SYMBOL_GPL(iommu_vmap);
struct sg_table *iommu_vunmap(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(iommu_vunmap);
u32 iommu_vmalloc(struct iommu *obj, u32 da, size_t bytes, u32 flags)
EXPORT_SYMBOL_GPL(iommu_vmalloc);
void iommu_vfree(struct iommu *obj, const u32 da)
EXPORT_SYMBOL_GPL(iommu_vfree);
static u32 __iommu_kmap(struct iommu *obj, u32 da, u32 pa, void *va,
size_t bytes, u32 flags)
u32 iommu_kmap(struct iommu *obj, u32 da, u32 pa, size_t bytes,
u32 flags)
EXPORT_SYMBOL_GPL(iommu_kmap);
void iommu_kunmap(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(iommu_kunmap);
u32 iommu_kmalloc(struct iommu *obj, u32 da, size_t bytes, u32 flags)
EXPORT_SYMBOL_GPL(iommu_kmalloc);
void iommu_kfree(struct iommu *obj, u32 da)
EXPORT_SYMBOL_GPL(iommu_kfree);
static int __init iovmm_init(void)
module_init(iovmm_init);
static void __exit iovmm_exit(void)
module_exit(iovmm_exit);
MODULE_DESCRIPTION("omap iommu: simple virtual address space management");
MODULE_AUTHOR("Hiroshi DOYU <Hiroshi.DOYU@nokia.com>");
MODULE_LICENSE("GPL v2");
