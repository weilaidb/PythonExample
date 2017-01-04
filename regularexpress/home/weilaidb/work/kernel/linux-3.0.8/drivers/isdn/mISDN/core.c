static u_int debug;
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL");
module_param(debug, uint, S_IRUGO | S_IWUSR);
static u64		device_ids;
#define MAX_DEVICE_ID	63
static LIST_HEAD(Bprotocols);
static DEFINE_RWLOCK(bp_lock);
static void mISDN_dev_release(struct device *dev)
static ssize_t _show_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t _show_nrbchan(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t _show_d_protocols(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t _show_b_protocols(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t _show_protocol(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t _show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t _show_channelmap(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute mISDN_dev_attrs[] = ;
static int mISDN_uevent(struct device *dev, struct kobj_uevent_env *env)
static void mISDN_class_release(struct class *cls)
static struct class mISDN_class = ;
static int
_get_mdevice(struct device *dev, void *id)
struct mISDNdevice
*get_mdevice(u_int id)
static int
_get_mdevice_count(struct device *dev, void *cnt)
int
get_mdevice_count(void)
static int
get_free_devid(void)
int
mISDN_register_device(struct mISDNdevice *dev,
struct device *parent, char *name)
EXPORT_SYMBOL(mISDN_register_device);
void
mISDN_unregister_device(struct mISDNdevice *dev)
EXPORT_SYMBOL(mISDN_unregister_device);
u_int
get_all_Bprotocols(void)
struct Bprotocol *
get_Bprotocol4mask(u_int m)
struct Bprotocol *
get_Bprotocol4id(u_int id)
int
mISDN_register_Bprotocol(struct Bprotocol *bp)
EXPORT_SYMBOL(mISDN_register_Bprotocol);
void
mISDN_unregister_Bprotocol(struct Bprotocol *bp)
EXPORT_SYMBOL(mISDN_unregister_Bprotocol);
static int
mISDNInit(void)
static void mISDN_cleanup(void)
module_init(mISDNInit);
module_exit(mISDN_cleanup);
