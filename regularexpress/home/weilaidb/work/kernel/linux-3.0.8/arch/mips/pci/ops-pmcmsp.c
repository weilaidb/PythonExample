#define PCI_COUNTERS	1
#if defined(CONFIG_PROC_FS) && defined(PCI_COUNTERS)
#if defined(CONFIG_PMC_MSP7120_GW) || defined(CONFIG_PMC_MSP7120_EVAL)
#define PCI_ACCESS_READ		0
#define PCI_ACCESS_WRITE	1
#if defined(CONFIG_PROC_FS) && defined(PCI_COUNTERS)
static char proc_init;
extern struct proc_dir_entry *proc_bus_pci_dir;
unsigned int pci_int_count[32];
static void pci_proc_init(void);
static int read_msp_pci_counts(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int gen_pci_cfg_wr(char *page, char **start, off_t off,
int count, int *eof, void *data)
static void pci_proc_init(void)
static DEFINE_SPINLOCK(bpci_lock);
static struct resource pci_io_resource = ;
static struct resource pci_mem_resource = ;
static irqreturn_t bpci_interrupt(int irq, void *dev_id)
int msp_pcibios_config_access(unsigned char access_type,
struct pci_bus *bus,
unsigned int devfn,
unsigned char where,
u32 *data)
static int
msp_pcibios_read_config_byte(struct pci_bus *bus,
unsigned int devfn,
int where,
u32 *val)
static int
msp_pcibios_read_config_word(struct pci_bus *bus,
unsigned int devfn,
int where,
u32 *val)
static int
msp_pcibios_read_config_dword(struct pci_bus *bus,
unsigned int devfn,
int where,
u32 *val)
static int
msp_pcibios_write_config_byte(struct pci_bus *bus,
unsigned int devfn,
int where,
u8 val)
static int
msp_pcibios_write_config_word(struct pci_bus *bus,
unsigned int devfn,
int where,
u16 val)
static int
msp_pcibios_write_config_dword(struct pci_bus *bus,
unsigned int devfn,
int where,
u32 val)
int
msp_pcibios_read_config(struct pci_bus *bus,
unsigned int	devfn,
int where,
int size,
u32 *val)
int
msp_pcibios_write_config(struct pci_bus *bus,
unsigned int devfn,
int where,
int size,
u32 val)
struct pci_ops msp_pci_ops = ;
static struct pci_controller msp_pci_controller = ;
void __init msp_pci_init(void)
