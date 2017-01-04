#define SDIO_VENDOR_ID_TI		0x0097
#define SDIO_DEVICE_ID_TI_WL1271	0x4076
static bool rx, tx;
module_param(rx, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(rx, "Perform rx test. Default (0). "
"This test continuously reads data from the SDIO device.\n");
module_param(tx, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(tx, "Perform tx test. Default (0). "
"This test continuously writes data to the SDIO device.\n");
struct wl1271_test ;
static const struct sdio_device_id wl1271_devices[] = ;
static inline struct sdio_func *wl_to_func(struct wl1271 *wl)
static struct device *wl1271_sdio_wl_to_dev(struct wl1271 *wl)
static void wl1271_sdio_raw_read(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static void wl1271_sdio_raw_write(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static int wl1271_sdio_set_power(struct wl1271 *wl, bool enable)
static void wl1271_sdio_disable_interrupts(struct wl1271 *wl)
static void wl1271_sdio_enable_interrupts(struct wl1271 *wl)
static struct wl1271_if_operations sdio_ops = ;
static void wl1271_fw_wakeup(struct wl1271 *wl)
static int wl1271_fetch_firmware(struct wl1271 *wl)
static int wl1271_fetch_nvs(struct wl1271 *wl)
static int wl1271_chip_wakeup(struct wl1271 *wl)
static struct wl1271_partition_set part_down = ;
static int tester(void *data)
static int __devinit wl1271_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void __devexit wl1271_remove(struct sdio_func *func)
static struct sdio_driver wl1271_sdio_driver = ;
static int __init wl1271_init(void)
module_init(wl1271_init);
static void __exit wl1271_exit(void)
module_exit(wl1271_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Roger Quadros <roger.quadros@nokia.com>");
