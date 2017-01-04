#define SCSI	PCIMT_IRQ_SCSI
#define ETH	PCIMT_IRQ_ETHERNET
#define INTA	PCIMT_IRQ_INTA
#define INTB	PCIMT_IRQ_INTB
#define INTC	PCIMT_IRQ_INTC
#define INTD	PCIMT_IRQ_INTD
static char irq_tab_rm200[8][5] __initdata = ;
static char irq_tab_rm300d[8][5] __initdata = ;
static char irq_tab_rm300e[5][5] __initdata = ;
#undef SCSI
#undef ETH
#undef INTA
#undef INTB
#undef INTC
#undef INTD
#define SCSI0	PCIT_IRQ_SCSI0
#define SCSI1	PCIT_IRQ_SCSI1
#define ETH	PCIT_IRQ_ETHERNET
#define INTA	PCIT_IRQ_INTA
#define INTB	PCIT_IRQ_INTB
#define INTC	PCIT_IRQ_INTC
#define INTD	PCIT_IRQ_INTD
static char irq_tab_pcit[13][5] __initdata = ;
static char irq_tab_pcit_cplus[13][5] __initdata = ;
static inline int is_rm300_revd(void)
int __init pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin)
int pcibios_plat_dev_init(struct pci_dev *dev)
