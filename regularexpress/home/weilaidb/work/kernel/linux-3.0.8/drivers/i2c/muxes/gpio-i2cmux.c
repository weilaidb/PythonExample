struct gpiomux ;
static void gpiomux_set(const struct gpiomux *mux, unsigned val)
static int gpiomux_select(struct i2c_adapter *adap, void *data, u32 chan)
static int gpiomux_deselect(struct i2c_adapter *adap, void *data, u32 chan)
static int __devinit gpiomux_probe(struct platform_device *pdev)
static int __devexit gpiomux_remove(struct platform_device *pdev)
static struct platform_driver gpiomux_driver = ;
static int __init gpiomux_init(void)
static void __exit gpiomux_exit(void)
module_init(gpiomux_init);
module_exit(gpiomux_exit);
MODULE_DESCRIPTION("GPIO-based I2C multiplexer driver");
MODULE_AUTHOR("Peter Korsgaard <peter.korsgaard@barco.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:gpio-i2cmux");
