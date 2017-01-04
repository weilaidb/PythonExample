#define DRIVER_NAME	"pktcdvd"
#if PACKET_DEBUG
#define DPRINTK(fmt, args...) printk(KERN_NOTICE fmt, ##args)
#define DPRINTK(fmt, args...)
#if PACKET_DEBUG > 1
#define VPRINTK(fmt, args...) printk(KERN_NOTICE fmt, ##args)
#define VPRINTK(fmt, args...)
#define MAX_SPEED 0xffff
#define ZONE(sector, pd) (((sector) + (pd)->offset) & ~((pd)->settings.size - 1))
static DEFINE_MUTEX(pktcdvd_mutex);
static struct pktcdvd_device *pkt_devs[MAX_WRITERS];
static struct proc_dir_entry *pkt_proc;
static int pktdev_major;
static int write_congestion_on  = PKT_WRITE_CONGESTION_ON;
static int write_congestion_off = PKT_WRITE_CONGESTION_OFF;
static struct mutex ctl_mutex;
static mempool_t *psd_pool;
static struct class	*class_pktcdvd = NULL;
static struct dentry	*pkt_debugfs_root = NULL;
static int pkt_setup_dev(dev_t dev, dev_t* pkt_dev);
static int pkt_remove_dev(dev_t pkt_dev);
static int pkt_seq_show(struct seq_file *m, void *p);
static struct pktcdvd_kobj* pkt_kobj_create(struct pktcdvd_device *pd,
const char* name,
struct kobject* parent,
struct kobj_type* ktype)
static void pkt_kobj_remove(struct pktcdvd_kobj *p)
static void pkt_kobj_release(struct kobject *kobj)
#define DEF_ATTR(_obj,_name,_mode) \
static struct attribute _obj =
DEF_ATTR(kobj_pkt_attr_st1, "reset", 0200);
DEF_ATTR(kobj_pkt_attr_st2, "packets_started", 0444);
DEF_ATTR(kobj_pkt_attr_st3, "packets_finished", 0444);
DEF_ATTR(kobj_pkt_attr_st4, "kb_written", 0444);
DEF_ATTR(kobj_pkt_attr_st5, "kb_read", 0444);
DEF_ATTR(kobj_pkt_attr_st6, "kb_read_gather", 0444);
static struct attribute *kobj_pkt_attrs_stat[] = ;
DEF_ATTR(kobj_pkt_attr_wq1, "size", 0444);
DEF_ATTR(kobj_pkt_attr_wq2, "congestion_off", 0644);
DEF_ATTR(kobj_pkt_attr_wq3, "congestion_on",  0644);
static struct attribute *kobj_pkt_attrs_wqueue[] = ;
static ssize_t kobj_pkt_show(struct kobject *kobj,
struct attribute *attr, char *data)
static void init_write_congestion_marks(int* lo, int* hi)
static ssize_t kobj_pkt_store(struct kobject *kobj,
struct attribute *attr,
const char *data, size_t len)
static const struct sysfs_ops kobj_pkt_ops = ;
static struct kobj_type kobj_pkt_type_stat = ;
static struct kobj_type kobj_pkt_type_wqueue = ;
static void pkt_sysfs_dev_new(struct pktcdvd_device *pd)
static void pkt_sysfs_dev_remove(struct pktcdvd_device *pd)
static void class_pktcdvd_release(struct class *cls)
static ssize_t class_pktcdvd_show_map(struct class *c,
struct class_attribute *attr,
char *data)
static ssize_t class_pktcdvd_store_add(struct class *c,
struct class_attribute *attr,
const char *buf,
size_t count)
static ssize_t class_pktcdvd_store_remove(struct class *c,
struct class_attribute *attr,
const char *buf,
size_t count)
static struct class_attribute class_pktcdvd_attrs[] = ;
static int pkt_sysfs_init(void)
static void pkt_sysfs_cleanup(void)
static int pkt_debugfs_seq_show(struct seq_file *m, void *p)
static int pkt_debugfs_fops_open(struct inode *inode, struct file *file)
static const struct file_operations debug_fops = ;
static void pkt_debugfs_dev_new(struct pktcdvd_device *pd)
static void pkt_debugfs_dev_remove(struct pktcdvd_device *pd)
static void pkt_debugfs_init(void)
static void pkt_debugfs_cleanup(void)
static void pkt_bio_finished(struct pktcdvd_device *pd)
static void pkt_bio_destructor(struct bio *bio)
static struct bio *pkt_bio_alloc(int nr_iovecs)
static struct packet_data *pkt_alloc_packet_data(int frames)
static void pkt_free_packet_data(struct packet_data *pkt)
static void pkt_shrink_pktlist(struct pktcdvd_device *pd)
static int pkt_grow_pktlist(struct pktcdvd_device *pd, int nr_packets)
static inline struct pkt_rb_node *pkt_rbtree_next(struct pkt_rb_node *node)
static void pkt_rbtree_erase(struct pktcdvd_device *pd, struct pkt_rb_node *node)
static struct pkt_rb_node *pkt_rbtree_find(struct pktcdvd_device *pd, sector_t s)
static void pkt_rbtree_insert(struct pktcdvd_device *pd, struct pkt_rb_node *node)
static int pkt_generic_packet(struct pktcdvd_device *pd, struct packet_command *cgc)
static void pkt_dump_sense(struct packet_command *cgc)
static int pkt_flush_cache(struct pktcdvd_device *pd)
static noinline_for_stack int pkt_set_speed(struct pktcdvd_device *pd,
unsigned write_speed, unsigned read_speed)
static void pkt_queue_bio(struct pktcdvd_device *pd, struct bio *bio)
static void pkt_iosched_process_queue(struct pktcdvd_device *pd)
static int pkt_set_segment_merging(struct pktcdvd_device *pd, struct request_queue *q)
static void pkt_copy_bio_data(struct bio *src_bio, int seg, int offs, struct page *dst_page, int dst_offs)
static void pkt_make_local_copy(struct packet_data *pkt, struct bio_vec *bvec)
static void pkt_end_io_read(struct bio *bio, int err)
static void pkt_end_io_packet_write(struct bio *bio, int err)
static void pkt_gather_data(struct pktcdvd_device *pd, struct packet_data *pkt)
static struct packet_data *pkt_get_packet_data(struct pktcdvd_device *pd, int zone)
static void pkt_put_packet_data(struct pktcdvd_device *pd, struct packet_data *pkt)
static int pkt_start_recovery(struct packet_data *pkt)
static inline void pkt_set_state(struct packet_data *pkt, enum packet_data_state state)
static int pkt_handle_queue(struct pktcdvd_device *pd)
static void pkt_start_write(struct pktcdvd_device *pd, struct packet_data *pkt)
static void pkt_finish_packet(struct packet_data *pkt, int uptodate)
static void pkt_run_state_machine(struct pktcdvd_device *pd, struct packet_data *pkt)
static void pkt_handle_packets(struct pktcdvd_device *pd)
static void pkt_count_states(struct pktcdvd_device *pd, int *states)
static int kcdrwd(void *foobar)
static void pkt_print_settings(struct pktcdvd_device *pd)
static int pkt_mode_sense(struct pktcdvd_device *pd, struct packet_command *cgc, int page_code, int page_control)
static int pkt_mode_select(struct pktcdvd_device *pd, struct packet_command *cgc)
static int pkt_get_disc_info(struct pktcdvd_device *pd, disc_information *di)
static int pkt_get_track_info(struct pktcdvd_device *pd, __u16 track, __u8 type, track_information *ti)
static noinline_for_stack int pkt_get_last_written(struct pktcdvd_device *pd,
long *last_written)
static noinline_for_stack int pkt_set_write_settings(struct pktcdvd_device *pd)
static int pkt_writable_track(struct pktcdvd_device *pd, track_information *ti)
static int pkt_writable_disc(struct pktcdvd_device *pd, disc_information *di)
static noinline_for_stack int pkt_probe_settings(struct pktcdvd_device *pd)
static noinline_for_stack int pkt_write_caching(struct pktcdvd_device *pd,
int set)
static int pkt_lock_door(struct pktcdvd_device *pd, int lockflag)
static noinline_for_stack int pkt_get_max_speed(struct pktcdvd_device *pd,
unsigned *write_speed)
static char clv_to_speed[16] = ;
static char hs_clv_to_speed[16] = ;
static char us_clv_to_speed[16] = ;
static noinline_for_stack int pkt_media_speed(struct pktcdvd_device *pd,
unsigned *speed)
static noinline_for_stack int pkt_perform_opc(struct pktcdvd_device *pd)
static int pkt_open_write(struct pktcdvd_device *pd)
static int pkt_open_dev(struct pktcdvd_device *pd, fmode_t write)
static void pkt_release_dev(struct pktcdvd_device *pd, int flush)
static struct pktcdvd_device *pkt_find_dev_from_minor(unsigned int dev_minor)
static int pkt_open(struct block_device *bdev, fmode_t mode)
static int pkt_close(struct gendisk *disk, fmode_t mode)
static void pkt_end_io_read_cloned(struct bio *bio, int err)
static int pkt_make_request(struct request_queue *q, struct bio *bio)
static int pkt_merge_bvec(struct request_queue *q, struct bvec_merge_data *bmd,
struct bio_vec *bvec)
static void pkt_init_queue(struct pktcdvd_device *pd)
static int pkt_seq_show(struct seq_file *m, void *p)
static int pkt_seq_open(struct inode *inode, struct file *file)
static const struct file_operations pkt_proc_fops = ;
static int pkt_new_dev(struct pktcdvd_device *pd, dev_t dev)
static int pkt_ioctl(struct block_device *bdev, fmode_t mode, unsigned int cmd, unsigned long arg)
static unsigned int pkt_check_events(struct gendisk *disk,
unsigned int clearing)
static const struct block_device_operations pktcdvd_ops = ;
static char *pktcdvd_devnode(struct gendisk *gd, mode_t *mode)
static int pkt_setup_dev(dev_t dev, dev_t* pkt_dev)
static int pkt_remove_dev(dev_t pkt_dev)
static void pkt_get_status(struct pkt_ctrl_command *ctrl_cmd)
static long pkt_ctl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long pkt_ctl_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations pkt_ctl_fops = ;
static struct miscdevice pkt_misc = ;
static int __init pkt_init(void)
static void __exit pkt_exit(void)
MODULE_DESCRIPTION("Packet writing layer for CD/DVD drives");
MODULE_AUTHOR("Jens Axboe <axboe@suse.de>");
MODULE_LICENSE("GPL");
module_init(pkt_init);
module_exit(pkt_exit);
