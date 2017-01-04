#define UHC_RESET_WAIT_MAX 10000
static inline int uhc_clkctrl_ready(u32 val)
static void enable_scc_uhc(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_TOSHIBA_2,
PCI_DEVICE_ID_TOSHIBA_SCC_USB, enable_scc_uhc);
