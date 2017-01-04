extern struct pci_ops vr41xx_pci_ops;
static void __iomem *pciu_base;
#define pciu_read(offset)		readl(pciu_base + (offset))
#define pciu_write(offset, value)	writel((value), pciu_base + (offset))
static struct pci_master_address_conversion pci_master_memory1 = ;
static struct pci_target_address_conversion pci_target_memory1 = ;
static struct pci_master_address_conversion pci_master_io = ;
static struct pci_mailbox_address pci_mailbox = ;
static struct pci_target_address_window pci_target_window1 = ;
static struct resource pci_mem_resource = ;
static struct resource pci_io_resource = ;
static struct pci_controller_unit_setup vr41xx_pci_controller_unit_setup = ;
static struct pci_controller vr41xx_pci_controller = ;
void __init vr41xx_pciu_setup(struct pci_controller_unit_setup *setup)
static int __init vr41xx_pciu_init(void)
arch_initcall(vr41xx_pciu_init);
