static irqreturn_t wl1251_irq(int irq, void *cookie)
static struct spi_device *wl_to_spi(struct wl1251 *wl)
static void wl1251_spi_reset(struct wl1251 *wl)
static void wl1251_spi_wake(struct wl1251 *wl)
static void wl1251_spi_reset_wake(struct wl1251 *wl)
static void wl1251_spi_read(struct wl1251 *wl, int addr, void *buf,
size_t len)
static void wl1251_spi_write(struct wl1251 *wl, int addr, void *buf,
size_t len)
static void wl1251_spi_enable_irq(struct wl1251 *wl)
static void wl1251_spi_disable_irq(struct wl1251 *wl)
static int wl1251_spi_set_power(struct wl1251 *wl, bool enable)
static const struct wl1251_if_operations wl1251_spi_ops = ;
static int __devinit wl1251_spi_probe(struct spi_device *spi)
static int __devexit wl1251_spi_remove(struct spi_device *spi)
static struct spi_driver wl1251_spi_driver = ;
static int __init wl1251_spi_init(void)
static void __exit wl1251_spi_exit(void)
module_init(wl1251_spi_init);
module_exit(wl1251_spi_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kalle Valo <kvalo@adurom.com>");
MODULE_ALIAS("spi:wl1251");
