static void fsnotify_recalc_inode_mask_locked(struct inode *inode)
void fsnotify_recalc_inode_mask(struct inode *inode)
void fsnotify_destroy_inode_mark(struct fsnotify_mark *mark)
void fsnotify_clear_marks_by_inode(struct inode *inode)
void fsnotify_clear_inode_marks_by_group(struct fsnotify_group *group)
struct fsnotify_mark *fsnotify_find_inode_mark_locked(struct fsnotify_group *group,
struct inode *inode)
struct fsnotify_mark *fsnotify_find_inode_mark(struct fsnotify_group *group,
struct inode *inode)
void fsnotify_set_inode_mark_mask_locked(struct fsnotify_mark *mark,
__u32 mask)
int fsnotify_add_inode_mark(struct fsnotify_mark *mark,
struct fsnotify_group *group, struct inode *inode,
int allow_dups)
void fsnotify_unmount_inodes(struct list_head *list)
