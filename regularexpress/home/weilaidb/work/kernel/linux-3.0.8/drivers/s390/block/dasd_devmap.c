#define KMSG_COMPONENT "dasd"
#define PRINTK_HEADER "dasd_devmap:"
#define DASD_BUS_ID_SIZE 20
struct kmem_cache *dasd_page_cache;
EXPORT_SYMBOL_GPL(dasd_page_cache);
struct dasd_devmap ;
int dasd_probeonly =  0;
int dasd_autodetect = 0;
int dasd_nopav = 0;
EXPORT_SYMBOL_GPL(dasd_nopav);
int dasd_nofcx;
EXPORT_SYMBOL_GPL(dasd_nofcx);
static char *dasd[256];
module_param_array(dasd, charp, NULL, 0);
static DEFINE_SPINLOCK(dasd_devmap_lock);
static struct list_head dasd_hashlists[256];
int dasd_max_devindex;
static struct dasd_devmap *dasd_add_busid(const char *, int);
static inline int
dasd_hash_busid(const char *bus_id)
static int __init
dasd_call_setup(char *str)
__setup ("dasd=", dasd_call_setup);
#define	DASD_IPLDEV	"ipldev"
static int
dasd_busid(char **str, int *id0, int *id1, int *devno)
static int
dasd_feature_list(char *str, char **endp)
static char *
dasd_parse_keyword( char *parsestring )
static char *
dasd_parse_range( char *parsestring )
static char *
dasd_parse_next_element( char *parsestring )
int
dasd_parse(void)
static struct dasd_devmap *
dasd_add_busid(const char *bus_id, int features)
static struct dasd_devmap *
dasd_find_busid(const char *bus_id)
int
dasd_busid_known(const char *bus_id)
static void
dasd_forget_ranges(void)
struct dasd_device *
dasd_device_from_devindex(int devindex)
static struct dasd_devmap *
dasd_devmap_from_cdev(struct ccw_device *cdev)
struct dasd_device *
dasd_create_device(struct ccw_device *cdev)
static DECLARE_WAIT_QUEUE_HEAD(dasd_delete_wq);
void
dasd_delete_device(struct dasd_device *device)
void
dasd_put_device_wake(struct dasd_device *device)
EXPORT_SYMBOL_GPL(dasd_put_device_wake);
struct dasd_device *
dasd_device_from_cdev_locked(struct ccw_device *cdev)
struct dasd_device *
dasd_device_from_cdev(struct ccw_device *cdev)
void dasd_add_link_to_gendisk(struct gendisk *gdp, struct dasd_device *device)
struct dasd_device *dasd_device_from_gendisk(struct gendisk *gdp)
static ssize_t dasd_ff_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t dasd_ff_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(failfast, 0644, dasd_ff_show, dasd_ff_store);
static ssize_t
dasd_ro_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dasd_ro_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(readonly, 0644, dasd_ro_show, dasd_ro_store);
static ssize_t
dasd_erplog_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dasd_erplog_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(erplog, 0644, dasd_erplog_show, dasd_erplog_store);
static ssize_t
dasd_use_diag_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dasd_use_diag_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(use_diag, 0644, dasd_use_diag_show, dasd_use_diag_store);
static ssize_t
dasd_use_raw_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dasd_use_raw_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(raw_track_access, 0644, dasd_use_raw_show,
dasd_use_raw_store);
static ssize_t
dasd_discipline_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(discipline, 0444, dasd_discipline_show, NULL);
static ssize_t
dasd_device_status_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(status, 0444, dasd_device_status_show, NULL);
static ssize_t dasd_alias_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alias, 0444, dasd_alias_show, NULL);
static ssize_t dasd_vendor_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vendor, 0444, dasd_vendor_show, NULL);
#define UID_STRLEN ( 3 + 1 + 14 + 1 +\ 4 + 1 + 2 + 1 +\ 32 + 1)
static ssize_t
dasd_uid_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(uid, 0444, dasd_uid_show, NULL);
static ssize_t
dasd_eer_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dasd_eer_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(eer_enabled, 0644, dasd_eer_show, dasd_eer_store);
static ssize_t
dasd_expires_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
dasd_expires_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(expires, 0644, dasd_expires_show, dasd_expires_store);
static ssize_t dasd_reservation_policy_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t dasd_reservation_policy_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(reservation_policy, 0644,
dasd_reservation_policy_show, dasd_reservation_policy_store);
static ssize_t dasd_reservation_state_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t dasd_reservation_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(last_known_reservation_state, 0644,
dasd_reservation_state_show, dasd_reservation_state_store);
static struct attribute * dasd_attrs[] = ;
static struct attribute_group dasd_attr_group = ;
int
dasd_get_feature(struct ccw_device *cdev, int feature)
int
dasd_set_feature(struct ccw_device *cdev, int feature, int flag)
int
dasd_add_sysfs_files(struct ccw_device *cdev)
void
dasd_remove_sysfs_files(struct ccw_device *cdev)
int
dasd_devmap_init(void)
void
dasd_devmap_exit(void)
