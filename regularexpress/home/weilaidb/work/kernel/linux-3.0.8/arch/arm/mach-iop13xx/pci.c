#define IOP13XX_PCI_DEBUG 0
#define PRINTK(x...) ((void)(IOP13XX_PCI_DEBUG && printk(x)))
u32 iop13xx_atux_pmmr_offset;
u32 iop13xx_atue_pmmr_offset;
static struct pci_bus *pci_bus_atux = 0;
static struct pci_bus *pci_bus_atue = 0;
u32 iop13xx_atue_mem_base;
u32 iop13xx_atux_mem_base;
size_t iop13xx_atue_mem_size;
size_t iop13xx_atux_mem_size;
unsigned long iop13xx_pcibios_min_io = 0;
unsigned long iop13xx_pcibios_min_mem = 0;
EXPORT_SYMBOL(iop13xx_atue_mem_base);
EXPORT_SYMBOL(iop13xx_atux_mem_base);
EXPORT_SYMBOL(iop13xx_atue_mem_size);
EXPORT_SYMBOL(iop13xx_atux_mem_size);
int init_atu = 0;
static unsigned long atux_trhfa_timeout = 0;
void iop13xx_map_pci_memory(void)
static int iop13xx_atu_function(int atu)
static u32 iop13xx_atux_cfg_address(struct pci_bus *bus, int devfn, int where)
static u32 iop13xx_atue_cfg_address(struct pci_bus *bus, int devfn, int where)
static int iop13xx_atux_pci_status(int clear)
static u32 iop13xx_atux_read(unsigned long addr)
static int
iop13xx_atux_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
iop13xx_atux_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops iop13xx_atux_ops = ;
static int iop13xx_atue_pci_status(int clear)
static int
iop13xx_pcie_map_irq(struct pci_dev *dev, u8 idsel, u8 pin)
static u32 iop13xx_atue_read(unsigned long addr)
static int
iop13xx_atue_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
iop13xx_atue_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops iop13xx_atue_ops = ;
int
iop13xx_pci_abort(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
struct pci_bus *iop13xx_scan_bus(int nr, struct pci_sys_data *sys)
void __init iop13xx_atue_setup(void)
void __init iop13xx_atue_disable(void)
void __init iop13xx_atux_setup(void)
void __init iop13xx_atux_disable(void)
void __init iop13xx_set_atu_mmr_bases(void)
void __init iop13xx_atu_select(struct hw_pci *plat_pci)
void __init iop13xx_pci_init(void)
int iop13xx_pci_setup(int nr, struct pci_sys_data *sys)
u16 iop13xx_dev_id(void)
static int __init iop13xx_init_atu_setup(char *str)
__setup("iop13xx_init_atu", iop13xx_init_atu_setup);
