#define REG_REV		0x00
#define REG_IOSEL_1	0x04
#define REG_IOSEL_2	0x08
#define REG_PREDIV	0x0c
#define REG_INTR_ST	0x10
#define REG_INTR_EN	0x14
#define REG_TEST_CTRL	0x18
#define PORT_CFG_2	0x00
#define PORT_ADDR	0x04
#define PORT_DATA	0x08
#define PORT_CFG_1	0x0c
#define PORT_STATE	0x10
#define SSP_PORT_CONFIG_MASK	(SSP_EARLY_DIN | SSP_DELAY_DOUT)
#define SSP_PORT_CLKRATE_MASK	0x0f
#define SSP_SEQRAM_WR_EN	BIT(4)
#define SSP_SEQRAM_RD_EN	BIT(5)
#define SSP_START		BIT(15)
#define SSP_BUSY		BIT(10)
#define SSP_PORT_ASL		BIT(7)
#define SSP_PORT_CFO1		BIT(6)
#define SSP_PORT_SEQRAM_SIZE	32
static const int ssp_port_base[]   = ;
static const int ssp_port_seqram[] = ;
struct ti_ssp ;
static inline struct ti_ssp *dev_to_ssp(struct device *dev)
static inline int dev_to_port(struct device *dev)
static inline u32 ssp_read(struct ti_ssp *ssp, int reg)
static inline void ssp_write(struct ti_ssp *ssp, int reg, u32 val)
static inline void ssp_rmw(struct ti_ssp *ssp, int reg, u32 mask, u32 bits)
static inline u32 ssp_port_read(struct ti_ssp *ssp, int port, int reg)
static inline void ssp_port_write(struct ti_ssp *ssp, int port, int reg,
u32 val)
static inline void ssp_port_rmw(struct ti_ssp *ssp, int port, int reg,
u32 mask, u32 bits)
static inline void ssp_port_clr_bits(struct ti_ssp *ssp, int port, int reg,
u32 bits)
static inline void ssp_port_set_bits(struct ti_ssp *ssp, int port, int reg,
u32 bits)
static int __set_mode(struct ti_ssp *ssp, int port, int mode)
int ti_ssp_set_mode(struct device *dev, int mode)
EXPORT_SYMBOL(ti_ssp_set_mode);
static void __set_iosel2(struct ti_ssp *ssp, u32 mask, u32 val)
static void __set_iosel(struct ti_ssp *ssp, int port, u32 iosel)
int ti_ssp_set_iosel(struct device *dev, u32 iosel)
EXPORT_SYMBOL(ti_ssp_set_iosel);
int ti_ssp_load(struct device *dev, int offs, u32* prog, int len)
EXPORT_SYMBOL(ti_ssp_load);
int ti_ssp_raw_read(struct device *dev)
EXPORT_SYMBOL(ti_ssp_raw_read);
int ti_ssp_raw_write(struct device *dev, u32 val)
EXPORT_SYMBOL(ti_ssp_raw_write);
static inline int __xfer_done(struct ti_ssp *ssp, int port)
int ti_ssp_run(struct device *dev, u32 pc, u32 input, u32 *output)
EXPORT_SYMBOL(ti_ssp_run);
static irqreturn_t ti_ssp_interrupt(int irq, void *dev_data)
static int __devinit ti_ssp_probe(struct platform_device *pdev)
static int __devexit ti_ssp_remove(struct platform_device *pdev)
static struct platform_driver ti_ssp_driver = ;
static int __init ti_ssp_init(void)
module_init(ti_ssp_init);
static void __exit ti_ssp_exit(void)
module_exit(ti_ssp_exit);
MODULE_DESCRIPTION("Sequencer Serial Port (SSP) Driver");
MODULE_AUTHOR("Cyril Chemparathy");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ti-ssp");
