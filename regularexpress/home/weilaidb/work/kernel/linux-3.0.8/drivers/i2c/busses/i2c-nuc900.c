#define CSR		0x00
#define DIVIDER		0x04
#define CMDR		0x08
#define SWR		0x0C
#define RXR		0x10
#define TXR		0x14
#define IRQEN		0x003
#define I2CBUSY		0x400
#define I2CSTART	0x018
#define IRQFLAG		0x004
#define ARBIT_LOST	0x200
#define SLAVE_ACK	0x800
#define I2C_CMD_START	0x10
#define I2C_CMD_STOP	0x08
#define I2C_CMD_READ	0x04
#define I2C_CMD_WRITE	0x02
#define I2C_CMD_NACK	0x01
enum nuc900_i2c_state ;
struct nuc900_i2c ;
static inline void nuc900_i2c_master_complete(struct nuc900_i2c *i2c, int ret)
static inline void nuc900_i2c_disable_irq(struct nuc900_i2c *i2c)
static inline void nuc900_i2c_enable_irq(struct nuc900_i2c *i2c)
static void nuc900_i2c_message_start(struct nuc900_i2c *i2c,
struct i2c_msg *msg)
static inline void nuc900_i2c_stop(struct nuc900_i2c *i2c, int ret)
static inline int is_lastmsg(struct nuc900_i2c *i2c)
static inline int is_msglast(struct nuc900_i2c *i2c)
static inline int is_msgend(struct nuc900_i2c *i2c)
static void i2c_nuc900_irq_nextbyte(struct nuc900_i2c *i2c,
unsigned long iicstat)
static irqreturn_t nuc900_i2c_irq(int irqno, void *dev_id)
static int nuc900_i2c_set_master(struct nuc900_i2c *i2c)
static int nuc900_i2c_doxfer(struct nuc900_i2c *i2c,
struct i2c_msg *msgs, int num)
static int nuc900_i2c_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs, int num)
static u32 nuc900_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm nuc900_i2c_algorithm = ;
static int __devinit nuc900_i2c_probe(struct platform_device *pdev)
static int __devexit nuc900_i2c_remove(struct platform_device *pdev)
static struct platform_driver nuc900_i2c_driver = ;
static int __init i2c_adap_nuc900_init(void)
static void __exit i2c_adap_nuc900_exit(void)
subsys_initcall(i2c_adap_nuc900_init);
module_exit(i2c_adap_nuc900_exit);
MODULE_DESCRIPTION("NUC900 I2C Bus driver");
MODULE_AUTHOR("Wan ZongShun, <mcuos.com-Re5JQEeQqe8AvxtiuMwx3w@public.gmane.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-i2c0");
