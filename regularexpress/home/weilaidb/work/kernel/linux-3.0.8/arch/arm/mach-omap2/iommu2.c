#define IOMMU_ARCH_VERSION	0x00000011
#define MMU_SYS_IDLE_SHIFT	3
#define MMU_SYS_IDLE_FORCE	(0 << MMU_SYS_IDLE_SHIFT)
#define MMU_SYS_IDLE_NONE	(1 << MMU_SYS_IDLE_SHIFT)
#define MMU_SYS_IDLE_SMART	(2 << MMU_SYS_IDLE_SHIFT)
#define MMU_SYS_IDLE_MASK	(3 << MMU_SYS_IDLE_SHIFT)
#define MMU_SYS_SOFTRESET	(1 << 1)
#define MMU_SYS_AUTOIDLE	1
#define MMU_SYS_RESETDONE	1
#define MMU_IRQ_MULTIHITFAULT	(1 << 4)
#define MMU_IRQ_TABLEWALKFAULT	(1 << 3)
#define MMU_IRQ_EMUMISS		(1 << 2)
#define MMU_IRQ_TRANSLATIONFAULT	(1 << 1)
#define MMU_IRQ_TLBMISS		(1 << 0)
#define __MMU_IRQ_FAULT		\
(MMU_IRQ_MULTIHITFAULT | MMU_IRQ_EMUMISS | MMU_IRQ_TRANSLATIONFAULT)
#define MMU_IRQ_MASK		\
(__MMU_IRQ_FAULT | MMU_IRQ_TABLEWALKFAULT | MMU_IRQ_TLBMISS)
#define MMU_IRQ_TWL_MASK	(__MMU_IRQ_FAULT | MMU_IRQ_TABLEWALKFAULT)
#define MMU_IRQ_TLB_MISS_MASK	(__MMU_IRQ_FAULT | MMU_IRQ_TLBMISS)
#define MMU_CNTL_SHIFT		1
#define MMU_CNTL_MASK		(7 << MMU_CNTL_SHIFT)
#define MMU_CNTL_EML_TLB	(1 << 3)
#define MMU_CNTL_TWL_EN		(1 << 2)
#define MMU_CNTL_MMU_EN		(1 << 1)
#define get_cam_va_mask(pgsz)				\
(((pgsz) == MMU_CAM_PGSZ_16M) ? 0xff000000 :	\
((pgsz) == MMU_CAM_PGSZ_1M)  ? 0xfff00000 :	\
((pgsz) == MMU_CAM_PGSZ_64K) ? 0xffff0000 :	\
((pgsz) == MMU_CAM_PGSZ_4K)  ? 0xfffff000 : 0)
static void __iommu_set_twl(struct iommu *obj, bool on)
static int omap2_iommu_enable(struct iommu *obj)
static void omap2_iommu_disable(struct iommu *obj)
static void omap2_iommu_set_twl(struct iommu *obj, bool on)
static u32 omap2_iommu_fault_isr(struct iommu *obj, u32 *ra)
static void omap2_tlb_read_cr(struct iommu *obj, struct cr_regs *cr)
static void omap2_tlb_load_cr(struct iommu *obj, struct cr_regs *cr)
static u32 omap2_cr_to_virt(struct cr_regs *cr)
static struct cr_regs *omap2_alloc_cr(struct iommu *obj, struct iotlb_entry *e)
static inline int omap2_cr_valid(struct cr_regs *cr)
static u32 omap2_get_pte_attr(struct iotlb_entry *e)
static ssize_t omap2_dump_cr(struct iommu *obj, struct cr_regs *cr, char *buf)
#define pr_reg(name)							\
do  while (0)
static ssize_t omap2_iommu_dump_ctx(struct iommu *obj, char *buf, ssize_t len)
static void omap2_iommu_save_ctx(struct iommu *obj)
static void omap2_iommu_restore_ctx(struct iommu *obj)
static void omap2_cr_to_e(struct cr_regs *cr, struct iotlb_entry *e)
static const struct iommu_functions omap2_iommu_ops = ;
static int __init omap2_iommu_init(void)
module_init(omap2_iommu_init);
static void __exit omap2_iommu_exit(void)
module_exit(omap2_iommu_exit);
MODULE_AUTHOR("Hiroshi DOYU, Paul Mundt and Toshihiro Kobayashi");
MODULE_DESCRIPTION("omap iommu: omap2/3 architecture specific functions");
MODULE_LICENSE("GPL v2");
