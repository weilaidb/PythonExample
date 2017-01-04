static struct plat_serial8250_port uart8250_data[5];
static struct platform_device uart8250_device = ;
static int __init uart8250_init(void)
module_init(uart8250_init);
MODULE_AUTHOR("Aurelien Jarno <aurelien@aurel32.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("8250 UART probe driver for the BCM47XX platforms");
