#define PORT(base, int)							\
static struct plat_serial8250_port uart8250_data[] = ;
static struct platform_device uart8250_device = ;
static int __init uart8250_init(void)
module_init(uart8250_init);
MODULE_AUTHOR("Ralf Baechle <ralf@linux-mips.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic 8250 UART probe driver");
