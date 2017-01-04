static spinlock_t fsl_lbc_lock = __SPIN_LOCK_UNLOCKED(fsl_lbc_lock);
struct fsl_lbc_ctrl *fsl_lbc_ctrl_dev;
EXPORT_SYMBOL(fsl_lbc_ctrl_dev);
u32 fsl_lbc_addr(phys_addr_t addr_base)
EXPORT_SYMBOL(fsl_lbc_addr);
int fsl_lbc_find(phys_addr_t addr_base)
EXPORT_SYMBOL(fsl_lbc_find);
int fsl_upm_find(phys_addr_t addr_base, struct fsl_upm *upm)
EXPORT_SYMBOL(fsl_upm_find);
int fsl_upm_run_pattern(struct fsl_upm *upm, void __iomem *io_base, u32 mar)
EXPORT_SYMBOL(fsl_upm_run_pattern);
static int __devinit fsl_lbc_ctrl_init(struct fsl_lbc_ctrl *ctrl,
struct device_node *node)
static irqreturn_t fsl_lbc_ctrl_irq(int irqno, void *data)
static int __devinit fsl_lbc_ctrl_probe(struct platform_device *dev)
static const struct of_device_id fsl_lbc_match[] = ;
static struct platform_driver fsl_lbc_ctrl_driver = ;
static int __init fsl_lbc_init(void)
module_init(fsl_lbc_init);
