#define POWER_IS_ON(pwr)	((pwr) <= FB_BLANK_NORMAL)
struct ltv350qv ;
static int ltv350qv_write_reg(struct ltv350qv *lcd, u8 reg, u16 val)
static int ltv350qv_power_on(struct ltv350qv *lcd)
static int ltv350qv_power_off(struct ltv350qv *lcd)
static int ltv350qv_power(struct ltv350qv *lcd, int power)
static int ltv350qv_set_power(struct lcd_device *ld, int power)
static int ltv350qv_get_power(struct lcd_device *ld)
static struct lcd_ops ltv_ops = ;
static int __devinit ltv350qv_probe(struct spi_device *spi)
static int __devexit ltv350qv_remove(struct spi_device *spi)
static int ltv350qv_suspend(struct spi_device *spi, pm_message_t state)
static int ltv350qv_resume(struct spi_device *spi)
#define ltv350qv_suspend	NULL
#define ltv350qv_resume		NULL
static void ltv350qv_shutdown(struct spi_device *spi)
static struct spi_driver ltv350qv_driver = ;
static int __init ltv350qv_init(void)
static void __exit ltv350qv_exit(void)
module_init(ltv350qv_init);
module_exit(ltv350qv_exit);
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_DESCRIPTION("Samsung LTV350QV LCD Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:ltv350qv");
