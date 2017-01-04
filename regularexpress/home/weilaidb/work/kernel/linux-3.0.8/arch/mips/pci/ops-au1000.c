#undef	DEBUG
#define DBG(x...) printk(KERN_DEBUG x)
#define DBG(x...)
#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
int (*board_pci_idsel)(unsigned int devsel, int assert);
void mod_wired_entry(int entry, unsigned long entrylo0,
unsigned long entrylo1, unsigned long entryhi,
unsigned long pagemask)
static struct vm_struct *pci_cfg_vm;
static int pci_cfg_wired_entry;
static unsigned long last_entryLo0, last_entryLo1;
void __init au1x_pci_cfg_init(void)
static int config_access(unsigned char access_type, struct pci_bus *bus,
unsigned int dev_fn, unsigned char where, u32 *data)
static int read_config_byte(struct pci_bus *bus, unsigned int devfn,
int where,	u8 *val)
static int read_config_word(struct pci_bus *bus, unsigned int devfn,
int where, u16 *val)
static int read_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, u32 *val)
static int write_config_byte(struct pci_bus *bus, unsigned int devfn,
int where, u8 val)
static int write_config_word(struct pci_bus *bus, unsigned int devfn,
int where, u16 val)
static int write_config_dword(struct pci_bus *bus, unsigned int devfn,
int where, u32 val)
static int config_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int config_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops au1x_pci_ops = ;
