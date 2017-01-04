struct workqueue_struct *cache_flush_workqueue;
static int cache_timeout = 1000;
module_param(cache_timeout, bool, S_IRUGO);
MODULE_PARM_DESC(cache_timeout,
"Timeout (in ms) for cache flush (1000 ms default");
static int debug;
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level (0-2)");
struct sm_sysfs_attribute ;
ssize_t sm_attr_show(struct device *dev, struct device_attribute *attr,
char *buf)
#define NUM_ATTRIBUTES 1
#define SM_CIS_VENDOR_OFFSET 0x59
struct attribute_group *sm_create_sysfs_attributes(struct sm_ftl *ftl)
void sm_delete_sysfs_attributes(struct sm_ftl *ftl)
static int sm_get_lba(uint8_t *lba)
static int sm_read_lba(struct sm_oob *oob)
static void sm_write_lba(struct sm_oob *oob, uint16_t lba)
static loff_t sm_mkoffset(struct sm_ftl *ftl, int zone, int block, int boffset)
static void sm_break_offset(struct sm_ftl *ftl, loff_t offset,
int *zone, int *block, int *boffset)
static int sm_correct_sector(uint8_t *buffer, struct sm_oob *oob)
static int sm_read_sector(struct sm_ftl *ftl,
int zone, int block, int boffset,
uint8_t *buffer, struct sm_oob *oob)
static int sm_write_sector(struct sm_ftl *ftl,
int zone, int block, int boffset,
uint8_t *buffer, struct sm_oob *oob)
static int sm_write_block(struct sm_ftl *ftl, uint8_t *buf,
int zone, int block, int lba,
unsigned long invalid_bitmap)
static void sm_mark_block_bad(struct sm_ftl *ftl, int zone, int block)
static int sm_erase_block(struct sm_ftl *ftl, int zone_num, uint16_t block,
int put_free)
static void sm_erase_callback(struct erase_info *self)
static int sm_check_block(struct sm_ftl *ftl, int zone, int block)
static const struct chs_entry chs_table[] = ;
static const uint8_t cis_signature[] = ;
int sm_get_media_info(struct sm_ftl *ftl, struct mtd_info *mtd)
static int sm_read_cis(struct sm_ftl *ftl)
static int sm_find_cis(struct sm_ftl *ftl)
static int sm_recheck_media(struct sm_ftl *ftl)
static int sm_init_zone(struct sm_ftl *ftl, int zone_num)
struct ftl_zone *sm_get_zone(struct sm_ftl *ftl, int zone_num)
void sm_cache_init(struct sm_ftl *ftl)
void sm_cache_put(struct sm_ftl *ftl, char *buffer, int boffset)
int sm_cache_get(struct sm_ftl *ftl, char *buffer, int boffset)
int sm_cache_flush(struct sm_ftl *ftl)
static void sm_cache_flush_timer(unsigned long data)
static void sm_cache_flush_work(struct work_struct *work)
static int sm_read(struct mtd_blktrans_dev *dev,
unsigned long sect_no, char *buf)
static int sm_write(struct mtd_blktrans_dev *dev,
unsigned long sec_no, char *buf)
static int sm_flush(struct mtd_blktrans_dev *dev)
static int sm_release(struct mtd_blktrans_dev *dev)
static int sm_getgeo(struct mtd_blktrans_dev *dev, struct hd_geometry *geo)
static void sm_add_mtd(struct mtd_blktrans_ops *tr, struct mtd_info *mtd)
static void sm_remove_dev(struct mtd_blktrans_dev *dev)
static struct mtd_blktrans_ops sm_ftl_ops = ;
static __init int sm_module_init(void)
static void __exit sm_module_exit(void)
module_init(sm_module_init);
module_exit(sm_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxim Levitsky <maximlevitsky@gmail.com>");
MODULE_DESCRIPTION("Smartmedia/xD mtd translation layer");
