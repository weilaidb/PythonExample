#undef DINO_DEBUG
#define DBG(x...) printk(x)
#define DBG(x...)
#define is_card_dino(id)	((id)->hw_type == HPHW_A_DMA)
#define is_cujo(id)		((id)->hversion == 0x682)
#define DINO_IAR0		0x004
#define DINO_IODC_ADDR		0x008
#define DINO_IODC_DATA_0	0x008
#define DINO_IODC_DATA_1	0x008
#define DINO_IRR0		0x00C
#define DINO_IAR1		0x010
#define DINO_IRR1		0x014
#define DINO_IMR		0x018
#define DINO_IPR		0x01C
#define DINO_TOC_ADDR		0x020
#define DINO_ICR		0x024
#define DINO_ILR		0x028
#define DINO_IO_COMMAND		0x030
#define DINO_IO_STATUS		0x034
#define DINO_IO_CONTROL		0x038
#define DINO_IO_GSC_ERR_RESP	0x040
#define DINO_IO_ERR_INFO	0x044
#define DINO_IO_PCI_ERR_RESP	0x048
#define DINO_IO_FBB_EN		0x05c
#define DINO_IO_ADDR_EN		0x060
#define DINO_PCI_ADDR		0x064
#define DINO_CONFIG_DATA	0x068
#define DINO_IO_DATA		0x06c
#define DINO_MEM_DATA		0x070
#define DINO_GSC2X_CONFIG	0x7b4
#define DINO_GMASK		0x800
#define DINO_PAMR		0x804
#define DINO_PAPR		0x808
#define DINO_DAMODE		0x80c
#define DINO_PCICMD		0x810
#define DINO_PCISTS		0x814
#define DINO_MLTIM		0x81c
#define DINO_BRDG_FEAT		0x820
#define DINO_PCIROR		0x824
#define DINO_PCIWOR		0x828
#define DINO_TLTIM		0x830
#define DINO_IRQS 11
#define DINO_IRR_MASK	0x5ff
#define DINO_LOCAL_IRQS (DINO_IRQS+1)
#define DINO_MASK_IRQ(x)	(1<<(x))
#define PCIINTA   0x001
#define PCIINTB   0x002
#define PCIINTC   0x004
#define PCIINTD   0x008
#define PCIINTE   0x010
#define PCIINTF   0x020
#define GSCEXTINT 0x040
#define RS232INT  0x400
struct dino_device
;
#define DINO_DEV(d) ((struct dino_device *) d)
#define DINO_CFG_TOK(bus,dfn,pos) ((u32) ((bus)<<16 | (dfn)<<8 | (pos)))
static int dino_current_bus = 0;
static int dino_cfg_read(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *val)
static int dino_cfg_write(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 val)
static struct pci_ops dino_cfg_ops = ;
#define DINO_PORT_IN(type, size, mask) \
static u##size dino_in##size (struct pci_hba_data *d, u16 addr) \
DINO_PORT_IN(b,  8, 3)
DINO_PORT_IN(w, 16, 2)
DINO_PORT_IN(l, 32, 0)
#define DINO_PORT_OUT(type, size, mask) \
static void dino_out##size (struct pci_hba_data *d, u16 addr, u##size val) \
DINO_PORT_OUT(b,  8, 3)
DINO_PORT_OUT(w, 16, 2)
DINO_PORT_OUT(l, 32, 0)
static struct pci_port_ops dino_port_ops = ;
static void dino_mask_irq(struct irq_data *d)
static void dino_unmask_irq(struct irq_data *d)
static struct irq_chip dino_interrupt_type = ;
static irqreturn_t dino_isr(int irq, void *intr_dev)
static void dino_assign_irq(struct dino_device *dino, int local_irq, int *irqp)
static void dino_choose_irq(struct parisc_device *dev, void *ctrl)
static void __devinit quirk_cirrus_cardbus(struct pci_dev *dev)
DECLARE_PCI_FIXUP_ENABLE(PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_6832, quirk_cirrus_cardbus );
static void __init
dino_bios_init(void)
#define _8MB 0x00800000UL
static void __init
dino_card_setup(struct pci_bus *bus, void __iomem *base_addr)
static void __init
dino_card_fixup(struct pci_dev *dev)
#define DINO_BRIDGE_ALIGN 0x100000
static void __init
dino_fixup_bus(struct pci_bus *bus)
static struct pci_bios_ops dino_bios_ops = ;
static void __init
dino_card_init(struct dino_device *dino_dev)
static int __init
dino_bridge_init(struct dino_device *dino_dev, const char *name)
static int __init dino_common_init(struct parisc_device *dev,
struct dino_device *dino_dev, const char *name)
#define CUJO_RAVEN_ADDR		F_EXTEND(0xf1000000UL)
#define CUJO_FIREHAWK_ADDR	F_EXTEND(0xf1604000UL)
#define CUJO_RAVEN_BADPAGE	0x01003000UL
#define CUJO_FIREHAWK_BADPAGE	0x01607000UL
static const char *dino_vers[] = ;
static const char *cujo_vers[] = ;
void ccio_cujo20_fixup(struct parisc_device *dev, u32 iovp);
static int __init dino_probe(struct parisc_device *dev)
static struct parisc_device_id dino_tbl[] = ;
static struct parisc_driver dino_driver = ;
int __init dino_init(void)
