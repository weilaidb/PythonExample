#define DRIVERNAME		"pti"
#define PCINAME			"pciPTI"
#define TTYNAME			"ttyPTI"
#define CHARNAME		"pti"
#define PTITTY_MINOR_START	0
#define PTITTY_MINOR_NUM	2
#define MAX_APP_IDS		16
#define MAX_OS_IDS		16
#define MAX_MODEM_IDS		16
#define MODEM_BASE_ID		71
#define CONTROL_ID		72
#define CONSOLE_ID		73
#define OS_BASE_ID		74
#define APP_BASE_ID		80
#define CONTROL_FRAME_LEN	32
#define USER_COPY_SIZE		8192
#define APERTURE_14		0x3800000
#define APERTURE_LEN		0x400000
struct pti_tty ;
struct pti_dev ;
static DEFINE_MUTEX(alloclock);
static struct pci_device_id pci_ids[] __devinitconst = ;
static struct tty_driver *pti_tty_driver;
static struct pti_dev *drv_data;
static unsigned int pti_console_channel;
static unsigned int pti_control_channel;
static void pti_write_to_aperture(struct pti_masterchannel *mc,
u8 *buf,
int len)
static void pti_control_frame_built_and_sent(struct pti_masterchannel *mc)
static void pti_write_full_frame_to_aperture(struct pti_masterchannel *mc,
const unsigned char *buf,
int len)
static struct pti_masterchannel *get_id(u8 *id_array, int max_ids, int base_id)
struct pti_masterchannel *pti_request_masterchannel(u8 type)
EXPORT_SYMBOL_GPL(pti_request_masterchannel);
void pti_release_masterchannel(struct pti_masterchannel *mc)
EXPORT_SYMBOL_GPL(pti_release_masterchannel);
void pti_writedata(struct pti_masterchannel *mc, u8 *buf, int count)
EXPORT_SYMBOL_GPL(pti_writedata);
static void __devexit pti_pci_remove(struct pci_dev *pdev)
static int pti_tty_driver_open(struct tty_struct *tty, struct file *filp)
static void pti_tty_driver_close(struct tty_struct *tty, struct file *filp)
static int pti_tty_install(struct tty_driver *driver, struct tty_struct *tty)
static void pti_tty_cleanup(struct tty_struct *tty)
static int pti_tty_driver_write(struct tty_struct *tty,
const unsigned char *buf, int len)
static int pti_tty_write_room(struct tty_struct *tty)
static int pti_char_open(struct inode *inode, struct file *filp)
static int pti_char_release(struct inode *inode, struct file *filp)
static ssize_t pti_char_write(struct file *filp, const char __user *data,
size_t len, loff_t *ppose)
static const struct tty_operations pti_tty_driver_ops = ;
static const struct file_operations pti_char_driver_ops = ;
static struct miscdevice pti_char_driver = ;
static void pti_console_write(struct console *c, const char *buf, unsigned len)
static struct tty_driver *pti_console_device(struct console *c, int *index)
static int pti_console_setup(struct console *c, char *opts)
static struct console pti_console = ;
static int pti_port_activate(struct tty_port *port, struct tty_struct *tty)
static void pti_port_shutdown(struct tty_port *port)
static const struct tty_port_operations tty_port_ops = ;
static int __devinit pti_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver pti_pci_driver = ;
static int __init pti_init(void)
static void __exit pti_exit(void)
module_init(pti_init);
module_exit(pti_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ken Mills, Jay Freyensee");
MODULE_DESCRIPTION("PTI Driver");
