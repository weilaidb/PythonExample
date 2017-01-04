struct queue_sysfs_entry ;
static ssize_t
queue_var_show(unsigned long var, char *page)
static ssize_t
queue_var_store(unsigned long *var, const char *page, size_t count)
static ssize_t queue_requests_show(struct request_queue *q, char *page)
static ssize_t
queue_requests_store(struct request_queue *q, const char *page, size_t count)
static ssize_t queue_ra_show(struct request_queue *q, char *page)
static ssize_t
queue_ra_store(struct request_queue *q, const char *page, size_t count)
static ssize_t queue_max_sectors_show(struct request_queue *q, char *page)
static ssize_t queue_max_segments_show(struct request_queue *q, char *page)
static ssize_t queue_max_integrity_segments_show(struct request_queue *q, char *page)
static ssize_t queue_max_segment_size_show(struct request_queue *q, char *page)
static ssize_t queue_logical_block_size_show(struct request_queue *q, char *page)
static ssize_t queue_physical_block_size_show(struct request_queue *q, char *page)
static ssize_t queue_io_min_show(struct request_queue *q, char *page)
static ssize_t queue_io_opt_show(struct request_queue *q, char *page)
static ssize_t queue_discard_granularity_show(struct request_queue *q, char *page)
static ssize_t queue_discard_max_show(struct request_queue *q, char *page)
static ssize_t queue_discard_zeroes_data_show(struct request_queue *q, char *page)
static ssize_t
queue_max_sectors_store(struct request_queue *q, const char *page, size_t count)
static ssize_t queue_max_hw_sectors_show(struct request_queue *q, char *page)
#define QUEUE_SYSFS_BIT_FNS(name, flag, neg)				\
static ssize_t								\
queue_show_##name(struct request_queue *q, char *page)			\
\
static ssize_t								\
queue_store_##name(struct request_queue *q, const char *page, size_t count) \
QUEUE_SYSFS_BIT_FNS(nonrot, NONROT, 1);
QUEUE_SYSFS_BIT_FNS(random, ADD_RANDOM, 0);
QUEUE_SYSFS_BIT_FNS(iostats, IO_STAT, 0);
#undef QUEUE_SYSFS_BIT_FNS
static ssize_t queue_nomerges_show(struct request_queue *q, char *page)
static ssize_t queue_nomerges_store(struct request_queue *q, const char *page,
size_t count)
static ssize_t queue_rq_affinity_show(struct request_queue *q, char *page)
static ssize_t
queue_rq_affinity_store(struct request_queue *q, const char *page, size_t count)
static struct queue_sysfs_entry queue_requests_entry = ;
static struct queue_sysfs_entry queue_ra_entry = ;
static struct queue_sysfs_entry queue_max_sectors_entry = ;
static struct queue_sysfs_entry queue_max_hw_sectors_entry = ;
static struct queue_sysfs_entry queue_max_segments_entry = ;
static struct queue_sysfs_entry queue_max_integrity_segments_entry = ;
static struct queue_sysfs_entry queue_max_segment_size_entry = ;
static struct queue_sysfs_entry queue_iosched_entry = ;
static struct queue_sysfs_entry queue_hw_sector_size_entry = ;
static struct queue_sysfs_entry queue_logical_block_size_entry = ;
static struct queue_sysfs_entry queue_physical_block_size_entry = ;
static struct queue_sysfs_entry queue_io_min_entry = ;
static struct queue_sysfs_entry queue_io_opt_entry = ;
static struct queue_sysfs_entry queue_discard_granularity_entry = ;
static struct queue_sysfs_entry queue_discard_max_entry = ;
static struct queue_sysfs_entry queue_discard_zeroes_data_entry = ;
static struct queue_sysfs_entry queue_nonrot_entry = ;
static struct queue_sysfs_entry queue_nomerges_entry = ;
static struct queue_sysfs_entry queue_rq_affinity_entry = ;
static struct queue_sysfs_entry queue_iostats_entry = ;
static struct queue_sysfs_entry queue_random_entry = ;
static struct attribute *default_attrs[] = ;
#define to_queue(atr) container_of((atr), struct queue_sysfs_entry, attr)
static ssize_t
queue_attr_show(struct kobject *kobj, struct attribute *attr, char *page)
static ssize_t
queue_attr_store(struct kobject *kobj, struct attribute *attr,
const char *page, size_t length)
static void blk_release_queue(struct kobject *kobj)
static const struct sysfs_ops queue_sysfs_ops = ;
struct kobj_type blk_queue_ktype = ;
int blk_register_queue(struct gendisk *disk)
void blk_unregister_queue(struct gendisk *disk)
