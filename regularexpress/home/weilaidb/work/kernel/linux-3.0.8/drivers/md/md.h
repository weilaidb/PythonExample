#define _MD_MD_H
#define MaxSector (~(sector_t)0)
typedef struct mddev_s mddev_t;
typedef struct mdk_rdev_s mdk_rdev_t;
struct mdk_rdev_s
;
struct mddev_s
;
static inline void rdev_dec_pending(mdk_rdev_t *rdev, mddev_t *mddev)
static inline void md_sync_acct(struct block_device *bdev, unsigned long nr_sectors)
struct mdk_personality
;
struct md_sysfs_entry ;
extern struct attribute_group md_bitmap_group;
static inline struct sysfs_dirent *sysfs_get_dirent_safe(struct sysfs_dirent *sd, char *name)
static inline void sysfs_notify_dirent_safe(struct sysfs_dirent *sd)
static inline char * mdname (mddev_t * mddev)
#define rdev_for_each_list(rdev, tmp, head)				\
list_for_each_entry_safe(rdev, tmp, head, same_set)
#define rdev_for_each(rdev, tmp, mddev)				\
list_for_each_entry_safe(rdev, tmp, &((mddev)->disks), same_set)
#define rdev_for_each_rcu(rdev, mddev)				\
list_for_each_entry_rcu(rdev, &((mddev)->disks), same_set)
typedef struct mdk_thread_s  mdk_thread_t;
#define THREAD_WAKEUP  0
#define __wait_event_lock_irq(wq, condition, lock, cmd) 		\
do  while (0)
#define wait_event_lock_irq(wq, condition, lock, cmd) 			\
do  while (0)
static inline void safe_put_page(struct page *p)
extern int register_md_personality(struct mdk_personality *p);
extern int unregister_md_personality(struct mdk_personality *p);
extern mdk_thread_t * md_register_thread(void (*run) (mddev_t *mddev),
mddev_t *mddev, const char *name);
extern void md_unregister_thread(mdk_thread_t **threadp);
extern void md_wakeup_thread(mdk_thread_t *thread);
extern void md_check_recovery(mddev_t *mddev);
extern void md_write_start(mddev_t *mddev, struct bio *bi);
extern void md_write_end(mddev_t *mddev);
extern void md_done_sync(mddev_t *mddev, int blocks, int ok);
extern void md_error(mddev_t *mddev, mdk_rdev_t *rdev);
extern int mddev_congested(mddev_t *mddev, int bits);
extern void md_flush_request(mddev_t *mddev, struct bio *bio);
extern void md_super_write(mddev_t *mddev, mdk_rdev_t *rdev,
sector_t sector, int size, struct page *page);
extern void md_super_wait(mddev_t *mddev);
extern int sync_page_io(mdk_rdev_t *rdev, sector_t sector, int size,
struct page *page, int rw, bool metadata_op);
extern void md_do_sync(mddev_t *mddev);
extern void md_new_event(mddev_t *mddev);
extern int md_allow_write(mddev_t *mddev);
extern void md_wait_for_blocked_rdev(mdk_rdev_t *rdev, mddev_t *mddev);
extern void md_set_array_sectors(mddev_t *mddev, sector_t array_sectors);
extern int md_check_no_bitmap(mddev_t *mddev);
extern int md_integrity_register(mddev_t *mddev);
extern void md_integrity_add_rdev(mdk_rdev_t *rdev, mddev_t *mddev);
extern int strict_strtoul_scaled(const char *cp, unsigned long *res, int scale);
extern void restore_bitmap_write_access(struct file *file);
extern void mddev_init(mddev_t *mddev);
extern int md_run(mddev_t *mddev);
extern void md_stop(mddev_t *mddev);
extern void md_stop_writes(mddev_t *mddev);
extern void md_rdev_init(mdk_rdev_t *rdev);
extern void mddev_suspend(mddev_t *mddev);
extern void mddev_resume(mddev_t *mddev);
extern struct bio *bio_clone_mddev(struct bio *bio, gfp_t gfp_mask,
mddev_t *mddev);
extern struct bio *bio_alloc_mddev(gfp_t gfp_mask, int nr_iovecs,
mddev_t *mddev);
extern int mddev_check_plugged(mddev_t *mddev);
