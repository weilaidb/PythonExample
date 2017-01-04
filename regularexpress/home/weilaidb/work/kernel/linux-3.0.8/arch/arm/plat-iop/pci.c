#define  DBG(x...) printk(x)
#define  DBG(x...) do  while (0)
static u32 iop3xx_cfg_address(struct pci_bus *bus, int devfn, int where)
static int iop3xx_pci_status(void)
static u32 iop3xx_read(unsigned long addr)
static int
iop3xx_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
iop3xx_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
static struct pci_ops iop3xx_ops = ;
static int
iop3xx_pci_abort(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
int iop3xx_pci_setup(int nr, struct pci_sys_data *sys)
struct pci_bus *iop3xx_pci_scan_bus(int nr, struct pci_sys_data *sys)
void __init iop3xx_atu_setup(void)
void __init iop3xx_atu_disable(void)
int init_atu;
int iop3xx_get_init_atu(void)
static void __init iop3xx_atu_debug(void)
void __init iop3xx_pci_preinit_cond(void)
void __init iop3xx_pci_preinit(void)
static int __init iop3xx_init_atu_setup(char *str)
__setup("iop3xx_init_atu", iop3xx_init_atu_setup);
