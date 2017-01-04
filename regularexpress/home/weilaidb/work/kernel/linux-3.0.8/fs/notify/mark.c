struct srcu_struct fsnotify_mark_srcu;
static DEFINE_SPINLOCK(destroy_lock);
static LIST_HEAD(destroy_list);
static DECLARE_WAIT_QUEUE_HEAD(destroy_waitq);
void fsnotify_get_mark(struct fsnotify_mark *mark)
void fsnotify_put_mark(struct fsnotify_mark *mark)
void fsnotify_destroy_mark(struct fsnotify_mark *mark)
void fsnotify_set_mark_mask_locked(struct fsnotify_mark *mark, __u32 mask)
void fsnotify_set_mark_ignored_mask_locked(struct fsnotify_mark *mark, __u32 mask)
int fsnotify_add_mark(struct fsnotify_mark *mark,
struct fsnotify_group *group, struct inode *inode,
struct vfsmount *mnt, int allow_dups)
void fsnotify_clear_marks_by_group_flags(struct fsnotify_group *group,
unsigned int flags)
void fsnotify_clear_marks_by_group(struct fsnotify_group *group)
void fsnotify_duplicate_mark(struct fsnotify_mark *new, struct fsnotify_mark *old)
void fsnotify_init_mark(struct fsnotify_mark *mark,
void (*free_mark)(struct fsnotify_mark *mark))
static int fsnotify_mark_destroy(void *ignored)
static int __init fsnotify_mark_init(void)
device_initcall(fsnotify_mark_init);
