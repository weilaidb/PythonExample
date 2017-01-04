void fsnotify_clear_marks_by_mount(struct vfsmount *mnt)
void fsnotify_clear_vfsmount_marks_by_group(struct fsnotify_group *group)
static void fsnotify_recalc_vfsmount_mask_locked(struct vfsmount *mnt)
void fsnotify_recalc_vfsmount_mask(struct vfsmount *mnt)
void fsnotify_destroy_vfsmount_mark(struct fsnotify_mark *mark)
static struct fsnotify_mark *fsnotify_find_vfsmount_mark_locked(struct fsnotify_group *group,
struct vfsmount *mnt)
struct fsnotify_mark *fsnotify_find_vfsmount_mark(struct fsnotify_group *group,
struct vfsmount *mnt)
int fsnotify_add_vfsmount_mark(struct fsnotify_mark *mark,
struct fsnotify_group *group, struct vfsmount *mnt,
int allow_dups)
