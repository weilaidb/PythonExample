struct of_serial_info ;
static int __devinit of_platform_serial_setup(struct platform_device *ofdev,
int type, struct uart_port *port)
static struct of_device_id of_platform_serial_table[];
static int __devinit of_platform_serial_probe(struct platform_device *ofdev)
static int of_platform_serial_remove(struct platform_device *ofdev)
static struct of_device_id __devinitdata of_platform_serial_table[] = ;
static struct platform_driver of_platform_serial_driver = ;
static int __init of_platform_serial_init(void)
module_init(of_platform_serial_init);
static void __exit of_platform_serial_exit(void)
;
module_exit(of_platform_serial_exit);
MODULE_AUTHOR("Arnd Bergmann <arnd@arndb.de>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Serial Port driver for Open Firmware platform devices");
