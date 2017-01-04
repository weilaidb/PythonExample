#define TWI_CLOCK		100000
static struct clk *twi_clk;
static void __iomem *twi_base;
#define at91_twi_read(reg)		__raw_readl(twi_base + (reg))
#define at91_twi_write(reg, val)	__raw_writel((val), twi_base + (reg))
static void __devinit at91_twi_hwinit(void)
static short at91_poll_status(unsigned long bit)
static int xfer_read(struct i2c_adapter *adap, unsigned char *buf, int length)
static int xfer_write(struct i2c_adapter *adap, unsigned char *buf, int length)
static int at91_xfer(struct i2c_adapter *adap, struct i2c_msg *pmsg, int num)
static u32 at91_func(struct i2c_adapter *adapter)
static struct i2c_algorithm at91_algorithm = ;
static int __devinit at91_i2c_probe(struct platform_device *pdev)
static int __devexit at91_i2c_remove(struct platform_device *pdev)
static int at91_i2c_suspend(struct platform_device *pdev, pm_message_t mesg)
static int at91_i2c_resume(struct platform_device *pdev)
#define at91_i2c_suspend	NULL
#define at91_i2c_resume		NULL
MODULE_ALIAS("platform:at91_i2c");
static struct platform_driver at91_i2c_driver = ;
static int __init at91_i2c_init(void)
static void __exit at91_i2c_exit(void)
module_init(at91_i2c_init);
module_exit(at91_i2c_exit);
MODULE_AUTHOR("Rick Bronson");
MODULE_DESCRIPTION("I2C (TWI) driver for Atmel AT91");
MODULE_LICENSE("GPL");
