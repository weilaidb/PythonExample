static int max_segment_number;
static int max_pcibus_number = 255;
static inline u64 sal_get_hubdev_info(u64 handle, u64 address)
static inline u64 sal_get_pcibus_info(u64 segment, u64 busnum, u64 address)
static inline u64
sal_get_pcidev_info(u64 segment, u64 bus_number, u64 devfn, u64 pci_dev,
u64 sn_irq_info)
static void __init sn_fixup_ionodes(void)
static void
sn_legacy_pci_window_fixup(struct pci_controller *controller,
u64 legacy_io, u64 legacy_mem)
static void
sn_pci_window_fixup(struct pci_dev *dev, unsigned int count,
s64 * pci_addrs)
void
sn_io_slot_fixup(struct pci_dev *dev)
EXPORT_SYMBOL(sn_io_slot_fixup);
static void __init
sn_pci_controller_fixup(int segment, int busnum, struct pci_bus *bus)
void
sn_bus_fixup(struct pci_bus *bus)
void __init sn_io_init(void)
