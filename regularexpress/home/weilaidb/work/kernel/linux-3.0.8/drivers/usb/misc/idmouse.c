#define WIDTH 225
#define HEIGHT 289
#define HEADER "P5 225 289 255 "
#define IMGSIZE ((WIDTH * HEIGHT) + sizeof(HEADER)-1)
#define DRIVER_VERSION "0.6"
#define DRIVER_SHORT   "idmouse"
#define DRIVER_AUTHOR  "Florian 'Floe' Echtler <echtler@fs.tum.de>"
#define DRIVER_DESC    "Siemens ID Mouse FingerTIP Sensor Driver"
#define USB_IDMOUSE_MINOR_BASE 132
#define ID_SIEMENS 0x0681
#define ID_IDMOUSE 0x0005
#define ID_CHERRY  0x0010
static const struct usb_device_id idmouse_table[] = ;
#define FTIP_RESET   0x20
#define FTIP_ACQUIRE 0x21
#define FTIP_RELEASE 0x22
#define FTIP_BLINK   0x23
#define FTIP_SCROLL  0x24
#define ftip_command(dev, command, value, index) \
usb_control_msg (dev->udev, usb_sndctrlpipe (dev->udev, 0), command, \
USB_TYPE_VENDOR | USB_RECIP_ENDPOINT | USB_DIR_OUT, value, index, NULL, 0, 1000)
MODULE_DEVICE_TABLE(usb, idmouse_table);
static DEFINE_MUTEX(open_disc_mutex);
struct usb_idmouse ;
static ssize_t idmouse_read(struct file *file, char __user *buffer,
size_t count, loff_t * ppos);
static int idmouse_open(struct inode *inode, struct file *file);
static int idmouse_release(struct inode *inode, struct file *file);
static int idmouse_probe(struct usb_interface *interface,
const struct usb_device_id *id);
static void idmouse_disconnect(struct usb_interface *interface);
static int idmouse_suspend(struct usb_interface *intf, pm_message_t message);
static int idmouse_resume(struct usb_interface *intf);
static const struct file_operations idmouse_fops = ;
static struct usb_class_driver idmouse_class = ;
static struct usb_driver idmouse_driver = ;
static int idmouse_create_image(struct usb_idmouse *dev)
static int idmouse_suspend(struct usb_interface *intf, pm_message_t message)
static int idmouse_resume(struct usb_interface *intf)
static inline void idmouse_delete(struct usb_idmouse *dev)
static int idmouse_open(struct inode *inode, struct file *file)
static int idmouse_release(struct inode *inode, struct file *file)
static ssize_t idmouse_read(struct file *file, char __user *buffer, size_t count,
loff_t * ppos)
static int idmouse_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void idmouse_disconnect(struct usb_interface *interface)
static int __init usb_idmouse_init(void)
static void __exit usb_idmouse_exit(void)
module_init(usb_idmouse_init);
module_exit(usb_idmouse_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
