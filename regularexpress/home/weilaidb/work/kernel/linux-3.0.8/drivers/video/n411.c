static unsigned long dio_addr;
static unsigned long cio_addr;
static unsigned long c2io_addr;
static unsigned long splashval;
static unsigned int nosplash;
static unsigned char ctl;
static void n411_set_ctl(struct hecubafb_par *par, unsigned char bit, unsigned
char state)
static unsigned char n411_get_ctl(struct hecubafb_par *par)
static void n411_set_data(struct hecubafb_par *par, unsigned char value)
static void n411_wait_for_ack(struct hecubafb_par *par, int clear)
static int n411_init_control(struct hecubafb_par *par)
static int n411_init_board(struct hecubafb_par *par)
static struct hecuba_board n411_board = ;
static struct platform_device *n411_device;
static int __init n411_init(void)
static void __exit n411_exit(void)
module_init(n411_init);
module_exit(n411_exit);
module_param(nosplash, uint, 0);
MODULE_PARM_DESC(nosplash, "Disable doing the splash screen");
module_param(dio_addr, ulong, 0);
MODULE_PARM_DESC(dio_addr, "IO address for data, eg: 0x480");
module_param(cio_addr, ulong, 0);
MODULE_PARM_DESC(cio_addr, "IO address for control, eg: 0x400");
module_param(c2io_addr, ulong, 0);
MODULE_PARM_DESC(c2io_addr, "IO address for secondary control, eg: 0x408");
module_param(splashval, ulong, 0);
MODULE_PARM_DESC(splashval, "Splash pattern: 0x00 is black, 0x01 is white");
MODULE_DESCRIPTION("board driver for n411 hecuba/apollo epd kit");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");
