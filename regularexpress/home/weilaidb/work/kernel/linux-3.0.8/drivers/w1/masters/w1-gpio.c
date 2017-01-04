static void w1_gpio_write_bit_dir(void *data, u8 bit)
static void w1_gpio_write_bit_val(void *data, u8 bit)
static u8 w1_gpio_read_bit(void *data)
static int __init w1_gpio_probe(struct platform_device *pdev)
static int __exit w1_gpio_remove(struct platform_device *pdev)
static int w1_gpio_suspend(struct platform_device *pdev, pm_message_t state)
static int w1_gpio_resume(struct platform_device *pdev)
#define w1_gpio_suspend	NULL
#define w1_gpio_resume	NULL
static struct platform_driver w1_gpio_driver = ;
static int __init w1_gpio_init(void)
static void __exit w1_gpio_exit(void)
module_init(w1_gpio_init);
module_exit(w1_gpio_exit);
MODULE_DESCRIPTION("GPIO w1 bus master driver");
MODULE_AUTHOR("Ville Syrjala <syrjala@sci.fi>");
MODULE_LICENSE("GPL");
