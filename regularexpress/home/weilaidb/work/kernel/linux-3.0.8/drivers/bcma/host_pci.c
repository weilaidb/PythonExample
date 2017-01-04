static void bcma_host_pci_switch_core(struct bcma_device *core)
static u8 bcma_host_pci_read8(struct bcma_device *core, u16 offset)
static u16 bcma_host_pci_read16(struct bcma_device *core, u16 offset)
static u32 bcma_host_pci_read32(struct bcma_device *core, u16 offset)
static void bcma_host_pci_write8(struct bcma_device *core, u16 offset,
u8 value)
static void bcma_host_pci_write16(struct bcma_device *core, u16 offset,
u16 value)
static void bcma_host_pci_write32(struct bcma_device *core, u16 offset,
u32 value)
static u32 bcma_host_pci_aread32(struct bcma_device *core, u16 offset)
static void bcma_host_pci_awrite32(struct bcma_device *core, u16 offset,
u32 value)
const struct bcma_host_ops bcma_host_pci_ops = ;
static int bcma_host_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void bcma_host_pci_remove(struct pci_dev *dev)
static DEFINE_PCI_DEVICE_TABLE(bcma_pci_bridge_tbl) = ;
MODULE_DEVICE_TABLE(pci, bcma_pci_bridge_tbl);
static struct pci_driver bcma_pci_bridge_driver = ;
int __init bcma_host_pci_init(void)
void __exit bcma_host_pci_exit(void)
