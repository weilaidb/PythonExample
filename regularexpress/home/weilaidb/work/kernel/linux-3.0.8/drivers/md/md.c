#define DEBUG 0
#define dprintk(x...) ((void)(DEBUG && printk(x)))
static void autostart_arrays(int part);
static LIST_HEAD(pers_list);
static DEFINE_SPINLOCK(pers_lock);
static void md_print_devices(void);
static DECLARE_WAIT_QUEUE_HEAD(resync_wait);
static struct workqueue_struct *md_wq;
static struct workqueue_struct *md_misc_wq;
#define MD_BUG(x...)
#define MD_DEFAULT_MAX_CORRECTED_READ_ERRORS 20
static int sysctl_speed_limit_min = 1000;
static int sysctl_speed_limit_max = 200000;
static inline int speed_min(mddev_t *mddev)
static inline int speed_max(mddev_t *mddev)
static struct ctl_table_header *raid_table_header;
static ctl_table raid_table[] = ;
static ctl_table raid_dir_table[] = ;
static ctl_table raid_root_table[] = ;
static const struct block_device_operations md_fops;
static int start_readonly;
static void mddev_bio_destructor(struct bio *bio)
struct bio *bio_alloc_mddev(gfp_t gfp_mask, int nr_iovecs,
mddev_t *mddev)
EXPORT_SYMBOL_GPL(bio_alloc_mddev);
struct bio *bio_clone_mddev(struct bio *bio, gfp_t gfp_mask,
mddev_t *mddev)
EXPORT_SYMBOL_GPL(bio_clone_mddev);
static DECLARE_WAIT_QUEUE_HEAD(md_event_waiters);
static atomic_t md_event_count;
void md_new_event(mddev_t *mddev)
EXPORT_SYMBOL_GPL(md_new_event);
static void md_new_event_inintr(mddev_t *mddev)
static LIST_HEAD(all_mddevs);
static DEFINE_SPINLOCK(all_mddevs_lock);
#define for_each_mddev(mddev,tmp)					\
\
for (();					\
();					\
()					\
)
static int md_make_request(struct request_queue *q, struct bio *bio)
void mddev_suspend(mddev_t *mddev)
EXPORT_SYMBOL_GPL(mddev_suspend);
void mddev_resume(mddev_t *mddev)
EXPORT_SYMBOL_GPL(mddev_resume);
int mddev_congested(mddev_t *mddev, int bits)
EXPORT_SYMBOL(mddev_congested);
static void md_end_flush(struct bio *bio, int err)
static void md_submit_flush_data(struct work_struct *ws);
static void submit_flushes(struct work_struct *ws)
static void md_submit_flush_data(struct work_struct *ws)
void md_flush_request(mddev_t *mddev, struct bio *bio)
EXPORT_SYMBOL(md_flush_request);
struct md_plug_cb ;
static void plugger_unplug(struct blk_plug_cb *cb)
int mddev_check_plugged(mddev_t *mddev)
EXPORT_SYMBOL_GPL(mddev_check_plugged);
static inline mddev_t *mddev_get(mddev_t *mddev)
static void mddev_delayed_delete(struct work_struct *ws);
static void mddev_put(mddev_t *mddev)
void mddev_init(mddev_t *mddev)
EXPORT_SYMBOL_GPL(mddev_init);
static mddev_t * mddev_find(dev_t unit)
static inline int mddev_lock(mddev_t * mddev)
static inline int mddev_is_locked(mddev_t *mddev)
static inline int mddev_trylock(mddev_t * mddev)
static struct attribute_group md_redundancy_group;
static void mddev_unlock(mddev_t * mddev)
static mdk_rdev_t * find_rdev_nr(mddev_t *mddev, int nr)
static mdk_rdev_t * find_rdev(mddev_t * mddev, dev_t dev)
static struct mdk_personality *find_pers(int level, char *clevel)
static inline sector_t calc_dev_sboffset(mdk_rdev_t *rdev)
static int alloc_disk_sb(mdk_rdev_t * rdev)
static void free_disk_sb(mdk_rdev_t * rdev)
static void super_written(struct bio *bio, int error)
void md_super_write(mddev_t *mddev, mdk_rdev_t *rdev,
sector_t sector, int size, struct page *page)
void md_super_wait(mddev_t *mddev)
static void bi_complete(struct bio *bio, int error)
int sync_page_io(mdk_rdev_t *rdev, sector_t sector, int size,
struct page *page, int rw, bool metadata_op)
EXPORT_SYMBOL_GPL(sync_page_io);
static int read_disk_sb(mdk_rdev_t * rdev, int size)
static int uuid_equal(mdp_super_t *sb1, mdp_super_t *sb2)
static int sb_equal(mdp_super_t *sb1, mdp_super_t *sb2)
static u32 md_csum_fold(u32 csum)
static unsigned int calc_sb_csum(mdp_super_t * sb)
struct super_type  ;
int md_check_no_bitmap(mddev_t *mddev)
EXPORT_SYMBOL(md_check_no_bitmap);
static int super_90_load(mdk_rdev_t *rdev, mdk_rdev_t *refdev, int minor_version)
static int super_90_validate(mddev_t *mddev, mdk_rdev_t *rdev)
static void super_90_sync(mddev_t *mddev, mdk_rdev_t *rdev)
static unsigned long long
super_90_rdev_size_change(mdk_rdev_t *rdev, sector_t num_sectors)
static __le32 calc_sb_1_csum(struct mdp_superblock_1 * sb)
static int super_1_load(mdk_rdev_t *rdev, mdk_rdev_t *refdev, int minor_version)
static int super_1_validate(mddev_t *mddev, mdk_rdev_t *rdev)
static void super_1_sync(mddev_t *mddev, mdk_rdev_t *rdev)
static unsigned long long
super_1_rdev_size_change(mdk_rdev_t *rdev, sector_t num_sectors)
static struct super_type super_types[] = ;
static void sync_super(mddev_t *mddev, mdk_rdev_t *rdev)
static int match_mddev_units(mddev_t *mddev1, mddev_t *mddev2)
static LIST_HEAD(pending_raid_disks);
int md_integrity_register(mddev_t *mddev)
EXPORT_SYMBOL(md_integrity_register);
void md_integrity_add_rdev(mdk_rdev_t *rdev, mddev_t *mddev)
EXPORT_SYMBOL(md_integrity_add_rdev);
static int bind_rdev_to_array(mdk_rdev_t * rdev, mddev_t * mddev)
static void md_delayed_delete(struct work_struct *ws)
static void unbind_rdev_from_array(mdk_rdev_t * rdev)
static int lock_rdev(mdk_rdev_t *rdev, dev_t dev, int shared)
static void unlock_rdev(mdk_rdev_t *rdev)
void md_autodetect_dev(dev_t dev);
static void export_rdev(mdk_rdev_t * rdev)
static void kick_rdev_from_array(mdk_rdev_t * rdev)
static void export_array(mddev_t *mddev)
static void print_desc(mdp_disk_t *desc)
static void print_sb_90(mdp_super_t *sb)
static void print_sb_1(struct mdp_superblock_1 *sb)
static void print_rdev(mdk_rdev_t *rdev, int major_version)
static void md_print_devices(void)
static void sync_sbs(mddev_t * mddev, int nospares)
static void md_update_sb(mddev_t * mddev, int force_change)
static int cmd_match(const char *cmd, const char *str)
struct rdev_sysfs_entry ;
static ssize_t
state_show(mdk_rdev_t *rdev, char *page)
static ssize_t
state_store(mdk_rdev_t *rdev, const char *buf, size_t len)
static struct rdev_sysfs_entry rdev_state =
__ATTR(state, S_IRUGO|S_IWUSR, state_show, state_store);
static ssize_t
errors_show(mdk_rdev_t *rdev, char *page)
static ssize_t
errors_store(mdk_rdev_t *rdev, const char *buf, size_t len)
static struct rdev_sysfs_entry rdev_errors =
__ATTR(errors, S_IRUGO|S_IWUSR, errors_show, errors_store);
static ssize_t
slot_show(mdk_rdev_t *rdev, char *page)
static ssize_t
slot_store(mdk_rdev_t *rdev, const char *buf, size_t len)
static struct rdev_sysfs_entry rdev_slot =
__ATTR(slot, S_IRUGO|S_IWUSR, slot_show, slot_store);
static ssize_t
offset_show(mdk_rdev_t *rdev, char *page)
static ssize_t
offset_store(mdk_rdev_t *rdev, const char *buf, size_t len)
static struct rdev_sysfs_entry rdev_offset =
__ATTR(offset, S_IRUGO|S_IWUSR, offset_show, offset_store);
static ssize_t
rdev_size_show(mdk_rdev_t *rdev, char *page)
static int overlaps(sector_t s1, sector_t l1, sector_t s2, sector_t l2)
static int strict_blocks_to_sectors(const char *buf, sector_t *sectors)
static ssize_t
rdev_size_store(mdk_rdev_t *rdev, const char *buf, size_t len)
static struct rdev_sysfs_entry rdev_size =
__ATTR(size, S_IRUGO|S_IWUSR, rdev_size_show, rdev_size_store);
static ssize_t recovery_start_show(mdk_rdev_t *rdev, char *page)
static ssize_t recovery_start_store(mdk_rdev_t *rdev, const char *buf, size_t len)
static struct rdev_sysfs_entry rdev_recovery_start =
__ATTR(recovery_start, S_IRUGO|S_IWUSR, recovery_start_show, recovery_start_store);
static struct attribute *rdev_default_attrs[] = ;
static ssize_t
rdev_attr_show(struct kobject *kobj, struct attribute *attr, char *page)
static ssize_t
rdev_attr_store(struct kobject *kobj, struct attribute *attr,
const char *page, size_t length)
static void rdev_free(struct kobject *ko)
static const struct sysfs_ops rdev_sysfs_ops = ;
static struct kobj_type rdev_ktype = ;
void md_rdev_init(mdk_rdev_t *rdev)
EXPORT_SYMBOL_GPL(md_rdev_init);
static mdk_rdev_t *md_import_device(dev_t newdev, int super_format, int super_minor)
static void analyze_sbs(mddev_t * mddev)
int strict_strtoul_scaled(const char *cp, unsigned long *res, int scale)
static void md_safemode_timeout(unsigned long data);
static ssize_t
safe_delay_show(mddev_t *mddev, char *page)
static ssize_t
safe_delay_store(mddev_t *mddev, const char *cbuf, size_t len)
static struct md_sysfs_entry md_safe_delay =
__ATTR(safe_mode_delay, S_IRUGO|S_IWUSR,safe_delay_show, safe_delay_store);
static ssize_t
level_show(mddev_t *mddev, char *page)
static ssize_t
level_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_level =
__ATTR(level, S_IRUGO|S_IWUSR, level_show, level_store);
static ssize_t
layout_show(mddev_t *mddev, char *page)
static ssize_t
layout_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_layout =
__ATTR(layout, S_IRUGO|S_IWUSR, layout_show, layout_store);
static ssize_t
raid_disks_show(mddev_t *mddev, char *page)
static int update_raid_disks(mddev_t *mddev, int raid_disks);
static ssize_t
raid_disks_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_raid_disks =
__ATTR(raid_disks, S_IRUGO|S_IWUSR, raid_disks_show, raid_disks_store);
static ssize_t
chunk_size_show(mddev_t *mddev, char *page)
static ssize_t
chunk_size_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_chunk_size =
__ATTR(chunk_size, S_IRUGO|S_IWUSR, chunk_size_show, chunk_size_store);
static ssize_t
resync_start_show(mddev_t *mddev, char *page)
static ssize_t
resync_start_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_resync_start =
__ATTR(resync_start, S_IRUGO|S_IWUSR, resync_start_show, resync_start_store);
enum array_state ;
static char *array_states[] = ;
static int match_word(const char *word, char **list)
static ssize_t
array_state_show(mddev_t *mddev, char *page)
static int do_md_stop(mddev_t * mddev, int ro, int is_open);
static int md_set_readonly(mddev_t * mddev, int is_open);
static int do_md_run(mddev_t * mddev);
static int restart_array(mddev_t *mddev);
static ssize_t
array_state_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_array_state =
__ATTR(array_state, S_IRUGO|S_IWUSR, array_state_show, array_state_store);
static ssize_t
max_corrected_read_errors_show(mddev_t *mddev, char *page)
static ssize_t
max_corrected_read_errors_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry max_corr_read_errors =
__ATTR(max_read_errors, S_IRUGO|S_IWUSR, max_corrected_read_errors_show,
max_corrected_read_errors_store);
static ssize_t
null_show(mddev_t *mddev, char *page)
static ssize_t
new_dev_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_new_device =
__ATTR(new_dev, S_IWUSR, null_show, new_dev_store);
static ssize_t
bitmap_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_bitmap =
__ATTR(bitmap_set_bits, S_IWUSR, null_show, bitmap_store);
static ssize_t
size_show(mddev_t *mddev, char *page)
static int update_size(mddev_t *mddev, sector_t num_sectors);
static ssize_t
size_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_size =
__ATTR(component_size, S_IRUGO|S_IWUSR, size_show, size_store);
static ssize_t
metadata_show(mddev_t *mddev, char *page)
static ssize_t
metadata_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_metadata =
__ATTR(metadata_version, S_IRUGO|S_IWUSR, metadata_show, metadata_store);
static ssize_t
action_show(mddev_t *mddev, char *page)
static void reap_sync_thread(mddev_t *mddev);
static ssize_t
action_store(mddev_t *mddev, const char *page, size_t len)
static ssize_t
mismatch_cnt_show(mddev_t *mddev, char *page)
static struct md_sysfs_entry md_scan_mode =
__ATTR(sync_action, S_IRUGO|S_IWUSR, action_show, action_store);
static struct md_sysfs_entry md_mismatches = __ATTR_RO(mismatch_cnt);
static ssize_t
sync_min_show(mddev_t *mddev, char *page)
static ssize_t
sync_min_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_sync_min =
__ATTR(sync_speed_min, S_IRUGO|S_IWUSR, sync_min_show, sync_min_store);
static ssize_t
sync_max_show(mddev_t *mddev, char *page)
static ssize_t
sync_max_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_sync_max =
__ATTR(sync_speed_max, S_IRUGO|S_IWUSR, sync_max_show, sync_max_store);
static ssize_t
degraded_show(mddev_t *mddev, char *page)
static struct md_sysfs_entry md_degraded = __ATTR_RO(degraded);
static ssize_t
sync_force_parallel_show(mddev_t *mddev, char *page)
static ssize_t
sync_force_parallel_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_sync_force_parallel =
__ATTR(sync_force_parallel, S_IRUGO|S_IWUSR,
sync_force_parallel_show, sync_force_parallel_store);
static ssize_t
sync_speed_show(mddev_t *mddev, char *page)
static struct md_sysfs_entry md_sync_speed = __ATTR_RO(sync_speed);
static ssize_t
sync_completed_show(mddev_t *mddev, char *page)
static struct md_sysfs_entry md_sync_completed = __ATTR_RO(sync_completed);
static ssize_t
min_sync_show(mddev_t *mddev, char *page)
static ssize_t
min_sync_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_min_sync =
__ATTR(sync_min, S_IRUGO|S_IWUSR, min_sync_show, min_sync_store);
static ssize_t
max_sync_show(mddev_t *mddev, char *page)
static ssize_t
max_sync_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_max_sync =
__ATTR(sync_max, S_IRUGO|S_IWUSR, max_sync_show, max_sync_store);
static ssize_t
suspend_lo_show(mddev_t *mddev, char *page)
static ssize_t
suspend_lo_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_suspend_lo =
__ATTR(suspend_lo, S_IRUGO|S_IWUSR, suspend_lo_show, suspend_lo_store);
static ssize_t
suspend_hi_show(mddev_t *mddev, char *page)
static ssize_t
suspend_hi_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_suspend_hi =
__ATTR(suspend_hi, S_IRUGO|S_IWUSR, suspend_hi_show, suspend_hi_store);
static ssize_t
reshape_position_show(mddev_t *mddev, char *page)
static ssize_t
reshape_position_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_reshape_position =
__ATTR(reshape_position, S_IRUGO|S_IWUSR, reshape_position_show,
reshape_position_store);
static ssize_t
array_size_show(mddev_t *mddev, char *page)
static ssize_t
array_size_store(mddev_t *mddev, const char *buf, size_t len)
static struct md_sysfs_entry md_array_size =
__ATTR(array_size, S_IRUGO|S_IWUSR, array_size_show,
array_size_store);
static struct attribute *md_default_attrs[] = ;
static struct attribute *md_redundancy_attrs[] = ;
static struct attribute_group md_redundancy_group = ;
static ssize_t
md_attr_show(struct kobject *kobj, struct attribute *attr, char *page)
static ssize_t
md_attr_store(struct kobject *kobj, struct attribute *attr,
const char *page, size_t length)
static void md_free(struct kobject *ko)
static const struct sysfs_ops md_sysfs_ops = ;
static struct kobj_type md_ktype = ;
int mdp_major = 0;
static void mddev_delayed_delete(struct work_struct *ws)
static int md_alloc(dev_t dev, char *name)
static struct kobject *md_probe(dev_t dev, int *part, void *data)
static int add_named_array(const char *val, struct kernel_param *kp)
static void md_safemode_timeout(unsigned long data)
static int start_dirty_degraded;
int md_run(mddev_t *mddev)
EXPORT_SYMBOL_GPL(md_run);
static int do_md_run(mddev_t *mddev)
static int restart_array(mddev_t *mddev)
static int deny_bitmap_write_access(struct file * file)
void restore_bitmap_write_access(struct file *file)
static void md_clean(mddev_t *mddev)
static void __md_stop_writes(mddev_t *mddev)
void md_stop_writes(mddev_t *mddev)
EXPORT_SYMBOL_GPL(md_stop_writes);
void md_stop(mddev_t *mddev)
EXPORT_SYMBOL_GPL(md_stop);
static int md_set_readonly(mddev_t *mddev, int is_open)
static int do_md_stop(mddev_t * mddev, int mode, int is_open)
static void autorun_array(mddev_t *mddev)
static void autorun_devices(int part)
static int get_version(void __user * arg)
static int get_array_info(mddev_t * mddev, void __user * arg)
static int get_bitmap_file(mddev_t * mddev, void __user * arg)
static int get_disk_info(mddev_t * mddev, void __user * arg)
static int add_new_disk(mddev_t * mddev, mdu_disk_info_t *info)
static int hot_remove_disk(mddev_t * mddev, dev_t dev)
static int hot_add_disk(mddev_t * mddev, dev_t dev)
static int set_bitmap_file(mddev_t *mddev, int fd)
static int set_array_info(mddev_t * mddev, mdu_array_info_t *info)
void md_set_array_sectors(mddev_t *mddev, sector_t array_sectors)
EXPORT_SYMBOL(md_set_array_sectors);
static int update_size(mddev_t *mddev, sector_t num_sectors)
static int update_raid_disks(mddev_t *mddev, int raid_disks)
static int update_array_info(mddev_t *mddev, mdu_array_info_t *info)
static int set_disk_faulty(mddev_t *mddev, dev_t dev)
static int md_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int md_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int md_compat_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int md_open(struct block_device *bdev, fmode_t mode)
static int md_release(struct gendisk *disk, fmode_t mode)
static int md_media_changed(struct gendisk *disk)
static int md_revalidate(struct gendisk *disk)
static const struct block_device_operations md_fops =
;
static int md_thread(void * arg)
void md_wakeup_thread(mdk_thread_t *thread)
mdk_thread_t *md_register_thread(void (*run) (mddev_t *), mddev_t *mddev,
const char *name)
void md_unregister_thread(mdk_thread_t **threadp)
void md_error(mddev_t *mddev, mdk_rdev_t *rdev)
static void status_unused(struct seq_file *seq)
static void status_resync(struct seq_file *seq, mddev_t * mddev)
static void *md_seq_start(struct seq_file *seq, loff_t *pos)
static void *md_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void md_seq_stop(struct seq_file *seq, void *v)
struct mdstat_info ;
static int md_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations md_seq_ops = ;
static int md_seq_open(struct inode *inode, struct file *file)
static unsigned int mdstat_poll(struct file *filp, poll_table *wait)
static const struct file_operations md_seq_fops = ;
int register_md_personality(struct mdk_personality *p)
int unregister_md_personality(struct mdk_personality *p)
static int is_mddev_idle(mddev_t *mddev, int init)
void md_done_sync(mddev_t *mddev, int blocks, int ok)
void md_write_start(mddev_t *mddev, struct bio *bi)
void md_write_end(mddev_t *mddev)
int md_allow_write(mddev_t *mddev)
EXPORT_SYMBOL_GPL(md_allow_write);
#define SYNC_MARKS	10
#define	SYNC_MARK_STEP	(3*HZ)
void md_do_sync(mddev_t *mddev)
EXPORT_SYMBOL_GPL(md_do_sync);
static int remove_and_add_spares(mddev_t *mddev)
static void reap_sync_thread(mddev_t *mddev)
void md_check_recovery(mddev_t *mddev)
void md_wait_for_blocked_rdev(mdk_rdev_t *rdev, mddev_t *mddev)
EXPORT_SYMBOL(md_wait_for_blocked_rdev);
static int md_notify_reboot(struct notifier_block *this,
unsigned long code, void *x)
static struct notifier_block md_notifier = ;
static void md_geninit(void)
static int __init md_init(void)
static LIST_HEAD(all_detected_devices);
struct detected_devices_node ;
void md_autodetect_dev(dev_t dev)
static void autostart_arrays(int part)
static __exit void md_exit(void)
subsys_initcall(md_init);
module_exit(md_exit)
static int get_ro(char *buffer, struct kernel_param *kp)
static int set_ro(const char *val, struct kernel_param *kp)
module_param_call(start_ro, set_ro, get_ro, NULL, S_IRUSR|S_IWUSR);
module_param(start_dirty_degraded, int, S_IRUGO|S_IWUSR);
module_param_call(new_array, add_named_array, NULL, NULL, S_IWUSR);
EXPORT_SYMBOL(register_md_personality);
EXPORT_SYMBOL(unregister_md_personality);
EXPORT_SYMBOL(md_error);
EXPORT_SYMBOL(md_done_sync);
EXPORT_SYMBOL(md_write_start);
EXPORT_SYMBOL(md_write_end);
EXPORT_SYMBOL(md_register_thread);
EXPORT_SYMBOL(md_unregister_thread);
EXPORT_SYMBOL(md_wakeup_thread);
EXPORT_SYMBOL(md_check_recovery);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MD RAID framework");
MODULE_ALIAS("md");
MODULE_ALIAS_BLOCKDEV_MAJOR(MD_MAJOR);
