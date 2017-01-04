struct i2c_pca_pf_data ;
static int i2c_pca_pf_readbyte8(void *pd, int reg)
static int i2c_pca_pf_readbyte16(void *pd, int reg)
static int i2c_pca_pf_readbyte32(void *pd, int reg)
static void i2c_pca_pf_writebyte8(void *pd, int reg, int val)
static void i2c_pca_pf_writebyte16(void *pd, int reg, int val)
static void i2c_pca_pf_writebyte32(void *pd, int reg, int val)
static int i2c_pca_pf_waitforcompletion(void *pd)
static void i2c_pca_pf_dummyreset(void *pd)
static void i2c_pca_pf_resetchip(void *pd)
static irqreturn_t i2c_pca_pf_handler(int this_irq, void *dev_id)
static int __devinit i2c_pca_pf_probe(struct platform_device *pdev)
static int __devexit i2c_pca_pf_remove(struct platform_device *pdev)
static struct platform_driver i2c_pca_pf_driver = ;
static int __init i2c_pca_pf_init(void)
static void __exit i2c_pca_pf_exit(void)
MODULE_AUTHOR("Wolfram Sang <w.sang@pengutronix.de>");
MODULE_DESCRIPTION("I2C-PCA9564/PCA9665 platform driver");
MODULE_LICENSE("GPL");
module_init(i2c_pca_pf_init);
module_exit(i2c_pca_pf_exit);
