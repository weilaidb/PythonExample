#define DRIVER_NAME "mspro_block"
static int major;
module_param(major, int, 0644);
#define MSPRO_BLOCK_MAX_SEGS  32
#define MSPRO_BLOCK_MAX_PAGES ((2 << 16) - 1)
#define MSPRO_BLOCK_SIGNATURE        0xa5c3
#define MSPRO_BLOCK_MAX_ATTRIBUTES   41
#define MSPRO_BLOCK_PART_SHIFT 3
enum ;
struct mspro_sys_attr ;
struct mspro_attr_entry  __attribute__((packed));
struct mspro_attribute  __attribute__((packed));
struct mspro_sys_info  __attribute__((packed));
struct mspro_mbr  __attribute__((packed));
struct mspro_specfile  __attribute__((packed));
struct mspro_devinfo  __attribute__((packed));
struct mspro_block_data ;
static DEFINE_IDR(mspro_block_disk_idr);
static DEFINE_MUTEX(mspro_block_disk_lock);
static int mspro_block_complete_req(struct memstick_dev *card, int error);
static int mspro_block_bd_open(struct block_device *bdev, fmode_t mode)
static int mspro_block_disk_release(struct gendisk *disk)
static int mspro_block_bd_release(struct gendisk *disk, fmode_t mode)
static int mspro_block_bd_getgeo(struct block_device *bdev,
struct hd_geometry *geo)
static const struct block_device_operations ms_block_bdops = ;
static struct mspro_sys_attr *mspro_from_sysfs_attr(struct attribute *attr)
static const char *mspro_block_attr_name(unsigned char tag)
typedef ssize_t (*sysfs_show_t)(struct device *dev,
struct device_attribute *attr,
char *buffer);
static ssize_t mspro_block_attr_show_default(struct device *dev,
struct device_attribute *attr,
char *buffer)
static ssize_t mspro_block_attr_show_sysinfo(struct device *dev,
struct device_attribute *attr,
char *buffer)
static ssize_t mspro_block_attr_show_modelname(struct device *dev,
struct device_attribute *attr,
char *buffer)
static ssize_t mspro_block_attr_show_mbr(struct device *dev,
struct device_attribute *attr,
char *buffer)
static ssize_t mspro_block_attr_show_specfile(struct device *dev,
struct device_attribute *attr,
char *buffer)
static ssize_t mspro_block_attr_show_devinfo(struct device *dev,
struct device_attribute *attr,
char *buffer)
static sysfs_show_t mspro_block_attr_show(unsigned char tag)
static int h_mspro_block_req_init(struct memstick_dev *card,
struct memstick_request **mrq)
static int h_mspro_block_default(struct memstick_dev *card,
struct memstick_request **mrq)
static int h_mspro_block_default_bad(struct memstick_dev *card,
struct memstick_request **mrq)
static int h_mspro_block_get_ro(struct memstick_dev *card,
struct memstick_request **mrq)
static int h_mspro_block_wait_for_ced(struct memstick_dev *card,
struct memstick_request **mrq)
static int h_mspro_block_transfer_data(struct memstick_dev *card,
struct memstick_request **mrq)
static void h_mspro_block_setup_cmd(struct memstick_dev *card, u64 offset,
size_t length)
static int mspro_block_issue_req(struct memstick_dev *card, int chunk)
static int mspro_block_complete_req(struct memstick_dev *card, int error)
static void mspro_block_stop(struct memstick_dev *card)
static void mspro_block_start(struct memstick_dev *card)
static int mspro_block_prepare_req(struct request_queue *q, struct request *req)
static void mspro_block_submit_req(struct request_queue *q)
static int mspro_block_wait_for_ced(struct memstick_dev *card)
static int mspro_block_set_interface(struct memstick_dev *card,
unsigned char sys_reg)
static int mspro_block_switch_interface(struct memstick_dev *card)
static int mspro_block_read_attributes(struct memstick_dev *card)
static int mspro_block_init_card(struct memstick_dev *card)
static int mspro_block_init_disk(struct memstick_dev *card)
static void mspro_block_data_clear(struct mspro_block_data *msb)
static int mspro_block_check_card(struct memstick_dev *card)
static int mspro_block_probe(struct memstick_dev *card)
static void mspro_block_remove(struct memstick_dev *card)
static int mspro_block_suspend(struct memstick_dev *card, pm_message_t state)
static int mspro_block_resume(struct memstick_dev *card)
#define mspro_block_suspend NULL
#define mspro_block_resume NULL
static struct memstick_device_id mspro_block_id_tbl[] = ;
static struct memstick_driver mspro_block_driver = ;
static int __init mspro_block_init(void)
static void __exit mspro_block_exit(void)
module_init(mspro_block_init);
module_exit(mspro_block_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex Dubov");
MODULE_DESCRIPTION("Sony MemoryStickPro block device driver");
MODULE_DEVICE_TABLE(memstick, mspro_block_id_tbl);
