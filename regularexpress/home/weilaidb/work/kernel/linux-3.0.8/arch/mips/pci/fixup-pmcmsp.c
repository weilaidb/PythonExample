#define IRQ4	MSP_INT_EXT4
#define IRQ5	MSP_INT_EXT5
#define IRQ6	MSP_INT_EXT6
#if defined(CONFIG_PMC_MSP7120_GW)
static char irq_tab[][5] __initdata = ;
#elif defined(CONFIG_PMC_MSP7120_EVAL)
static char irq_tab[][5] __initdata = ;
static char irq_tab[][5] __initdata = ;
int pcibios_plat_dev_init(struct pci_dev *dev)
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
