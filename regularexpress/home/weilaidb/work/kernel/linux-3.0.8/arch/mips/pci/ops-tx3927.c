static int mkaddr(struct pci_bus *bus, unsigned char devfn, unsigned char where)
static inline int check_abort(void)
static int tx3927_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 * val)
static int tx3927_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops tx3927_pci_ops = ;
void __init tx3927_pcic_setup(struct pci_controller *channel,
unsigned long sdram_size, int extarb)
static irqreturn_t tx3927_pcierr_interrupt(int irq, void *dev_id)
void __init tx3927_setup_pcierr_irq(void)
