#define SCSI0  MACEPCI_SCSI0_IRQ
#define SCSI1  MACEPCI_SCSI1_IRQ
#define INTA0  MACEPCI_SLOT0_IRQ
#define INTA1  MACEPCI_SLOT1_IRQ
#define INTA2  MACEPCI_SLOT2_IRQ
#define INTB   MACEPCI_SHARED0_IRQ
#define INTC   MACEPCI_SHARED1_IRQ
#define INTD   MACEPCI_SHARED2_IRQ
static char irq_tab_mace[][5] __initdata = ;
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
