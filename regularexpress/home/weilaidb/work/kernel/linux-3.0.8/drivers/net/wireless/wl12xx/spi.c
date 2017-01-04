#define WSPI_CMD_READ                 0x40000000
#define WSPI_CMD_WRITE                0x00000000
#define WSPI_CMD_FIXED                0x20000000
#define WSPI_CMD_BYTE_LENGTH          0x1FFE0000
#define WSPI_CMD_BYTE_LENGTH_OFFSET   17
#define WSPI_CMD_BYTE_ADDR            0x0001FFFF
#define WSPI_INIT_CMD_CRC_LEN       5
#define WSPI_INIT_CMD_START         0x00
#define WSPI_INIT_CMD_TX            0x40
#define WSPI_INIT_CMD_BYPASS_BIT    0x80
#define WSPI_INIT_CMD_FIXEDBUSY_LEN 0x07
#define WSPI_INIT_CMD_EN_FIXEDBUSY  0x80
#define WSPI_INIT_CMD_DIS_FIXEDBUSY 0x00
#define WSPI_INIT_CMD_IOD           0x40
#define WSPI_INIT_CMD_IP            0x20
#define WSPI_INIT_CMD_CS            0x10
#define WSPI_INIT_CMD_WS            0x08
#define WSPI_INIT_CMD_WSPI          0x01
#define WSPI_INIT_CMD_END           0x01
#define WSPI_INIT_CMD_LEN           8
#define HW_ACCESS_WSPI_FIXED_BUSY_LEN \
((WL1271_BUSY_WORD_LEN - 4) / sizeof(u32))
#define HW_ACCESS_WSPI_INIT_CMD_MASK  0
#define WSPI_MAX_CHUNK_SIZE    4092
#define WSPI_MAX_NUM_OF_CHUNKS (WL1271_AGGR_BUFFER_SIZE / WSPI_MAX_CHUNK_SIZE)
static inline struct spi_device *wl_to_spi(struct wl1271 *wl)
static struct device *wl1271_spi_wl_to_dev(struct wl1271 *wl)
static void wl1271_spi_disable_interrupts(struct wl1271 *wl)
static void wl1271_spi_enable_interrupts(struct wl1271 *wl)
static void wl1271_spi_reset(struct wl1271 *wl)
static void wl1271_spi_init(struct wl1271 *wl)
#define WL1271_BUSY_WORD_TIMEOUT 1000
static int wl1271_spi_read_busy(struct wl1271 *wl)
static void wl1271_spi_raw_read(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static void wl1271_spi_raw_write(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static irqreturn_t wl1271_hardirq(int irq, void *cookie)
static int wl1271_spi_set_power(struct wl1271 *wl, bool enable)
static struct wl1271_if_operations spi_ops = ;
static int __devinit wl1271_probe(struct spi_device *spi)
static int __devexit wl1271_remove(struct spi_device *spi)
static struct spi_driver wl1271_spi_driver = ;
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
MODULE_ALIAS("spi:wl1271");
