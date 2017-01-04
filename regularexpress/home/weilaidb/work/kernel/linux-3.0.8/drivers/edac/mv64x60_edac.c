static const char *mv64x60_ctl_name = "MV64x60";
static int edac_dev_idx;
static int edac_pci_idx;
static int edac_mc_idx;
static void mv64x60_pci_check(struct edac_pci_ctl_info *pci)
static irqreturn_t mv64x60_pci_isr(int irq, void *dev_id)
static int __init mv64x60_pci_fixup(struct platform_device *pdev)
static int __devinit mv64x60_pci_err_probe(struct platform_device *pdev)
static int mv64x60_pci_err_remove(struct platform_device *pdev)
static struct platform_driver mv64x60_pci_err_driver = ;
static void mv64x60_sram_check(struct edac_device_ctl_info *edac_dev)
static irqreturn_t mv64x60_sram_isr(int irq, void *dev_id)
static int __devinit mv64x60_sram_err_probe(struct platform_device *pdev)
static int mv64x60_sram_err_remove(struct platform_device *pdev)
static struct platform_driver mv64x60_sram_err_driver = ;
static void mv64x60_cpu_check(struct edac_device_ctl_info *edac_dev)
static irqreturn_t mv64x60_cpu_isr(int irq, void *dev_id)
static int __devinit mv64x60_cpu_err_probe(struct platform_device *pdev)
static int mv64x60_cpu_err_remove(struct platform_device *pdev)
static struct platform_driver mv64x60_cpu_err_driver = ;
static void mv64x60_mc_check(struct mem_ctl_info *mci)
static irqreturn_t mv64x60_mc_isr(int irq, void *dev_id)
static void get_total_mem(struct mv64x60_mc_pdata *pdata)
static void mv64x60_init_csrows(struct mem_ctl_info *mci,
struct mv64x60_mc_pdata *pdata)
static int __devinit mv64x60_mc_err_probe(struct platform_device *pdev)
static int mv64x60_mc_err_remove(struct platform_device *pdev)
static struct platform_driver mv64x60_mc_err_driver = ;
static int __init mv64x60_edac_init(void)
module_init(mv64x60_edac_init);
static void __exit mv64x60_edac_exit(void)
module_exit(mv64x60_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Montavista Software, Inc.");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state,
"EDAC Error Reporting state: 0=Poll, 2=Interrupt");
