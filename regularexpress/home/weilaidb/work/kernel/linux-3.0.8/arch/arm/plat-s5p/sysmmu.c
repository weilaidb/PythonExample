#define CTRL_ENABLE	0x5
#define CTRL_BLOCK	0x7
#define CTRL_DISABLE	0x0
static struct device *dev;
static unsigned short fault_reg_offset[SYSMMU_FAULTS_NUM] = ;
static char *sysmmu_fault_name[SYSMMU_FAULTS_NUM] = ;
static int (*fault_handlers[S5P_SYSMMU_TOTAL_IPNUM])(
enum S5P_SYSMMU_INTERRUPT_TYPE itype,
unsigned long pgtable_base,
unsigned long fault_addr);
static unsigned long sysmmu_states;
static inline void set_sysmmu_active(sysmmu_ips ips)
static inline void set_sysmmu_inactive(sysmmu_ips ips)
static inline int is_sysmmu_active(sysmmu_ips ips)
static void __iomem *sysmmusfrs[S5P_SYSMMU_TOTAL_IPNUM];
static inline void sysmmu_block(sysmmu_ips ips)
static inline void sysmmu_unblock(sysmmu_ips ips)
static inline void __sysmmu_tlb_invalidate(sysmmu_ips ips)
static inline void __sysmmu_set_ptbase(sysmmu_ips ips, unsigned long pgd)
void sysmmu_set_fault_handler(sysmmu_ips ips,
int (*handler)(enum S5P_SYSMMU_INTERRUPT_TYPE itype,
unsigned long pgtable_base,
unsigned long fault_addr))
static irqreturn_t s5p_sysmmu_irq(int irq, void *dev_id)
void s5p_sysmmu_set_tablebase_pgd(sysmmu_ips ips, unsigned long pgd)
void s5p_sysmmu_enable(sysmmu_ips ips, unsigned long pgd)
void s5p_sysmmu_disable(sysmmu_ips ips)
void s5p_sysmmu_tlb_invalidate(sysmmu_ips ips)
static int s5p_sysmmu_probe(struct platform_device *pdev)
static int s5p_sysmmu_remove(struct platform_device *pdev)
int s5p_sysmmu_runtime_suspend(struct device *dev)
int s5p_sysmmu_runtime_resume(struct device *dev)
const struct dev_pm_ops s5p_sysmmu_pm_ops = ;
static struct platform_driver s5p_sysmmu_driver = ;
static int __init s5p_sysmmu_init(void)
arch_initcall(s5p_sysmmu_init);
