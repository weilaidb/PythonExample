#define CYASBLKDEV_SHIFT	0
#define CYASBLKDEV_MAX_REQ_LEN	(256)
#define CYASBLKDEV_NUM_MINORS	(256 >> CYASBLKDEV_SHIFT)
#define CY_AS_TEST_NUM_BLOCKS   (64)
#define CYASBLKDEV_MINOR_0 1
#define CYASBLKDEV_MINOR_1 2
#define CYASBLKDEV_MINOR_2 3
static int major;
module_param(major, int, 0444);
MODULE_PARM_DESC(major,
"specify the major device number for cyasblkdev block driver");
static int vfat_search;
module_param(vfat_search, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(vfat_search,
"dynamically find the location of the first sector");
static int private_partition_bus = -1;
module_param(private_partition_bus, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(private_partition_bus,
"bus number for private partition");
static int private_partition_size = -1;
module_param(private_partition_size, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(private_partition_size,
"size of the private partition");
struct cyasblkdev_blk_data ;
static struct cyasblkdev_blk_data *gl_bd;
static DEFINE_SEMAPHORE(open_lock);
static cy_as_device_handle *cyas_dev_handle;
static void cyasblkdev_blk_deinit(struct cyasblkdev_blk_data *bd);
#define DBGPRN_RD_RQ	   (1 < 0)
#define DBGPRN_WR_RQ		(1 < 1)
#define DBGPRN_RQ_END	  (1 < 2)
int blkdev_ctl_dbgprn(
int prn_flags
)
EXPORT_SYMBOL(blkdev_ctl_dbgprn);
static struct cyasblkdev_blk_data *cyasblkdev_blk_get(
struct gendisk *disk
)
static void cyasblkdev_blk_put(
struct cyasblkdev_blk_data *bd
)
static int cyasblkdev_blk_open(
struct block_device *bdev,
fmode_t mode
)
static int cyasblkdev_blk_release(
struct gendisk *disk,
fmode_t mode
)
static int cyasblkdev_blk_ioctl(
struct block_device *bdev,
fmode_t mode,
unsigned int cmd,
unsigned long arg
)
unsigned int cyasblkdev_check_events(struct gendisk *gd, unsigned int clearing)
int cyasblkdev_revalidate_disk(struct gendisk *gd)
static struct block_device_operations cyasblkdev_bdops = ;
static int cyasblkdev_blk_prep_rq(
struct cyasblkdev_queue *bq,
struct request *req
)
static void cyasblkdev_issuecallback(
cy_as_device_handle handle,
cy_as_media_type type,
uint32_t device,
uint32_t unit,
uint32_t block_number,
cy_as_oper_type op,
cy_as_return_status_t status
)
static int cyasblkdev_blk_issue_rq(
struct cyasblkdev_queue *bq,
struct request *req
)
static unsigned long
dev_use[CYASBLKDEV_NUM_MINORS / (8 * sizeof(unsigned long))];
static void cyasblkdev_storage_callback(
cy_as_device_handle dev_h,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_storage_event evtype,
void *evdata
)
#define SECTORS_TO_SCAN 4096
uint32_t cyasblkdev_get_vfat_offset(int bus_num, int unit_no)
cy_as_storage_query_device_data dev_data = ;
static int cyasblkdev_add_disks(int bus_num,
struct cyasblkdev_blk_data *bd,
int total_media_count,
int devidx)
static struct cyasblkdev_blk_data *cyasblkdev_blk_alloc(void)
static int cyasblkdev_blk_initialize(void)
static int __init cyasblkdev_blk_init(void)
static void cyasblkdev_blk_deinit(struct cyasblkdev_blk_data *bd)
static void __exit cyasblkdev_blk_exit(void)
module_init(cyasblkdev_blk_init);
module_exit(cyasblkdev_blk_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("antioch (cyasblkdev) block device driver");
MODULE_AUTHOR("cypress semiconductor");
