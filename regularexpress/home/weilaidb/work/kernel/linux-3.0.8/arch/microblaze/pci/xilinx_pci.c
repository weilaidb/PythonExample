#define XPLB_PCI_ADDR 0x10c
#define XPLB_PCI_DATA 0x110
#define XPLB_PCI_BUS  0x114
#define PCI_HOST_ENABLE_CMD (PCI_COMMAND_SERR | PCI_COMMAND_PARITY | \
PCI_COMMAND_MASTER | PCI_COMMAND_MEMORY)
static struct of_device_id xilinx_pci_match[] = ;
static void xilinx_pci_fixup_bridge(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, xilinx_pci_fixup_bridge);
static int
xilinx_pci_exclude_device(struct pci_controller *hose, u_char bus, u8 devfn)
void __init xilinx_early_pci_scan(struct pci_controller *hose)
void __init xilinx_early_pci_scan(struct pci_controller *hose)
void __init xilinx_pci_init(void)
