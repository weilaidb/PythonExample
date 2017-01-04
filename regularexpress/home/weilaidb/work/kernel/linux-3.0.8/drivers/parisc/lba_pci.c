#undef DEBUG_LBA
#undef DEBUG_LBA_PORT
#undef DEBUG_LBA_CFG
#undef DEBUG_LBA_PAT
#undef FBB_SUPPORT
#define DBG(x...)	printk(x)
#define DBG(x...)
#define DBG_PORT(x...)	printk(x)
#define DBG_PORT(x...)
#define DBG_CFG(x...)	printk(x)
#define DBG_CFG(x...)
#define DBG_PAT(x...)	printk(x)
#define DBG_PAT(x...)
#define MODULE_NAME "LBA"
#define LBA_PORT_BASE	(PCI_F_EXTEND | 0xfee00000UL)
static void __iomem *astro_iop_base __read_mostly;
static u32 lba_t32;
#define LBA_FLAG_SKIP_PROBE	0x10
#define LBA_SKIP_PROBE(d) ((d)->flags & LBA_FLAG_SKIP_PROBE)
#define LBA_DEV(d) ((struct lba_device *) (d))
#define LBA_MAX_NUM_BUSES 8
#define READ_U8(addr)  __raw_readb(addr)
#define READ_U16(addr) __raw_readw(addr)
#define READ_U32(addr) __raw_readl(addr)
#define WRITE_U8(value, addr)  __raw_writeb(value, addr)
#define WRITE_U16(value, addr) __raw_writew(value, addr)
#define WRITE_U32(value, addr) __raw_writel(value, addr)
#define READ_REG8(addr)  readb(addr)
#define READ_REG16(addr) readw(addr)
#define READ_REG32(addr) readl(addr)
#define READ_REG64(addr) readq(addr)
#define WRITE_REG8(value, addr)  writeb(value, addr)
#define WRITE_REG16(value, addr) writew(value, addr)
#define WRITE_REG32(value, addr) writel(value, addr)
#define LBA_CFG_TOK(bus,dfn) ((u32) ((bus)<<16 | (dfn)<<8))
#define LBA_CFG_BUS(tok)  ((u8) ((tok)>>16))
#define LBA_CFG_DEV(tok)  ((u8) ((tok)>>11) & 0x1f)
#define LBA_CFG_FUNC(tok) ((u8) ((tok)>>8 ) & 0x7)
#define ROPES_PER_IOC	8
#define LBA_NUM(x)    ((((unsigned long) x) >> 13) & (ROPES_PER_IOC-1))
static void
lba_dump_res(struct resource *r, int d)
static int lba_device_present(u8 bus, u8 dfn, struct lba_device *d)
#define LBA_CFG_SETUP(d, tok)
#define LBA_CFG_PROBE(d, tok)
#define LBA_MASTER_ABORT_ERROR 0xc
#define LBA_FATAL_ERROR 0x10
#define LBA_CFG_MASTER_ABORT_CHECK(d, base, tok, error)
#define LBA_CFG_TR4_ADDR_SETUP(d, addr)					\
WRITE_REG32(((addr) & ~3), (d)->hba.base_addr + LBA_PCI_CFG_ADDR);
#define LBA_CFG_ADDR_SETUP(d, addr)
#define LBA_CFG_RESTORE(d, base)
static unsigned int
lba_rd_cfg(struct lba_device *d, u32 tok, u8 reg, u32 size)
static int elroy_cfg_read(struct pci_bus *bus, unsigned int devfn, int pos, int size, u32 *data)
static void
lba_wr_cfg(struct lba_device *d, u32 tok, u8 reg, u32 data, u32 size)
static int elroy_cfg_write(struct pci_bus *bus, unsigned int devfn, int pos, int size, u32 data)
static struct pci_ops elroy_cfg_ops = ;
static int mercury_cfg_read(struct pci_bus *bus, unsigned int devfn, int pos, int size, u32 *data)
static int mercury_cfg_write(struct pci_bus *bus, unsigned int devfn, int pos, int size, u32 data)
static struct pci_ops mercury_cfg_ops = ;
static void
lba_bios_init(void)
static unsigned long
truncate_pat_collision(struct resource *root, struct resource *new)
#define truncate_pat_collision(r,n)  (0)
static void
lba_fixup_bus(struct pci_bus *bus)
static struct pci_bios_ops lba_bios_ops = ;
#define LBA_PORT_IN(size, mask) \
static u##size lba_astro_in##size (struct pci_hba_data *d, u16 addr) \
LBA_PORT_IN( 8, 3)
LBA_PORT_IN(16, 2)
LBA_PORT_IN(32, 0)
#define LBA_PORT_OUT(size, mask) \
static void lba_astro_out##size (struct pci_hba_data *d, u16 addr, u##size val) \
LBA_PORT_OUT( 8, 3)
LBA_PORT_OUT(16, 2)
LBA_PORT_OUT(32, 0)
static struct pci_port_ops lba_astro_port_ops = ;
#define PIOP_TO_GMMIO(lba, addr) \
((lba)->iop_base + (((addr)&0xFFFC)<<10) + ((addr)&3))
#undef LBA_PORT_IN
#define LBA_PORT_IN(size, mask) \
static u##size lba_pat_in##size (struct pci_hba_data *l, u16 addr) \
LBA_PORT_IN( 8, 3)
LBA_PORT_IN(16, 2)
LBA_PORT_IN(32, 0)
#undef LBA_PORT_OUT
#define LBA_PORT_OUT(size, mask) \
static void lba_pat_out##size (struct pci_hba_data *l, u16 addr, u##size val) \
LBA_PORT_OUT( 8, 3)
LBA_PORT_OUT(16, 2)
LBA_PORT_OUT(32, 0)
static struct pci_port_ops lba_pat_port_ops = ;
static void
lba_pat_resources(struct parisc_device *pa_dev, struct lba_device *lba_dev)
#define lba_pat_port_ops lba_astro_port_ops
#define lba_pat_resources(pa_dev, lba_dev)
extern void sba_distributed_lmmio(struct parisc_device *, struct resource *);
extern void sba_directed_lmmio(struct parisc_device *, struct resource *);
static void
lba_legacy_resources(struct parisc_device *pa_dev, struct lba_device *lba_dev)
static int __init
lba_hw_init(struct lba_device *d)
static unsigned int lba_next_bus = 0;
static int __init
lba_driver_probe(struct parisc_device *dev)
static struct parisc_device_id lba_tbl[] = ;
static struct parisc_driver lba_driver = ;
void __init lba_init(void)
void lba_set_iregs(struct parisc_device *lba, u32 ibase, u32 imask)
