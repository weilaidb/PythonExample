static struct pci_dev *fake_pci_dev(struct pci_channel *hose,
int top_bus, int busnr, int devfn)
#define EARLY_PCI_OP(rw, size, type)					\
int __init early_##rw##_config_##size(struct pci_channel *hose,		\
int top_bus, int bus, int devfn, int offset, type value)	\
EARLY_PCI_OP(read, byte, u8 *)
EARLY_PCI_OP(read, word, u16 *)
EARLY_PCI_OP(read, dword, u32 *)
EARLY_PCI_OP(write, byte, u8)
EARLY_PCI_OP(write, word, u16)
EARLY_PCI_OP(write, dword, u32)
int __init pci_is_66mhz_capable(struct pci_channel *hose,
int top_bus, int current_bus)
static void pcibios_enable_err(unsigned long __data)
static void pcibios_enable_serr(unsigned long __data)
void pcibios_enable_timers(struct pci_channel *hose)
unsigned int pcibios_handle_status_errors(unsigned long addr,
unsigned int status,
struct pci_channel *hose)
