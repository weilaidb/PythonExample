static struct  pcicptrs[2];
static void __init set_tx4927_pcicptr(struct pci_controller *channel,
struct tx4927_pcic_reg __iomem *pcicptr)
struct tx4927_pcic_reg __iomem *get_tx4927_pcicptr(
struct pci_controller *channel)
static int mkaddr(struct pci_bus *bus, unsigned int devfn, int where,
struct tx4927_pcic_reg __iomem *pcicptr)
static int check_abort(struct tx4927_pcic_reg __iomem *pcicptr)
static u8 icd_readb(int offset, struct tx4927_pcic_reg __iomem *pcicptr)
static u16 icd_readw(int offset, struct tx4927_pcic_reg __iomem *pcicptr)
static u32 icd_readl(struct tx4927_pcic_reg __iomem *pcicptr)
static void icd_writeb(u8 val, int offset,
struct tx4927_pcic_reg __iomem *pcicptr)
static void icd_writew(u16 val, int offset,
struct tx4927_pcic_reg __iomem *pcicptr)
static void icd_writel(u32 val, struct tx4927_pcic_reg __iomem *pcicptr)
static struct tx4927_pcic_reg __iomem *pci_bus_to_pcicptr(struct pci_bus *bus)
static int tx4927_pci_config_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int tx4927_pci_config_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops tx4927_pci_ops = ;
static struct  tx4927_pci_opts __devinitdata = ;
char *__devinit tx4927_pcibios_setup(char *str)
void __init tx4927_pcic_setup(struct tx4927_pcic_reg __iomem *pcicptr,
struct pci_controller *channel, int extarb)
static void tx4927_report_pcic_status1(struct tx4927_pcic_reg __iomem *pcicptr)
void tx4927_report_pcic_status(void)
static void tx4927_dump_pcic_settings1(struct tx4927_pcic_reg __iomem *pcicptr)
void tx4927_dump_pcic_settings(void)
irqreturn_t tx4927_pcierr_interrupt(int irq, void *dev_id)
static void __init tx4927_quirk_slc90e66_bridge(struct pci_dev *dev)
#define PCI_DEVICE_ID_EFAR_SLC90E66_0 0x9460
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_EFAR, PCI_DEVICE_ID_EFAR_SLC90E66_0,
tx4927_quirk_slc90e66_bridge);
