#define I2CSCR		0x0
#define I2CMCR		0x4
#define I2CSSR		0x8
#define I2CMSR		0xC
#define I2CSIER		0x10
#define I2CMIER		0x14
#define I2CCCR		0x18
#define I2CSAR		0x1c
#define I2CMAR		0x20
#define I2CRXTX		0x24
#define I2CFCR		0x28
#define I2CFSR		0x2C
#define I2CFIER		0x30
#define I2CRFDR		0x34
#define I2CTFDR		0x38
#define REGSIZE		0x3C
#define MCR_MDBS	0x80
#define MCR_FSCL	0x40
#define MCR_FSDA	0x20
#define MCR_OBPC	0x10
#define MCR_MIE		0x08
#define MCR_TSBE	0x04
#define MCR_FSB		0x02
#define MCR_ESG		0x01
#define MSR_MNR		0x40
#define MSR_MAL		0x20
#define MSR_MST		0x10
#define MSR_MDE		0x08
#define MSR_MDT		0x04
#define MSR_MDR		0x02
#define MSR_MAT		0x01
#define MIE_MNRE	0x40
#define MIE_MALE	0x20
#define MIE_MSTE	0x10
#define MIE_MDEE	0x08
#define MIE_MDTE	0x04
#define MIE_MDRE	0x02
#define MIE_MATE	0x01
#define FCR_RFRST	0x02
#define FCR_TFRST	0x01
#define FSR_TEND	0x04
#define FSR_RDF		0x02
#define FSR_TDFE	0x01
#define FIER_TEIE	0x04
#define FIER_RXIE	0x02
#define FIER_TXIE	0x01
#define FIFO_SIZE	16
struct cami2c ;
static inline void OUT32(struct cami2c *cam, int reg, unsigned long val)
static inline unsigned long IN32(struct cami2c *cam, int reg)
static irqreturn_t sh7760_i2c_irq(int irq, void *ptr)
static void sh7760_i2c_mrecv(struct cami2c *id)
static void sh7760_i2c_msend(struct cami2c *id)
static inline int sh7760_i2c_busy_check(struct cami2c *id)
static int sh7760_i2c_master_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs,
int num)
static u32 sh7760_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm sh7760_i2c_algo = ;
static int __devinit calc_CCR(unsigned long scl_hz)
static int __devinit sh7760_i2c_probe(struct platform_device *pdev)
static int __devexit sh7760_i2c_remove(struct platform_device *pdev)
static struct platform_driver sh7760_i2c_drv = ;
static int __init sh7760_i2c_init(void)
static void __exit sh7760_i2c_exit(void)
module_init(sh7760_i2c_init);
module_exit(sh7760_i2c_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SH7760 I2C bus driver");
MODULE_AUTHOR("Manuel Lauss <mano@roarinelk.homelinux.net>");
