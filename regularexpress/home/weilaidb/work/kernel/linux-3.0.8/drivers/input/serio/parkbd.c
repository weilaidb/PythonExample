MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Parallel port to Keyboard port adapter driver");
MODULE_LICENSE("GPL");
static unsigned int parkbd_pp_no;
module_param_named(port, parkbd_pp_no, int, 0);
MODULE_PARM_DESC(port, "Parallel port the adapter is connected to (default is 0)");
static unsigned int parkbd_mode = SERIO_8042;
module_param_named(mode, parkbd_mode, uint, 0);
MODULE_PARM_DESC(mode, "Mode of operation: XT = 0/AT = 1 (default)");
#define PARKBD_CLOCK	0x01
#define PARKBD_DATA	0x02
static int parkbd_buffer;
static int parkbd_counter;
static unsigned long parkbd_last;
static int parkbd_writing;
static unsigned long parkbd_start;
static struct pardevice *parkbd_dev;
static struct serio *parkbd_port;
static int parkbd_readlines(void)
static void parkbd_writelines(int data)
static int parkbd_write(struct serio *port, unsigned char c)
static void parkbd_interrupt(void *dev_id)
static int parkbd_getport(void)
static struct serio * __init parkbd_allocate_serio(void)
static int __init parkbd_init(void)
static void __exit parkbd_exit(void)
module_init(parkbd_init);
module_exit(parkbd_exit);
