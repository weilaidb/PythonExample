#define PCI_ACCESS_READ  0
#define PCI_ACCESS_WRITE 1
#define CFG_SPACE_REG(offset) \
(void *)CKSEG1ADDR(LOONGSON_PCICFG_BASE | (offset))
#define ID_SEL_BEGIN 11
#define MAX_DEV_NUM (31 - ID_SEL_BEGIN)
static int loongson_pcibios_config_access(unsigned char access_type,
struct pci_bus *bus,
unsigned int devfn, int where,
u32 *data)
static int loongson_pcibios_read(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int loongson_pcibios_write(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
struct pci_ops loongson_pci_ops = ;
DEFINE_RAW_SPINLOCK(msr_lock);
void _rdmsr(u32 msr, u32 *hi, u32 *lo)
EXPORT_SYMBOL(_rdmsr);
void _wrmsr(u32 msr, u32 hi, u32 lo)
EXPORT_SYMBOL(_wrmsr);
