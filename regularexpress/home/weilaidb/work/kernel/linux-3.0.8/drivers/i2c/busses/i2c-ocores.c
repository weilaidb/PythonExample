struct ocores_i2c ;
#define OCI2C_PRELOW		0
#define OCI2C_PREHIGH		1
#define OCI2C_CONTROL		2
#define OCI2C_DATA		3
#define OCI2C_CMD		4
#define OCI2C_STATUS		4
#define OCI2C_CTRL_IEN		0x40
#define OCI2C_CTRL_EN		0x80
#define OCI2C_CMD_START		0x91
#define OCI2C_CMD_STOP		0x41
#define OCI2C_CMD_READ		0x21
#define OCI2C_CMD_WRITE		0x11
#define OCI2C_CMD_READ_ACK	0x21
#define OCI2C_CMD_READ_NACK	0x29
#define OCI2C_CMD_IACK		0x01
#define OCI2C_STAT_IF		0x01
#define OCI2C_STAT_TIP		0x02
#define OCI2C_STAT_ARBLOST	0x20
#define OCI2C_STAT_BUSY		0x40
#define OCI2C_STAT_NACK		0x80
#define STATE_DONE		0
#define STATE_START		1
#define STATE_WRITE		2
#define STATE_READ		3
#define STATE_ERROR		4
static inline void oc_setreg(struct ocores_i2c *i2c, int reg, u8 value)
static inline u8 oc_getreg(struct ocores_i2c *i2c, int reg)
static void ocores_process(struct ocores_i2c *i2c)
static irqreturn_t ocores_isr(int irq, void *dev_id)
static int ocores_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static void ocores_init(struct ocores_i2c *i2c)
static u32 ocores_func(struct i2c_adapter *adap)
static const struct i2c_algorithm ocores_algorithm = ;
static struct i2c_adapter ocores_adapter = ;
static int ocores_i2c_of_probe(struct platform_device* pdev,
struct ocores_i2c* i2c)
#define ocores_i2c_of_probe(pdev,i2c) -ENODEV
static int __devinit ocores_i2c_probe(struct platform_device *pdev)
static int __devexit ocores_i2c_remove(struct platform_device* pdev)
static int ocores_i2c_suspend(struct platform_device *pdev, pm_message_t state)
static int ocores_i2c_resume(struct platform_device *pdev)
#define ocores_i2c_suspend	NULL
#define ocores_i2c_resume	NULL
static struct of_device_id ocores_i2c_match[] = ;
MODULE_DEVICE_TABLE(of, ocores_i2c_match);
MODULE_ALIAS("platform:ocores-i2c");
static struct platform_driver ocores_i2c_driver = ;
static int __init ocores_i2c_init(void)
static void __exit ocores_i2c_exit(void)
module_init(ocores_i2c_init);
module_exit(ocores_i2c_exit);
MODULE_AUTHOR("Peter Korsgaard <jacmet@sunsite.dk>");
MODULE_DESCRIPTION("OpenCores I2C bus driver");
MODULE_LICENSE("GPL");
