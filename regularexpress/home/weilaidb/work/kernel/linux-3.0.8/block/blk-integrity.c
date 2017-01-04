static struct kmem_cache *integrity_cachep;
static const char *bi_unsupported_name = "unsupported";
int blk_rq_count_integrity_sg(struct request_queue *q, struct bio *bio)
EXPORT_SYMBOL(blk_rq_count_integrity_sg);
int blk_rq_map_integrity_sg(struct request_queue *q, struct bio *bio,
struct scatterlist *sglist)
EXPORT_SYMBOL(blk_rq_map_integrity_sg);
int blk_integrity_compare(struct gendisk *gd1, struct gendisk *gd2)
EXPORT_SYMBOL(blk_integrity_compare);
int blk_integrity_merge_rq(struct request_queue *q, struct request *req,
struct request *next)
EXPORT_SYMBOL(blk_integrity_merge_rq);
int blk_integrity_merge_bio(struct request_queue *q, struct request *req,
struct bio *bio)
EXPORT_SYMBOL(blk_integrity_merge_bio);
struct integrity_sysfs_entry ;
static ssize_t integrity_attr_show(struct kobject *kobj, struct attribute *attr,
char *page)
static ssize_t integrity_attr_store(struct kobject *kobj,
struct attribute *attr, const char *page,
size_t count)
static ssize_t integrity_format_show(struct blk_integrity *bi, char *page)
static ssize_t integrity_tag_size_show(struct blk_integrity *bi, char *page)
static ssize_t integrity_read_store(struct blk_integrity *bi,
const char *page, size_t count)
static ssize_t integrity_read_show(struct blk_integrity *bi, char *page)
static ssize_t integrity_write_store(struct blk_integrity *bi,
const char *page, size_t count)
static ssize_t integrity_write_show(struct blk_integrity *bi, char *page)
static struct integrity_sysfs_entry integrity_format_entry = ;
static struct integrity_sysfs_entry integrity_tag_size_entry = ;
static struct integrity_sysfs_entry integrity_read_entry = ;
static struct integrity_sysfs_entry integrity_write_entry = ;
static struct attribute *integrity_attrs[] = ;
static const struct sysfs_ops integrity_ops = ;
static int __init blk_dev_integrity_init(void)
subsys_initcall(blk_dev_integrity_init);
static void blk_integrity_release(struct kobject *kobj)
static struct kobj_type integrity_ktype = ;
bool blk_integrity_is_initialized(struct gendisk *disk)
EXPORT_SYMBOL(blk_integrity_is_initialized);
int blk_integrity_register(struct gendisk *disk, struct blk_integrity *template)
EXPORT_SYMBOL(blk_integrity_register);
void blk_integrity_unregister(struct gendisk *disk)
EXPORT_SYMBOL(blk_integrity_unregister);
