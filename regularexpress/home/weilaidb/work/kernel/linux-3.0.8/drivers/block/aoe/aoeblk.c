static DEFINE_MUTEX(aoeblk_mutex);
static struct kmem_cache *buf_pool_cache;
static ssize_t aoedisk_show_state(struct device *dev,
struct device_attribute *attr, char *page)
static ssize_t aoedisk_show_mac(struct device *dev,
struct device_attribute *attr, char *page)
static ssize_t aoedisk_show_netif(struct device *dev,
struct device_attribute *attr, char *page)
static ssize_t aoedisk_show_fwver(struct device *dev,
struct device_attribute *attr, char *page)
static DEVICE_ATTR(state, S_IRUGO, aoedisk_show_state, NULL);
static DEVICE_ATTR(mac, S_IRUGO, aoedisk_show_mac, NULL);
static DEVICE_ATTR(netif, S_IRUGO, aoedisk_show_netif, NULL);
static struct device_attribute dev_attr_firmware_version = ;
static struct attribute *aoe_attrs[] = ;
static const struct attribute_group attr_group = ;
static int
aoedisk_add_sysfs(struct aoedev *d)
void
aoedisk_rm_sysfs(struct aoedev *d)
static int
aoeblk_open(struct block_device *bdev, fmode_t mode)
static int
aoeblk_release(struct gendisk *disk, fmode_t mode)
static int
aoeblk_make_request(struct request_queue *q, struct bio *bio)
static int
aoeblk_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations aoe_bdops = ;
void
aoeblk_gdalloc(void *vp)
void
aoeblk_exit(void)
int __init
aoeblk_init(void)
