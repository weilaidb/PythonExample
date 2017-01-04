int (*ixp4xx_pci_read)(u32 addr, u32 cmd, u32* data);
unsigned long ixp4xx_pci_reg_base = 0;
static DEFINE_SPINLOCK(ixp4xx_pci_lock);
static void crp_read(u32 ad_cbe, u32 *data)
static void crp_write(u32 ad_cbe, u32 data)
static inline int check_master_abort(void)
int ixp4xx_pci_read_errata(u32 addr, u32 cmd, u32* data)
int ixp4xx_pci_read_no_errata(u32 addr, u32 cmd, u32* data)
int ixp4xx_pci_write(u32 addr, u32 cmd, u32 data)
static u32 ixp4xx_config_addr(u8 bus_num, u16 devfn, int where)
static u32 bytemask[] = ;
static u32 local_byte_lane_enable_bits(u32 n, int size)
static int local_read_config(int where, int size, u32 *value)
static int local_write_config(int where, int size, u32 value)
static u32 byte_lane_enable_bits(u32 n, int size)
static int ixp4xx_pci_read_config(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 *value)
static int ixp4xx_pci_write_config(struct pci_bus *bus,  unsigned int devfn, int where, int size, u32 value)
struct pci_ops ixp4xx_ops = ;
static int abort_handler(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int ixp4xx_pci_platform_notify(struct device *dev)
static int ixp4xx_pci_platform_notify_remove(struct device *dev)
int dma_needs_bounce(struct device *dev, dma_addr_t dma_addr, size_t size)
void __init ixp4xx_pci_preinit(void)
int ixp4xx_setup(int nr, struct pci_sys_data *sys)
struct pci_bus * __devinit ixp4xx_scan_bus(int nr, struct pci_sys_data *sys)
int dma_set_coherent_mask(struct device *dev, u64 mask)
EXPORT_SYMBOL(ixp4xx_pci_read);
EXPORT_SYMBOL(ixp4xx_pci_write);
EXPORT_SYMBOL(dma_set_coherent_mask);
