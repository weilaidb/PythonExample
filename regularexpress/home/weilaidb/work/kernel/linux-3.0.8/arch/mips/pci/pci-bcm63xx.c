int bcm63xx_pci_enabled;
static struct resource bcm_pci_mem_resource = ;
static struct resource bcm_pci_io_resource = ;
struct pci_controller bcm63xx_controller = ;
static struct resource bcm_cb_mem_resource = ;
static struct resource bcm_cb_io_resource = ;
struct pci_controller bcm63xx_cb_controller = ;
static u32 bcm63xx_int_cfg_readl(u32 reg)
static void bcm63xx_int_cfg_writel(u32 val, u32 reg)
void __iomem *pci_iospace_start;
static int __init bcm63xx_pci_init(void)
arch_initcall(bcm63xx_pci_init);
