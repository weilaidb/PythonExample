#define SDIO_VENDOR_ID_TI		0x104c
#define SDIO_DEVICE_ID_TI_WL1251	0x9066
struct wl1251_sdio ;
static struct sdio_func *wl_to_func(struct wl1251 *wl)
static void wl1251_sdio_interrupt(struct sdio_func *func)
static const struct sdio_device_id wl1251_devices[] = ;
MODULE_DEVICE_TABLE(sdio, wl1251_devices);
static void wl1251_sdio_read(struct wl1251 *wl, int addr,
void *buf, size_t len)
static void wl1251_sdio_write(struct wl1251 *wl, int addr,
void *buf, size_t len)
static void wl1251_sdio_read_elp(struct wl1251 *wl, int addr, u32 *val)
static void wl1251_sdio_write_elp(struct wl1251 *wl, int addr, u32 val)
static void wl1251_sdio_reset(struct wl1251 *wl)
static void wl1251_sdio_enable_irq(struct wl1251 *wl)
static void wl1251_sdio_disable_irq(struct wl1251 *wl)
static irqreturn_t wl1251_line_irq(int irq, void *cookie)
static void wl1251_enable_line_irq(struct wl1251 *wl)
static void wl1251_disable_line_irq(struct wl1251 *wl)
static int wl1251_sdio_set_power(struct wl1251 *wl, bool enable)
static struct wl1251_if_operations wl1251_sdio_ops = ;
static int wl1251_sdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void __devexit wl1251_sdio_remove(struct sdio_func *func)
static int wl1251_suspend(struct device *dev)
static int wl1251_resume(struct device *dev)
static const struct dev_pm_ops wl1251_sdio_pm_ops = ;
static struct sdio_driver wl1251_sdio_driver = ;
static int __init wl1251_sdio_init(void)
static void __exit wl1251_sdio_exit(void)
module_init(wl1251_sdio_init);
module_exit(wl1251_sdio_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kalle Valo <kvalo@adurom.com>");
