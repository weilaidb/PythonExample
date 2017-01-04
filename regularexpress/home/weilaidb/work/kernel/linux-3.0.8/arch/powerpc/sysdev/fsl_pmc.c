struct pmc_regs ;
static struct device *pmc_dev;
static struct pmc_regs __iomem *pmc_regs;
static int pmc_suspend_enter(suspend_state_t state)
static int pmc_suspend_valid(suspend_state_t state)
static const struct platform_suspend_ops pmc_suspend_ops = ;
static int pmc_probe(struct platform_device *ofdev)
static const struct of_device_id pmc_ids[] = ;
static struct platform_driver pmc_driver = ;
static int __init pmc_init(void)
device_initcall(pmc_init);
