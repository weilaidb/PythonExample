#define SDIO_VENDOR_ID_TI		0x0097
#define SDIO_DEVICE_ID_TI_WL1271	0x4076
static const struct sdio_device_id wl1271_devices[] = ;
MODULE_DEVICE_TABLE(sdio, wl1271_devices);
static void wl1271_sdio_set_block_size(struct wl1271 *wl, unsigned int blksz)
static inline struct sdio_func *wl_to_func(struct wl1271 *wl)
static struct device *wl1271_sdio_wl_to_dev(struct wl1271 *wl)
static irqreturn_t wl1271_hardirq(int irq, void *cookie)
static void wl1271_sdio_disable_interrupts(struct wl1271 *wl)
static void wl1271_sdio_enable_interrupts(struct wl1271 *wl)
static void wl1271_sdio_reset(struct wl1271 *wl)
static void wl1271_sdio_init(struct wl1271 *wl)
static void wl1271_sdio_raw_read(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static void wl1271_sdio_raw_write(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static int wl1271_sdio_power_on(struct wl1271 *wl)
static int wl1271_sdio_power_off(struct wl1271 *wl)
static int wl1271_sdio_set_power(struct wl1271 *wl, bool enable)
static struct wl1271_if_operations sdio_ops = ;
static int __devinit wl1271_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void __devexit wl1271_remove(struct sdio_func *func)
static int wl1271_suspend(struct device *dev)
static int wl1271_resume(struct device *dev)
static const struct dev_pm_ops wl1271_sdio_pm_ops = ;
static struct sdio_driver wl1271_sdio_driver = ;
static int __init wl1271_init(void)
static void __exit wl1271_exit(void)
module_init(wl1271_init);
module_exit(wl1271_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Luciano Coelho <coelho@ti.com>");
MODULE_AUTHOR("Juuso Oikarinen <juuso.oikarinen@nokia.com>");
MODULE_FIRMWARE(WL1271_FW_NAME);
MODULE_FIRMWARE(WL128X_FW_NAME);
MODULE_FIRMWARE(WL127X_AP_FW_NAME);
MODULE_FIRMWARE(WL128X_AP_FW_NAME);
