static int debug;
#define DRIVER_VERSION "v1.3"
#define DRIVER_AUTHOR "Greg Kroah-Hartman <greg@kroah.com>, Gary Brubaker <xavyer@ix.netcom.com>"
#define DRIVER_DESC "USB Empeg Mark I/II Driver"
#define EMPEG_VENDOR_ID			0x084f
#define EMPEG_PRODUCT_ID		0x0001
static int  empeg_startup(struct usb_serial *serial);
static void empeg_init_termios(struct tty_struct *tty);
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver empeg_driver = ;
static struct usb_serial_driver empeg_device = ;
static int empeg_startup(struct usb_serial *serial)
static void empeg_init_termios(struct tty_struct *tty)
static int __init empeg_init(void)
static void __exit empeg_exit(void)
module_init(empeg_init);
module_exit(empeg_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");
