#define DRV_NAME "osdblk"
#define PFX DRV_NAME ": "
#define OSDBLK_DEBUG(fmt, a...) \
printk(KERN_NOTICE "osdblk @%s:%d: " fmt, __func__, __LINE__, ##a)
#define OSDBLK_DEBUG(fmt, a...) \
do  while (0)
MODULE_AUTHOR("Jeff Garzik <jeff@garzik.org>");
MODULE_DESCRIPTION("block device inside an OSD object osdblk.ko");
MODULE_LICENSE("GPL");
struct osdblk_device;
enum ;
struct osdblk_request ;
struct osdblk_device ;
static struct class *class_osdblk;
static DEFINE_MUTEX(ctl_mutex);
static LIST_HEAD(osdblkdev_list);
static const struct block_device_operations osdblk_bd_ops = ;
static const struct osd_attr g_attr_logical_length = ATTR_DEF(
OSD_APAGE_OBJECT_INFORMATION, OSD_ATTR_OI_LOGICAL_LENGTH, 8);
static void osdblk_make_credential(u8 cred_a[OSD_CAP_LEN],
const struct osd_obj_id *obj)
static int osd_sync_op(struct osd_request *or, int timeout, uint8_t *credential)
static int osd_async_op(struct osd_request *or, osd_req_done_fn *async_done,
void *caller_context, u8 *cred)
static int extract_attr_from_req(struct osd_request *or, struct osd_attr *attr)
static int osdblk_get_obj_size(struct osdblk_device *osdev, u64 *size_out)
static void osdblk_osd_complete(struct osd_request *or, void *private)
static void bio_chain_put(struct bio *chain)
static struct bio *bio_chain_clone(struct bio *old_chain, gfp_t gfpmask)
static void osdblk_rq_fn(struct request_queue *q)
static void osdblk_free_disk(struct osdblk_device *osdev)
static int osdblk_init_disk(struct osdblk_device *osdev)
static void class_osdblk_release(struct class *cls)
static ssize_t class_osdblk_list(struct class *c,
struct class_attribute *attr,
char *data)
static ssize_t class_osdblk_add(struct class *c,
struct class_attribute *attr,
const char *buf, size_t count)
static ssize_t class_osdblk_remove(struct class *c,
struct class_attribute *attr,
const char *buf,
size_t count)
static struct class_attribute class_osdblk_attrs[] = ;
static int osdblk_sysfs_init(void)
static void osdblk_sysfs_cleanup(void)
static int __init osdblk_init(void)
static void __exit osdblk_exit(void)
module_init(osdblk_init);
module_exit(osdblk_exit);
