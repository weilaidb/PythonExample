MODULE_AUTHOR("Adrian McMenamin <adrian@mcmen.demon.co.uk>");
MODULE_DESCRIPTION("SEGA Dreamcast mouse driver");
MODULE_LICENSE("GPL");
struct dc_mouse ;
static void dc_mouse_callback(struct mapleq *mq)
static int dc_mouse_open(struct input_dev *dev)
static void dc_mouse_close(struct input_dev *dev)
static int __devinit probe_maple_mouse(struct device *dev)
static int __devexit remove_maple_mouse(struct device *dev)
static struct maple_driver dc_mouse_driver = ;
static int __init dc_mouse_init(void)
static void __exit dc_mouse_exit(void)
module_init(dc_mouse_init);
module_exit(dc_mouse_exit);
