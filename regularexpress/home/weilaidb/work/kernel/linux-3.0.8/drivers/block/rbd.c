#define DRV_NAME "rbd"
#define DRV_NAME_LONG "rbd (rados block device)"
#define RBD_MINORS_PER_MAJOR	256
#define RBD_MAX_MD_NAME_LEN	(96 + sizeof(RBD_SUFFIX))
#define RBD_MAX_POOL_NAME_LEN	64
#define RBD_MAX_SNAP_NAME_LEN	32
#define RBD_MAX_OPT_LEN		1024
#define RBD_SNAP_HEAD_NAME	"-"
#define DEV_NAME_LEN		32
#define RBD_NOTIFY_TIMEOUT_DEFAULT 10
struct rbd_image_header ;
struct rbd_options ;
struct rbd_client ;
struct rbd_req_coll;
struct rbd_request ;
struct rbd_req_status ;
struct rbd_req_coll ;
struct rbd_snap ;
struct rbd_device ;
static struct bus_type rbd_bus_type = ;
static spinlock_t node_lock;
static DEFINE_MUTEX(ctl_mutex);
static LIST_HEAD(rbd_dev_list);
static LIST_HEAD(rbd_client_list);
static int __rbd_init_snaps_header(struct rbd_device *rbd_dev);
static void rbd_dev_release(struct device *dev);
static ssize_t rbd_snap_rollback(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t size);
static ssize_t rbd_snap_add(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count);
static void __rbd_remove_snap_dev(struct rbd_device *rbd_dev,
struct rbd_snap *snap);;
static struct rbd_device *dev_to_rbd(struct device *dev)
static struct device *rbd_get_dev(struct rbd_device *rbd_dev)
static void rbd_put_dev(struct rbd_device *rbd_dev)
static int __rbd_update_snaps(struct rbd_device *rbd_dev);
static int rbd_open(struct block_device *bdev, fmode_t mode)
static int rbd_release(struct gendisk *disk, fmode_t mode)
static const struct block_device_operations rbd_bd_ops = ;
static struct rbd_client *rbd_client_create(struct ceph_options *opt,
struct rbd_options *rbd_opts)
static struct rbd_client *__rbd_client_find(struct ceph_options *opt)
enum ;
static match_table_t rbdopt_tokens = ;
static int parse_rbd_opts_token(char *c, void *private)
static int rbd_get_client(struct rbd_device *rbd_dev, const char *mon_addr,
char *options)
static void rbd_client_release(struct kref *kref)
static void rbd_put_client(struct rbd_device *rbd_dev)
static void rbd_coll_release(struct kref *kref)
static int rbd_header_from_disk(struct rbd_image_header *header,
struct rbd_image_header_ondisk *ondisk,
int allocated_snaps,
gfp_t gfp_flags)
static int snap_index(struct rbd_image_header *header, int snap_num)
static u64 cur_snap_id(struct rbd_device *rbd_dev)
static int snap_by_name(struct rbd_image_header *header, const char *snap_name,
u64 *seq, u64 *size)
static int rbd_header_set_snap(struct rbd_device *dev,
const char *snap_name,
u64 *size)
static void rbd_header_free(struct rbd_image_header *header)
static u64 rbd_get_segment(struct rbd_image_header *header,
const char *block_name,
u64 ofs, u64 len,
char *seg_name, u64 *segofs)
static int rbd_get_num_segments(struct rbd_image_header *header,
u64 ofs, u64 len)
static void bio_chain_put(struct bio *chain)
static void zero_bio_chain(struct bio *chain, int start_ofs)
static struct bio *bio_chain_clone(struct bio **old, struct bio **next,
struct bio_pair **bp,
int len, gfp_t gfpmask)
static int rbd_create_rw_ops(struct ceph_osd_req_op **ops,
int num_ops,
int opcode,
u32 payload_len)
static void rbd_destroy_ops(struct ceph_osd_req_op *ops)
static void rbd_coll_end_req_index(struct request *rq,
struct rbd_req_coll *coll,
int index,
int ret, u64 len)
static void rbd_coll_end_req(struct rbd_request *req,
int ret, u64 len)
static int rbd_do_request(struct request *rq,
struct rbd_device *dev,
struct ceph_snap_context *snapc,
u64 snapid,
const char *obj, u64 ofs, u64 len,
struct bio *bio,
struct page **pages,
int num_pages,
int flags,
struct ceph_osd_req_op *ops,
int num_reply,
struct rbd_req_coll *coll,
int coll_index,
void (*rbd_cb)(struct ceph_osd_request *req,
struct ceph_msg *msg),
struct ceph_osd_request **linger_req,
u64 *ver)
static void rbd_req_cb(struct ceph_osd_request *req, struct ceph_msg *msg)
static void rbd_simple_req_cb(struct ceph_osd_request *req, struct ceph_msg *msg)
static int rbd_req_sync_op(struct rbd_device *dev,
struct ceph_snap_context *snapc,
u64 snapid,
int opcode,
int flags,
struct ceph_osd_req_op *orig_ops,
int num_reply,
const char *obj,
u64 ofs, u64 len,
char *buf,
struct ceph_osd_request **linger_req,
u64 *ver)
static int rbd_do_op(struct request *rq,
struct rbd_device *rbd_dev ,
struct ceph_snap_context *snapc,
u64 snapid,
int opcode, int flags, int num_reply,
u64 ofs, u64 len,
struct bio *bio,
struct rbd_req_coll *coll,
int coll_index)
static int rbd_req_write(struct request *rq,
struct rbd_device *rbd_dev,
struct ceph_snap_context *snapc,
u64 ofs, u64 len,
struct bio *bio,
struct rbd_req_coll *coll,
int coll_index)
static int rbd_req_read(struct request *rq,
struct rbd_device *rbd_dev,
u64 snapid,
u64 ofs, u64 len,
struct bio *bio,
struct rbd_req_coll *coll,
int coll_index)
static int rbd_req_sync_read(struct rbd_device *dev,
struct ceph_snap_context *snapc,
u64 snapid,
const char *obj,
u64 ofs, u64 len,
char *buf,
u64 *ver)
static int rbd_req_sync_notify_ack(struct rbd_device *dev,
u64 ver,
u64 notify_id,
const char *obj)
static void rbd_watch_cb(u64 ver, u64 notify_id, u8 opcode, void *data)
static int rbd_req_sync_watch(struct rbd_device *dev,
const char *obj,
u64 ver)
struct rbd_notify_info ;
static void rbd_notify_cb(u64 ver, u64 notify_id, u8 opcode, void *data)
static int rbd_req_sync_notify(struct rbd_device *dev,
const char *obj)
static int rbd_req_sync_rollback_obj(struct rbd_device *dev,
u64 snapid,
const char *obj)
static int rbd_req_sync_exec(struct rbd_device *dev,
const char *obj,
const char *cls,
const char *method,
const char *data,
int len,
u64 *ver)
static struct rbd_req_coll *rbd_alloc_coll(int num_reqs)
static void rbd_rq_fn(struct request_queue *q)
static int rbd_merge_bvec(struct request_queue *q, struct bvec_merge_data *bmd,
struct bio_vec *bvec)
static void rbd_free_disk(struct rbd_device *rbd_dev)
static int rbd_read_header(struct rbd_device *rbd_dev,
struct rbd_image_header *header)
static int rbd_header_add_snap(struct rbd_device *dev,
const char *snap_name,
gfp_t gfp_flags)
static void __rbd_remove_all_snaps(struct rbd_device *rbd_dev)
static int __rbd_update_snaps(struct rbd_device *rbd_dev)
static int rbd_init_disk(struct rbd_device *rbd_dev)
static ssize_t rbd_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rbd_major_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rbd_client_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rbd_pool_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rbd_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rbd_snap_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rbd_image_refresh(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t size)
static DEVICE_ATTR(size, S_IRUGO, rbd_size_show, NULL);
static DEVICE_ATTR(major, S_IRUGO, rbd_major_show, NULL);
static DEVICE_ATTR(client_id, S_IRUGO, rbd_client_id_show, NULL);
static DEVICE_ATTR(pool, S_IRUGO, rbd_pool_show, NULL);
static DEVICE_ATTR(name, S_IRUGO, rbd_name_show, NULL);
static DEVICE_ATTR(refresh, S_IWUSR, NULL, rbd_image_refresh);
static DEVICE_ATTR(current_snap, S_IRUGO, rbd_snap_show, NULL);
static DEVICE_ATTR(create_snap, S_IWUSR, NULL, rbd_snap_add);
static DEVICE_ATTR(rollback_snap, S_IWUSR, NULL, rbd_snap_rollback);
static struct attribute *rbd_attrs[] = ;
static struct attribute_group rbd_attr_group = ;
static const struct attribute_group *rbd_attr_groups[] = ;
static void rbd_sysfs_dev_release(struct device *dev)
static struct device_type rbd_device_type = ;
static ssize_t rbd_snap_size_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rbd_snap_id_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(snap_size, S_IRUGO, rbd_snap_size_show, NULL);
static DEVICE_ATTR(snap_id, S_IRUGO, rbd_snap_id_show, NULL);
static struct attribute *rbd_snap_attrs[] = ;
static struct attribute_group rbd_snap_attr_group = ;
static void rbd_snap_dev_release(struct device *dev)
static const struct attribute_group *rbd_snap_attr_groups[] = ;
static struct device_type rbd_snap_device_type = ;
static void __rbd_remove_snap_dev(struct rbd_device *rbd_dev,
struct rbd_snap *snap)
static int rbd_register_snap_dev(struct rbd_device *rbd_dev,
struct rbd_snap *snap,
struct device *parent)
static int __rbd_add_snap_dev(struct rbd_device *rbd_dev,
int i, const char *name,
struct rbd_snap **snapp)
const char *rbd_prev_snap_name(const char *name, const char *start)
static int __rbd_init_snaps_header(struct rbd_device *rbd_dev)
static void rbd_root_dev_release(struct device *dev)
static struct device rbd_root_dev = ;
static int rbd_bus_add_dev(struct rbd_device *rbd_dev)
static void rbd_bus_del_dev(struct rbd_device *rbd_dev)
static int rbd_init_watch_dev(struct rbd_device *rbd_dev)
static ssize_t rbd_add(struct bus_type *bus,
const char *buf,
size_t count)
static struct rbd_device *__rbd_get_dev(unsigned long id)
static void rbd_dev_release(struct device *dev)
static ssize_t rbd_remove(struct bus_type *bus,
const char *buf,
size_t count)
static ssize_t rbd_snap_add(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t rbd_snap_rollback(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static struct bus_attribute rbd_bus_attrs[] = ;
static int rbd_sysfs_init(void)
static void rbd_sysfs_cleanup(void)
int __init rbd_init(void)
void __exit rbd_exit(void)
module_init(rbd_init);
module_exit(rbd_exit);
MODULE_AUTHOR("Sage Weil <sage@newdream.net>");
MODULE_AUTHOR("Yehuda Sadeh <yehuda@hq.newdream.net>");
MODULE_DESCRIPTION("rados block device");
MODULE_AUTHOR("Jeff Garzik <jeff@garzik.org>");
MODULE_LICENSE("GPL");
