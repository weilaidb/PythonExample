#undef DEBUG
struct v3020;
struct v3020_chip_ops ;
#define V3020_CS	0
#define V3020_WR	1
#define V3020_RD	2
#define V3020_IO	3
struct v3020_gpio ;
struct v3020 ;
static int v3020_mmio_map(struct v3020 *chip, struct platform_device *pdev,
struct v3020_platform_data *pdata)
static void v3020_mmio_unmap(struct v3020 *chip)
static void v3020_mmio_write_bit(struct v3020 *chip, unsigned char bit)
static unsigned char v3020_mmio_read_bit(struct v3020 *chip)
static struct v3020_chip_ops v3020_mmio_ops = ;
static struct v3020_gpio v3020_gpio[] = ;
static int v3020_gpio_map(struct v3020 *chip, struct platform_device *pdev,
struct v3020_platform_data *pdata)
static void v3020_gpio_unmap(struct v3020 *chip)
static void v3020_gpio_write_bit(struct v3020 *chip, unsigned char bit)
static unsigned char v3020_gpio_read_bit(struct v3020 *chip)
static struct v3020_chip_ops v3020_gpio_ops = ;
static void v3020_set_reg(struct v3020 *chip, unsigned char address,
unsigned char data)
static unsigned char v3020_get_reg(struct v3020 *chip, unsigned char address)
static int v3020_read_time(struct device *dev, struct rtc_time *dt)
static int v3020_set_time(struct device *dev, struct rtc_time *dt)
static const struct rtc_class_ops v3020_rtc_ops = ;
static int rtc_probe(struct platform_device *pdev)
static int rtc_remove(struct platform_device *dev)
static struct platform_driver rtc_device_driver = ;
static __init int v3020_init(void)
static __exit void v3020_exit(void)
module_init(v3020_init);
module_exit(v3020_exit);
MODULE_DESCRIPTION("V3020 RTC");
MODULE_AUTHOR("Raphael Assenat");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:v3020");
