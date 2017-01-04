const char *ssb_core_name(u16 coreid)
static u16 pcidev_to_chipid(struct pci_dev *pci_dev)
static u8 chipid_to_nrcores(u16 chipid)
static u32 scan_read32(struct ssb_bus *bus, u8 current_coreidx,
u16 offset)
static int scan_switchcore(struct ssb_bus *bus, u8 coreidx)
void ssb_iounmap(struct ssb_bus *bus)
static void __iomem *ssb_ioremap(struct ssb_bus *bus,
unsigned long baseaddr)
static int we_support_multiple_80211_cores(struct ssb_bus *bus)
int ssb_bus_scan(struct ssb_bus *bus,
unsigned long baseaddr)
