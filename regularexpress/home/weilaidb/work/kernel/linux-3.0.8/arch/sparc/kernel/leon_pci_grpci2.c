struct grpci2_barcfg ;
#undef GRPCI2_DEBUG_CFGACCESS
struct grpci2_regs ;
#define REGLOAD(a)	(be32_to_cpu(__raw_readl(&(a))))
#define REGSTORE(a, v)	(__raw_writel(cpu_to_be32(v), &(a)))
#define CTRL_BUS_BIT 16
#define CTRL_RESET (1<<31)
#define CTRL_SI (1<<27)
#define CTRL_PE (1<<26)
#define CTRL_EI (1<<25)
#define CTRL_ER (1<<24)
#define CTRL_BUS (0xff<<CTRL_BUS_BIT)
#define CTRL_HOSTINT 0xf
#define STS_HOST_BIT	31
#define STS_MST_BIT	30
#define STS_TAR_BIT	29
#define STS_DMA_BIT	28
#define STS_DI_BIT	27
#define STS_HI_BIT	26
#define STS_IRQMODE_BIT	24
#define STS_TRACE_BIT	23
#define STS_CFGERRVALID_BIT 20
#define STS_CFGERR_BIT	19
#define STS_INTTYPE_BIT	12
#define STS_INTSTS_BIT	8
#define STS_FDEPTH_BIT	2
#define STS_FNUM_BIT	0
#define STS_HOST	(1<<STS_HOST_BIT)
#define STS_MST		(1<<STS_MST_BIT)
#define STS_TAR		(1<<STS_TAR_BIT)
#define STS_DMA		(1<<STS_DMA_BIT)
#define STS_DI		(1<<STS_DI_BIT)
#define STS_HI		(1<<STS_HI_BIT)
#define STS_IRQMODE	(0x3<<STS_IRQMODE_BIT)
#define STS_TRACE	(1<<STS_TRACE_BIT)
#define STS_CFGERRVALID	(1<<STS_CFGERRVALID_BIT)
#define STS_CFGERR	(1<<STS_CFGERR_BIT)
#define STS_INTTYPE	(0x3f<<STS_INTTYPE_BIT)
#define STS_INTSTS	(0xf<<STS_INTSTS_BIT)
#define STS_FDEPTH	(0x7<<STS_FDEPTH_BIT)
#define STS_FNUM	(0x3<<STS_FNUM_BIT)
#define STS_ISYSERR	(1<<17)
#define STS_IDMA	(1<<16)
#define STS_IDMAERR	(1<<15)
#define STS_IMSTABRT	(1<<14)
#define STS_ITGTABRT	(1<<13)
#define STS_IPARERR	(1<<12)
#define STS_ERR_IRQ (STS_ISYSERR | STS_IMSTABRT | STS_ITGTABRT | STS_IPARERR)
struct grpci2_bd_chan ;
#define BD_CHAN_EN		0x80000000
#define BD_CHAN_TYPE		0x00300000
#define BD_CHAN_BDCNT		0x0000ffff
#define BD_CHAN_EN_BIT		31
#define BD_CHAN_TYPE_BIT	20
#define BD_CHAN_BDCNT_BIT	0
struct grpci2_bd_data ;
#define BD_DATA_EN		0x80000000
#define BD_DATA_IE		0x40000000
#define BD_DATA_DR		0x20000000
#define BD_DATA_TYPE		0x00300000
#define BD_DATA_ER		0x00080000
#define BD_DATA_LEN		0x0000ffff
#define BD_DATA_EN_BIT		31
#define BD_DATA_IE_BIT		30
#define BD_DATA_DR_BIT		29
#define BD_DATA_TYPE_BIT	20
#define BD_DATA_ER_BIT		19
#define BD_DATA_LEN_BIT		0
struct grpci2_cap_first ;
#define CAP9_CTRL_OFS 0
#define CAP9_BAR_OFS 0x4
#define CAP9_IOMAP_OFS 0x20
#define CAP9_BARSIZE_OFS 0x24
struct grpci2_priv ;
DEFINE_SPINLOCK(grpci2_dev_lock);
struct grpci2_priv *grpci2priv;
int grpci2_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static int grpci2_cfg_r32(struct grpci2_priv *priv, unsigned int bus,
unsigned int devfn, int where, u32 *val)
static int grpci2_cfg_r16(struct grpci2_priv *priv, unsigned int bus,
unsigned int devfn, int where, u32 *val)
static int grpci2_cfg_r8(struct grpci2_priv *priv, unsigned int bus,
unsigned int devfn, int where, u32 *val)
static int grpci2_cfg_w32(struct grpci2_priv *priv, unsigned int bus,
unsigned int devfn, int where, u32 val)
static int grpci2_cfg_w16(struct grpci2_priv *priv, unsigned int bus,
unsigned int devfn, int where, u32 val)
static int grpci2_cfg_w8(struct grpci2_priv *priv, unsigned int bus,
unsigned int devfn, int where, u32 val)
static int grpci2_read_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 *val)
static int grpci2_write_config(struct pci_bus *bus, unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops grpci2_ops = ;
static void grpci2_mask_irq(struct irq_data *data)
static void grpci2_unmask_irq(struct irq_data *data)
static unsigned int grpci2_startup_irq(struct irq_data *data)
static void grpci2_shutdown_irq(struct irq_data *data)
static struct irq_chip grpci2_irq = ;
static void grpci2_pci_flow_irq(unsigned int irq, struct irq_desc *desc)
static unsigned int grpci2_build_device_irq(unsigned int irq)
void grpci2_hw_init(struct grpci2_priv *priv)
static irqreturn_t grpci2_jump_interrupt(int irq, void *arg)
static irqreturn_t grpci2_err_interrupt(int irq, void *arg)
static int __devinit grpci2_of_probe(struct platform_device *ofdev)
static struct of_device_id grpci2_of_match[] = ;
static struct platform_driver grpci2_of_driver = ;
static int __init grpci2_init(void)
subsys_initcall(grpci2_init);
