MODULE_AUTHOR("Adrian McMenamin <adrian@mcmen.demon.co.uk>");
MODULE_DESCRIPTION("SEGA Dreamcast controller driver");
MODULE_LICENSE("GPL");
struct dc_pad ;
static void dc_pad_callback(struct mapleq *mq)
static int dc_pad_open(struct input_dev *dev)
static void dc_pad_close(struct input_dev *dev)
static int __devinit probe_maple_controller(struct device *dev)
static int __devexit remove_maple_controller(struct device *dev)
static struct maple_driver dc_pad_driver = ;
static int __init dc_pad_init(void)
static void __exit dc_pad_exit(void)
module_init(dc_pad_init);
module_exit(dc_pad_exit);
