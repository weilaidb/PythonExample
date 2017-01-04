static int postprocess_read(u32 data, int where, unsigned int size)
static int preprocess_write(u32 orig_data, u32 val, int where,
unsigned int size)
static int bcm63xx_setup_cfg_access(int type, unsigned int busn,
unsigned int devfn, int where)
static int bcm63xx_do_cfg_read(int type, unsigned int busn,
unsigned int devfn, int where, int size,
u32 *val)
static int bcm63xx_do_cfg_write(int type, unsigned int busn,
unsigned int devfn, int where, int size,
u32 val)
static int bcm63xx_pci_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int bcm63xx_pci_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops bcm63xx_pci_ops = ;
#define FAKE_CB_BRIDGE_SLOT	0x1e
static int fake_cb_bridge_bus_number = -1;
static struct  fake_cb_bridge_regs;
static int fake_cb_bridge_read(int where, int size, u32 *val)
static int fake_cb_bridge_write(int where, int size, u32 val)
static int bcm63xx_cb_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int bcm63xx_cb_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops bcm63xx_cb_ops = ;
static void bcm63xx_fixup(struct pci_dev *dev)
DECLARE_PCI_FIXUP_ENABLE(PCI_ANY_ID, PCI_ANY_ID, bcm63xx_fixup);
