static DEFINE_SPINLOCK(elv_list_lock);
static LIST_HEAD(elv_list);
static const int elv_hash_shift = 6;
#define ELV_HASH_BLOCK(sec)	((sec) >> 3)
#define ELV_HASH_FN(sec)	\
(hash_long(ELV_HASH_BLOCK((sec)), elv_hash_shift))
#define ELV_HASH_ENTRIES	(1 << elv_hash_shift)
#define rq_hash_key(rq)		(blk_rq_pos(rq) + blk_rq_sectors(rq))
static int elv_iosched_allow_merge(struct request *rq, struct bio *bio)
int elv_rq_merge_ok(struct request *rq, struct bio *bio)
EXPORT_SYMBOL(elv_rq_merge_ok);
int elv_try_merge(struct request *__rq, struct bio *bio)
static struct elevator_type *elevator_find(const char *name)
static void elevator_put(struct elevator_type *e)
static struct elevator_type *elevator_get(const char *name)
static void *elevator_init_queue(struct request_queue *q,
struct elevator_queue *eq)
static void elevator_attach(struct request_queue *q, struct elevator_queue *eq,
void *data)
static char chosen_elevator[16];
static int __init elevator_setup(char *str)
__setup("elevator=", elevator_setup);
static struct kobj_type elv_ktype;
static struct elevator_queue *elevator_alloc(struct request_queue *q,
struct elevator_type *e)
static void elevator_release(struct kobject *kobj)
int elevator_init(struct request_queue *q, char *name)
EXPORT_SYMBOL(elevator_init);
void elevator_exit(struct elevator_queue *e)
EXPORT_SYMBOL(elevator_exit);
static inline void __elv_rqhash_del(struct request *rq)
static void elv_rqhash_del(struct request_queue *q, struct request *rq)
static void elv_rqhash_add(struct request_queue *q, struct request *rq)
static void elv_rqhash_reposition(struct request_queue *q, struct request *rq)
static struct request *elv_rqhash_find(struct request_queue *q, sector_t offset)
struct request *elv_rb_add(struct rb_root *root, struct request *rq)
EXPORT_SYMBOL(elv_rb_add);
void elv_rb_del(struct rb_root *root, struct request *rq)
EXPORT_SYMBOL(elv_rb_del);
struct request *elv_rb_find(struct rb_root *root, sector_t sector)
EXPORT_SYMBOL(elv_rb_find);
void elv_dispatch_sort(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL(elv_dispatch_sort);
void elv_dispatch_add_tail(struct request_queue *q, struct request *rq)
EXPORT_SYMBOL(elv_dispatch_add_tail);
int elv_merge(struct request_queue *q, struct request **req, struct bio *bio)
static bool elv_attempt_insert_merge(struct request_queue *q,
struct request *rq)
void elv_merged_request(struct request_queue *q, struct request *rq, int type)
void elv_merge_requests(struct request_queue *q, struct request *rq,
struct request *next)
void elv_bio_merged(struct request_queue *q, struct request *rq,
struct bio *bio)
void elv_requeue_request(struct request_queue *q, struct request *rq)
void elv_drain_elevator(struct request_queue *q)
void elv_quiesce_start(struct request_queue *q)
void elv_quiesce_end(struct request_queue *q)
void __elv_add_request(struct request_queue *q, struct request *rq, int where)
EXPORT_SYMBOL(__elv_add_request);
void elv_add_request(struct request_queue *q, struct request *rq, int where)
EXPORT_SYMBOL(elv_add_request);
struct request *elv_latter_request(struct request_queue *q, struct request *rq)
struct request *elv_former_request(struct request_queue *q, struct request *rq)
int elv_set_request(struct request_queue *q, struct request *rq, gfp_t gfp_mask)
void elv_put_request(struct request_queue *q, struct request *rq)
int elv_may_queue(struct request_queue *q, int rw)
void elv_abort_queue(struct request_queue *q)
EXPORT_SYMBOL(elv_abort_queue);
void elv_completed_request(struct request_queue *q, struct request *rq)
#define to_elv(atr) container_of((atr), struct elv_fs_entry, attr)
static ssize_t
elv_attr_show(struct kobject *kobj, struct attribute *attr, char *page)
static ssize_t
elv_attr_store(struct kobject *kobj, struct attribute *attr,
const char *page, size_t length)
static const struct sysfs_ops elv_sysfs_ops = ;
static struct kobj_type elv_ktype = ;
int elv_register_queue(struct request_queue *q)
EXPORT_SYMBOL(elv_register_queue);
static void __elv_unregister_queue(struct elevator_queue *e)
void elv_unregister_queue(struct request_queue *q)
EXPORT_SYMBOL(elv_unregister_queue);
void elv_register(struct elevator_type *e)
EXPORT_SYMBOL_GPL(elv_register);
void elv_unregister(struct elevator_type *e)
EXPORT_SYMBOL_GPL(elv_unregister);
static int elevator_switch(struct request_queue *q, struct elevator_type *new_e)
int elevator_change(struct request_queue *q, const char *name)
EXPORT_SYMBOL(elevator_change);
ssize_t elv_iosched_store(struct request_queue *q, const char *name,
size_t count)
ssize_t elv_iosched_show(struct request_queue *q, char *name)
struct request *elv_rb_former_request(struct request_queue *q,
struct request *rq)
EXPORT_SYMBOL(elv_rb_former_request);
struct request *elv_rb_latter_request(struct request_queue *q,
struct request *rq)
EXPORT_SYMBOL(elv_rb_latter_request);
