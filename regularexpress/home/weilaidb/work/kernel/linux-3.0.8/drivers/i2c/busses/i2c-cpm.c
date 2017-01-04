#undef	I2C_CHIP_ERRATA
#define CPM_MAX_READ    513
#define CPM_MAXBD       4
#define I2C_EB			(0x10)
#define I2C_EB_CPM2		(0x30)
#define DPRAM_BASE		((u8 __iomem __force *)cpm_muram_addr(0))
struct i2c_ram ;
#define I2COM_START	0x80
#define I2COM_MASTER	0x01
#define I2CER_TXE	0x10
#define I2CER_BUSY	0x04
#define I2CER_TXB	0x02
#define I2CER_RXB	0x01
#define I2MOD_EN	0x01
struct i2c_reg ;
struct cpm_i2c ;
static irqreturn_t cpm_i2c_interrupt(int irq, void *dev_id)
static void cpm_reset_i2c_params(struct cpm_i2c *cpm)
static void cpm_i2c_force_close(struct i2c_adapter *adap)
static void cpm_i2c_parse_message(struct i2c_adapter *adap,
struct i2c_msg *pmsg, int num, int tx, int rx)
static int cpm_i2c_check_message(struct i2c_adapter *adap,
struct i2c_msg *pmsg, int tx, int rx)
static int cpm_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32 cpm_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm cpm_i2c_algo = ;
static const struct i2c_adapter cpm_ops = ;
static int __devinit cpm_i2c_setup(struct cpm_i2c *cpm)
static void cpm_i2c_shutdown(struct cpm_i2c *cpm)
static int __devinit cpm_i2c_probe(struct platform_device *ofdev)
static int __devexit cpm_i2c_remove(struct platform_device *ofdev)
static const struct of_device_id cpm_i2c_match[] = ;
MODULE_DEVICE_TABLE(of, cpm_i2c_match);
static struct platform_driver cpm_i2c_driver = ;
static int __init cpm_i2c_init(void)
static void __exit cpm_i2c_exit(void)
module_init(cpm_i2c_init);
module_exit(cpm_i2c_exit);
MODULE_AUTHOR("Jochen Friedrich <jochen@scram.de>");
MODULE_DESCRIPTION("I2C-Bus adapter routines for CPM boards");
MODULE_LICENSE("GPL");
