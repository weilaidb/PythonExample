int __init pcibios_map_platform_irq(struct pci_dev *, u8 slot, u8 pin)
#define PCIMCR_MRSET_OFF	0xBFFFFFFF
#define PCIMCR_RFSH_OFF		0xFFFFFFFB
#define PCIC_WRITE(x,v) writel((v), PCI_REG(x))
#define PCIC_READ(x) readl(PCI_REG(x))
int pci_fixup_pcic(struct pci_channel *chan)
