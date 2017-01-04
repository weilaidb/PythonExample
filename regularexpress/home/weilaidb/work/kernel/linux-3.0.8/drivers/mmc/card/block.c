MODULE_ALIAS("mmc:block");
#undef MODULE_PARAM_PREFIX
#define MODULE_PARAM_PREFIX "mmcblk."
#define INAND_CMD38_ARG_EXT_CSD  113
#define INAND_CMD38_ARG_ERASE    0x00
#define INAND_CMD38_ARG_TRIM     0x01
#define INAND_CMD38_ARG_SECERASE 0x80
#define INAND_CMD38_ARG_SECTRIM1 0x81
#define INAND_CMD38_ARG_SECTRIM2 0x88
static DEFINE_MUTEX(block_mutex);
static int perdev_minors = CONFIG_MMC_BLOCK_MINORS;
static int max_devices;
static DECLARE_BITMAP(dev_use, 256);
static DECLARE_BITMAP(name_use, 256);
struct mmc_blk_data ;
static DEFINE_MUTEX(open_lock);
module_param(perdev_minors, int, 0444);
MODULE_PARM_DESC(perdev_minors, "Minors numbers to allocate per device");
static struct mmc_blk_data *mmc_blk_get(struct gendisk *disk)
static inline int mmc_get_devidx(struct gendisk *disk)
static void mmc_blk_put(struct mmc_blk_data *md)
static ssize_t force_ro_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t force_ro_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int mmc_blk_open(struct block_device *bdev, fmode_t mode)
static int mmc_blk_release(struct gendisk *disk, fmode_t mode)
static int
mmc_blk_getgeo(struct block_device *bdev, struct hd_geometry *geo)
struct mmc_blk_ioc_data ;
static struct mmc_blk_ioc_data *mmc_blk_ioctl_copy_from_user(
struct mmc_ioc_cmd __user *user)
static int mmc_blk_ioctl_cmd(struct block_device *bdev,
struct mmc_ioc_cmd __user *ic_ptr)
static int mmc_blk_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int mmc_blk_compat_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static const struct block_device_operations mmc_bdops = ;
struct mmc_blk_request ;
static inline int mmc_blk_part_switch(struct mmc_card *card,
struct mmc_blk_data *md)
static u32 mmc_sd_num_wr_blocks(struct mmc_card *card)
static u32 get_card_status(struct mmc_card *card, struct request *req)
static int mmc_blk_issue_discard_rq(struct mmc_queue *mq, struct request *req)
static int mmc_blk_issue_secdiscard_rq(struct mmc_queue *mq,
struct request *req)
static int mmc_blk_issue_flush(struct mmc_queue *mq, struct request *req)
static inline void mmc_apply_rel_rw(struct mmc_blk_request *brq,
struct mmc_card *card,
struct request *req)
static int mmc_blk_issue_rw_rq(struct mmc_queue *mq, struct request *req)
static int mmc_blk_issue_rq(struct mmc_queue *mq, struct request *req)
static inline int mmc_blk_readonly(struct mmc_card *card)
static struct mmc_blk_data *mmc_blk_alloc_req(struct mmc_card *card,
struct device *parent,
sector_t size,
bool default_ro,
const char *subname)
static struct mmc_blk_data *mmc_blk_alloc(struct mmc_card *card)
static int mmc_blk_alloc_part(struct mmc_card *card,
struct mmc_blk_data *md,
unsigned int part_type,
sector_t size,
bool default_ro,
const char *subname)
static int mmc_blk_alloc_parts(struct mmc_card *card, struct mmc_blk_data *md)
static int
mmc_blk_set_blksize(struct mmc_blk_data *md, struct mmc_card *card)
static void mmc_blk_remove_req(struct mmc_blk_data *md)
static void mmc_blk_remove_parts(struct mmc_card *card,
struct mmc_blk_data *md)
static int mmc_add_disk(struct mmc_blk_data *md)
static const struct mmc_fixup blk_fixups[] =
;
static int mmc_blk_probe(struct mmc_card *card)
static void mmc_blk_remove(struct mmc_card *card)
static int mmc_blk_suspend(struct mmc_card *card, pm_message_t state)
static int mmc_blk_resume(struct mmc_card *card)
#define	mmc_blk_suspend	NULL
#define mmc_blk_resume	NULL
static struct mmc_driver mmc_driver = ;
static int __init mmc_blk_init(void)
static void __exit mmc_blk_exit(void)
module_init(mmc_blk_init);
module_exit(mmc_blk_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Multimedia Card (MMC) block device driver");
