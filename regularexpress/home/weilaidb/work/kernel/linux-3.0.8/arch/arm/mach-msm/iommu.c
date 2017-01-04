#define pr_fmt(fmt)	KBUILD_MODNAME ": " fmt
#define MRC(reg, processor, op1, crn, crm, op2)				\
__asm__ __volatile__ (							\
"   mrc   "   #processor "," #op1 ", %0,"  #crn "," #crm "," #op2 "\n"  \
: "=r" (reg))
#define RCP15_PRRR(reg)		MRC(reg, p15, 0, c10, c2, 0)
#define RCP15_NMRR(reg)		MRC(reg, p15, 0, c10, c2, 1)
static int msm_iommu_tex_class[4];
DEFINE_SPINLOCK(msm_iommu_lock);
struct msm_priv ;
static int __enable_clocks(struct msm_iommu_drvdata *drvdata)
static void __disable_clocks(struct msm_iommu_drvdata *drvdata)
static int __flush_iotlb(struct iommu_domain *domain)
static void __reset_context(void __iomem *base, int ctx)
static void __program_context(void __iomem *base, int ctx, phys_addr_t pgtable)
static int msm_iommu_domain_init(struct iommu_domain *domain)
static void msm_iommu_domain_destroy(struct iommu_domain *domain)
static int msm_iommu_attach_dev(struct iommu_domain *domain, struct device *dev)
static void msm_iommu_detach_dev(struct iommu_domain *domain,
struct device *dev)
static int msm_iommu_map(struct iommu_domain *domain, unsigned long va,
phys_addr_t pa, int order, int prot)
static int msm_iommu_unmap(struct iommu_domain *domain, unsigned long va,
int order)
static phys_addr_t msm_iommu_iova_to_phys(struct iommu_domain *domain,
unsigned long va)
static int msm_iommu_domain_has_cap(struct iommu_domain *domain,
unsigned long cap)
static void print_ctx_regs(void __iomem *base, int ctx)
irqreturn_t msm_iommu_fault_handler(int irq, void *dev_id)
static struct iommu_ops msm_iommu_ops = ;
static int __init get_tex_class(int icp, int ocp, int mt, int nos)
static void __init setup_iommu_tex_classes(void)
static int __init msm_iommu_init(void)
subsys_initcall(msm_iommu_init);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Stepan Moskovchenko <stepanm@codeaurora.org>");
