struct s3c24xx_gpio_led ;
static inline struct s3c24xx_gpio_led *pdev_to_gpio(struct platform_device *dev)
static inline struct s3c24xx_gpio_led *to_gpio(struct led_classdev *led_cdev)
static void s3c24xx_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int s3c24xx_led_remove(struct platform_device *dev)
static int s3c24xx_led_probe(struct platform_device *dev)
static struct platform_driver s3c24xx_led_driver = ;
static int __init s3c24xx_led_init(void)
static void __exit s3c24xx_led_exit(void)
module_init(s3c24xx_led_init);
module_exit(s3c24xx_led_exit);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("S3C24XX LED driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c24xx_led");
