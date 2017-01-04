#define	DRIVER_DESC	"USB Gadget filesystem"
#define	DRIVER_VERSION	"24 Aug 2004"
static const char driver_desc [] = DRIVER_DESC;
static const char shortname [] = "gadgetfs";
MODULE_DESCRIPTION (DRIVER_DESC);
MODULE_AUTHOR ("David Brownell");
MODULE_LICENSE ("GPL");
#define GADGETFS_MAGIC		0xaee71ee7
#define DMA_ADDR_INVALID	(~(dma_addr_t)0)
enum ep0_state ;
#define	N_EVENT			5
struct dev_data ;
static inline void get_dev (struct dev_data *data)
static void put_dev (struct dev_data *data)
static struct dev_data *dev_new (void)
enum ep_state ;
struct ep_data ;
static inline void get_ep (struct ep_data *data)
static void put_ep (struct ep_data *data)
static const char *CHIP;
#define xprintk(d,level,fmt,args...) \
printk(level "%s: " fmt , shortname , ## args)
#define DBG(dev,fmt,args...) \
xprintk(dev , KERN_DEBUG , fmt , ## args)
#define DBG(dev,fmt,args...) \
do  while (0)
#define VDEBUG	DBG
#define VDEBUG(dev,fmt,args...) \
do  while (0)
#define ERROR(dev,fmt,args...) \
xprintk(dev , KERN_ERR , fmt , ## args)
#define INFO(dev,fmt,args...) \
xprintk(dev , KERN_INFO , fmt , ## args)
static void epio_complete (struct usb_ep *ep, struct usb_request *req)
static int
get_ready_ep (unsigned f_flags, struct ep_data *epdata)
static ssize_t
ep_io (struct ep_data *epdata, void *buf, unsigned len)
static ssize_t
ep_read (struct file *fd, char __user *buf, size_t len, loff_t *ptr)
static ssize_t
ep_write (struct file *fd, const char __user *buf, size_t len, loff_t *ptr)
static int
ep_release (struct inode *inode, struct file *fd)
static long ep_ioctl(struct file *fd, unsigned code, unsigned long value)
struct kiocb_priv ;
static int ep_aio_cancel(struct kiocb *iocb, struct io_event *e)
static ssize_t ep_aio_read_retry(struct kiocb *iocb)
static void ep_aio_complete(struct usb_ep *ep, struct usb_request *req)
static ssize_t
ep_aio_rwtail(
struct kiocb	*iocb,
char		*buf,
size_t		len,
struct ep_data	*epdata,
const struct iovec *iv,
unsigned long	nr_segs
)
static ssize_t
ep_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t o)
static ssize_t
ep_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t o)
static const struct file_operations ep_io_operations = ;
static ssize_t
ep_config (struct file *fd, const char __user *buf, size_t len, loff_t *ptr)
static int
ep_open (struct inode *inode, struct file *fd)
static const struct file_operations ep_config_operations = ;
static inline void ep0_readable (struct dev_data *dev)
static void clean_req (struct usb_ep *ep, struct usb_request *req)
static void ep0_complete (struct usb_ep *ep, struct usb_request *req)
static int setup_req (struct usb_ep *ep, struct usb_request *req, u16 len)
static ssize_t
ep0_read (struct file *fd, char __user *buf, size_t len, loff_t *ptr)
static struct usb_gadgetfs_event *
next_event (struct dev_data *dev, enum usb_gadgetfs_event_type type)
static ssize_t
ep0_write (struct file *fd, const char __user *buf, size_t len, loff_t *ptr)
static int
ep0_fasync (int f, struct file *fd, int on)
static struct usb_gadget_driver gadgetfs_driver;
static int
dev_release (struct inode *inode, struct file *fd)
static unsigned int
ep0_poll (struct file *fd, poll_table *wait)
static long dev_ioctl (struct file *fd, unsigned code, unsigned long value)
static const struct file_operations ep0_io_operations = ;
static void make_qualifier (struct dev_data *dev)
static int
config_buf (struct dev_data *dev, u8 type, unsigned index)
static int
gadgetfs_setup (struct usb_gadget *gadget, const struct usb_ctrlrequest *ctrl)
static void destroy_ep_files (struct dev_data *dev)
static struct inode *
gadgetfs_create_file (struct super_block *sb, char const *name,
void *data, const struct file_operations *fops,
struct dentry **dentry_p);
static int activate_ep_files (struct dev_data *dev)
static void
gadgetfs_unbind (struct usb_gadget *gadget)
static struct dev_data		*the_device;
static int
gadgetfs_bind (struct usb_gadget *gadget)
static void
gadgetfs_disconnect (struct usb_gadget *gadget)
static void
gadgetfs_suspend (struct usb_gadget *gadget)
static struct usb_gadget_driver gadgetfs_driver = ;
static void gadgetfs_nop(struct usb_gadget *arg)
static int gadgetfs_probe (struct usb_gadget *gadget)
static struct usb_gadget_driver probe_driver = ;
static int is_valid_config (struct usb_config_descriptor *config)
static ssize_t
dev_config (struct file *fd, const char __user *buf, size_t len, loff_t *ptr)
static int
dev_open (struct inode *inode, struct file *fd)
static const struct file_operations dev_init_operations = ;
static unsigned default_uid;
static unsigned default_gid;
static unsigned default_perm = S_IRUSR | S_IWUSR;
module_param (default_uid, uint, 0644);
module_param (default_gid, uint, 0644);
module_param (default_perm, uint, 0644);
static struct inode *
gadgetfs_make_inode (struct super_block *sb,
void *data, const struct file_operations *fops,
int mode)
static struct inode *
gadgetfs_create_file (struct super_block *sb, char const *name,
void *data, const struct file_operations *fops,
struct dentry **dentry_p)
static const struct super_operations gadget_fs_operations = ;
static int
gadgetfs_fill_super (struct super_block *sb, void *opts, int silent)
static struct dentry *
gadgetfs_mount (struct file_system_type *t, int flags,
const char *path, void *opts)
static void
gadgetfs_kill_sb (struct super_block *sb)
static struct file_system_type gadgetfs_type = ;
static int __init init (void)
module_init (init);
static void __exit cleanup (void)
module_exit (cleanup);
