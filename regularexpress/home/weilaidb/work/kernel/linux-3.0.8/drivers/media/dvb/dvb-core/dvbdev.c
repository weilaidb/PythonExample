static DEFINE_MUTEX(dvbdev_mutex);
static int dvbdev_debug;
module_param(dvbdev_debug, int, 0644);
MODULE_PARM_DESC(dvbdev_debug, "Turn on/off device debugging (default:off).");
#define dprintk if (dvbdev_debug) printk
static LIST_HEAD(dvb_adapter_list);
static DEFINE_MUTEX(dvbdev_register_lock);
static const char * const dnames[] = ;
#define MAX_DVB_MINORS		256
#define DVB_MAX_IDS		MAX_DVB_MINORS
#define DVB_MAX_IDS		4
#define nums2minor(num,type,id)	((num << 6) | (id << 4) | type)
#define MAX_DVB_MINORS		(DVB_MAX_ADAPTERS*64)
static struct class *dvb_class;
static struct dvb_device *dvb_minors[MAX_DVB_MINORS];
static DECLARE_RWSEM(minor_rwsem);
static int dvb_device_open(struct inode *inode, struct file *file)
static const struct file_operations dvb_device_fops =
;
static struct cdev dvb_device_cdev;
int dvb_generic_open(struct inode *inode, struct file *file)
EXPORT_SYMBOL(dvb_generic_open);
int dvb_generic_release(struct inode *inode, struct file *file)
EXPORT_SYMBOL(dvb_generic_release);
long dvb_generic_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(dvb_generic_ioctl);
static int dvbdev_get_free_id (struct dvb_adapter *adap, int type)
int dvb_register_device(struct dvb_adapter *adap, struct dvb_device **pdvbdev,
const struct dvb_device *template, void *priv, int type)
EXPORT_SYMBOL(dvb_register_device);
void dvb_unregister_device(struct dvb_device *dvbdev)
EXPORT_SYMBOL(dvb_unregister_device);
static int dvbdev_check_free_adapter_num(int num)
static int dvbdev_get_free_adapter_num (void)
int dvb_register_adapter(struct dvb_adapter *adap, const char *name,
struct module *module, struct device *device,
short *adapter_nums)
EXPORT_SYMBOL(dvb_register_adapter);
int dvb_unregister_adapter(struct dvb_adapter *adap)
EXPORT_SYMBOL(dvb_unregister_adapter);
int dvb_usercopy(struct file *file,
unsigned int cmd, unsigned long arg,
int (*func)(struct file *file,
unsigned int cmd, void *arg))
static int dvb_uevent(struct device *dev, struct kobj_uevent_env *env)
static char *dvb_devnode(struct device *dev, mode_t *mode)
static int __init init_dvbdev(void)
static void __exit exit_dvbdev(void)
subsys_initcall(init_dvbdev);
module_exit(exit_dvbdev);
MODULE_DESCRIPTION("DVB Core Driver");
MODULE_AUTHOR("Marcus Metzler, Ralph Metzler, Holger Waechtler");
MODULE_LICENSE("GPL");
