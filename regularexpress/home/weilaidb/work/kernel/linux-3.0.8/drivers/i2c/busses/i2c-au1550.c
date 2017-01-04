struct i2c_au1550_data ;
static int
wait_xfer_done(struct i2c_au1550_data *adap)
static int
wait_ack(struct i2c_au1550_data *adap)
static int
wait_master_done(struct i2c_au1550_data *adap)
static int
do_address(struct i2c_au1550_data *adap, unsigned int addr, int rd, int q)
static u32
wait_for_rx_byte(struct i2c_au1550_data *adap, u32 *ret_data)
static int
i2c_read(struct i2c_au1550_data *adap, unsigned char *buf,
unsigned int len)
static int
i2c_write(struct i2c_au1550_data *adap, unsigned char *buf,
unsigned int len)
static int
au1550_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs, int num)
static u32
au1550_func(struct i2c_adapter *adap)
static const struct i2c_algorithm au1550_algo = ;
static void i2c_au1550_setup(struct i2c_au1550_data *priv)
static void i2c_au1550_disable(struct i2c_au1550_data *priv)
static int __devinit
i2c_au1550_probe(struct platform_device *pdev)
static int __devexit
i2c_au1550_remove(struct platform_device *pdev)
static int
i2c_au1550_suspend(struct platform_device *pdev, pm_message_t state)
static int
i2c_au1550_resume(struct platform_device *pdev)
#define i2c_au1550_suspend	NULL
#define i2c_au1550_resume	NULL
static struct platform_driver au1xpsc_smbus_driver = ;
static int __init
i2c_au1550_init(void)
static void __exit
i2c_au1550_exit(void)
MODULE_AUTHOR("Dan Malek, Embedded Edge, LLC.");
MODULE_DESCRIPTION("SMBus adapter Alchemy pb1550");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:au1xpsc_smbus");
module_init (i2c_au1550_init);
module_exit (i2c_au1550_exit);
