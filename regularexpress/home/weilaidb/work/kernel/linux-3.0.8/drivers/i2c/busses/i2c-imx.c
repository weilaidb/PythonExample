#define DRIVER_NAME "imx-i2c"
#define IMX_I2C_BIT_RATE	100000
#define IMX_I2C_IADR	0x00
#define IMX_I2C_IFDR	0x04
#define IMX_I2C_I2CR	0x08
#define IMX_I2C_I2SR	0x0C
#define IMX_I2C_I2DR	0x10
#define I2SR_RXAK	0x01
#define I2SR_IIF	0x02
#define I2SR_SRW	0x04
#define I2SR_IAL	0x10
#define I2SR_IBB	0x20
#define I2SR_IAAS	0x40
#define I2SR_ICF	0x80
#define I2CR_RSTA	0x04
#define I2CR_TXAK	0x08
#define I2CR_MTX	0x10
#define I2CR_MSTA	0x20
#define I2CR_IIEN	0x40
#define I2CR_IEN	0x80
static u16 __initdata i2c_clk_div[50][2] = ;
struct imx_i2c_struct ;
static int i2c_imx_bus_busy(struct imx_i2c_struct *i2c_imx, int for_busy)
static int i2c_imx_trx_complete(struct imx_i2c_struct *i2c_imx)
static int i2c_imx_acked(struct imx_i2c_struct *i2c_imx)
static int i2c_imx_start(struct imx_i2c_struct *i2c_imx)
static void i2c_imx_stop(struct imx_i2c_struct *i2c_imx)
static void __init i2c_imx_set_clk(struct imx_i2c_struct *i2c_imx,
unsigned int rate)
static irqreturn_t i2c_imx_isr(int irq, void *dev_id)
static int i2c_imx_write(struct imx_i2c_struct *i2c_imx, struct i2c_msg *msgs)
static int i2c_imx_read(struct imx_i2c_struct *i2c_imx, struct i2c_msg *msgs)
static int i2c_imx_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs, int num)
static u32 i2c_imx_func(struct i2c_adapter *adapter)
static struct i2c_algorithm i2c_imx_algo = ;
static int __init i2c_imx_probe(struct platform_device *pdev)
static int __exit i2c_imx_remove(struct platform_device *pdev)
static struct platform_driver i2c_imx_driver = ;
static int __init i2c_adap_imx_init(void)
subsys_initcall(i2c_adap_imx_init);
static void __exit i2c_adap_imx_exit(void)
module_exit(i2c_adap_imx_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Darius Augulis");
MODULE_DESCRIPTION("I2C adapter driver for IMX I2C bus");
MODULE_ALIAS("platform:" DRIVER_NAME);
