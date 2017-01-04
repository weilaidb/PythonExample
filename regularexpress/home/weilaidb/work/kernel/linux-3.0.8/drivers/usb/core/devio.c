#define USB_MAXBUS			64
#define USB_DEVICE_MAX			USB_MAXBUS * 128
DEFINE_MUTEX(usbfs_mutex);
struct dev_state ;
struct async ;
static int usbfs_snoop;
module_param(usbfs_snoop, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(usbfs_snoop, "true to log all usbfs traffic");
#define snoop(dev, format, arg...)				\
do  while (0)
enum snoop_when ;
#define USB_DEVICE_DEV		MKDEV(USB_DEVICE_MAJOR, 0)
#define	MAX_USBFS_BUFFER_SIZE	16384
static int connected(struct dev_state *ps)
static loff_t usbdev_lseek(struct file *file, loff_t offset, int orig)
static ssize_t usbdev_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static struct async *alloc_async(unsigned int numisoframes)
static void free_async(struct async *as)
static void async_newpending(struct async *as)
static void async_removepending(struct async *as)
static struct async *async_getcompleted(struct dev_state *ps)
static struct async *async_getpending(struct dev_state *ps,
void __user *userurb)
static void snoop_urb(struct usb_device *udev,
void __user *userurb, int pipe, unsigned length,
int timeout_or_status, enum snoop_when when,
unsigned char *data, unsigned data_len)
#define AS_CONTINUATION	1
#define AS_UNLINK	2
static void cancel_bulk_urbs(struct dev_state *ps, unsigned bulk_addr)
__releases(ps->lock)
__acquires(ps->lock)
static void async_completed(struct urb *urb)
static void destroy_async(struct dev_state *ps, struct list_head *list)
static void destroy_async_on_interface(struct dev_state *ps,
unsigned int ifnum)
static void destroy_all_async(struct dev_state *ps)
static int driver_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void driver_disconnect(struct usb_interface *intf)
static int driver_suspend(struct usb_interface *intf, pm_message_t msg)
static int driver_resume(struct usb_interface *intf)
struct usb_driver usbfs_driver = ;
static int claimintf(struct dev_state *ps, unsigned int ifnum)
static int releaseintf(struct dev_state *ps, unsigned int ifnum)
static int checkintf(struct dev_state *ps, unsigned int ifnum)
static int findintfep(struct usb_device *dev, unsigned int ep)
static int check_ctrlrecip(struct dev_state *ps, unsigned int requesttype,
unsigned int index)
static int match_devt(struct device *dev, void *data)
static struct usb_device *usbdev_lookup_by_devt(dev_t devt)
static int usbdev_open(struct inode *inode, struct file *file)
static int usbdev_release(struct inode *inode, struct file *file)
static int proc_control(struct dev_state *ps, void __user *arg)
static int proc_bulk(struct dev_state *ps, void __user *arg)
static int proc_resetep(struct dev_state *ps, void __user *arg)
static int proc_clearhalt(struct dev_state *ps, void __user *arg)
static int proc_getdriver(struct dev_state *ps, void __user *arg)
static int proc_connectinfo(struct dev_state *ps, void __user *arg)
static int proc_resetdevice(struct dev_state *ps)
static int proc_setintf(struct dev_state *ps, void __user *arg)
static int proc_setconfig(struct dev_state *ps, void __user *arg)
static int proc_do_submiturb(struct dev_state *ps, struct usbdevfs_urb *uurb,
struct usbdevfs_iso_packet_desc __user *iso_frame_desc,
void __user *arg)
static int proc_submiturb(struct dev_state *ps, void __user *arg)
static int proc_unlinkurb(struct dev_state *ps, void __user *arg)
static int processcompl(struct async *as, void __user * __user *arg)
static struct async *reap_as(struct dev_state *ps)
static int proc_reapurb(struct dev_state *ps, void __user *arg)
static int proc_reapurbnonblock(struct dev_state *ps, void __user *arg)
static int proc_control_compat(struct dev_state *ps,
struct usbdevfs_ctrltransfer32 __user *p32)
static int proc_bulk_compat(struct dev_state *ps,
struct usbdevfs_bulktransfer32 __user *p32)
static int proc_disconnectsignal_compat(struct dev_state *ps, void __user *arg)
static int get_urb32(struct usbdevfs_urb *kurb,
struct usbdevfs_urb32 __user *uurb)
static int proc_submiturb_compat(struct dev_state *ps, void __user *arg)
static int processcompl_compat(struct async *as, void __user * __user *arg)
static int proc_reapurb_compat(struct dev_state *ps, void __user *arg)
static int proc_reapurbnonblock_compat(struct dev_state *ps, void __user *arg)
static int proc_disconnectsignal(struct dev_state *ps, void __user *arg)
static int proc_claiminterface(struct dev_state *ps, void __user *arg)
static int proc_releaseinterface(struct dev_state *ps, void __user *arg)
static int proc_ioctl(struct dev_state *ps, struct usbdevfs_ioctl *ctl)
static int proc_ioctl_default(struct dev_state *ps, void __user *arg)
static int proc_ioctl_compat(struct dev_state *ps, compat_uptr_t arg)
static int proc_claim_port(struct dev_state *ps, void __user *arg)
static int proc_release_port(struct dev_state *ps, void __user *arg)
static long usbdev_do_ioctl(struct file *file, unsigned int cmd,
void __user *p)
static long usbdev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long usbdev_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static unsigned int usbdev_poll(struct file *file,
struct poll_table_struct *wait)
const struct file_operations usbdev_file_operations = ;
static void usbdev_remove(struct usb_device *udev)
static struct class *usb_classdev_class;
static int usb_classdev_add(struct usb_device *dev)
static void usb_classdev_remove(struct usb_device *dev)
#define usb_classdev_add(dev)		0
#define usb_classdev_remove(dev)	do  while (0)
static int usbdev_notify(struct notifier_block *self,
unsigned long action, void *dev)
static struct notifier_block usbdev_nb = ;
static struct cdev usb_device_cdev;
int __init usb_devio_init(void)
void usb_devio_cleanup(void)
