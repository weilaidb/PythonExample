MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_DESCRIPTION("TI BQ4802 RTC driver");
MODULE_LICENSE("GPL");
struct bq4802 ;
static u8 bq4802_read_io(struct bq4802 *p, int off)
static void bq4802_write_io(struct bq4802 *p, int off, u8 val)
static u8 bq4802_read_mem(struct bq4802 *p, int off)
static void bq4802_write_mem(struct bq4802 *p, int off, u8 val)
static int bq4802_read_time(struct device *dev, struct rtc_time *tm)
static int bq4802_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops bq4802_ops = ;
static int __devinit bq4802_probe(struct platform_device *pdev)
static int __devexit bq4802_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:rtc-bq4802");
static struct platform_driver bq4802_driver = ;
static int __init bq4802_init(void)
static void __exit bq4802_exit(void)
module_init(bq4802_init);
module_exit(bq4802_exit);
