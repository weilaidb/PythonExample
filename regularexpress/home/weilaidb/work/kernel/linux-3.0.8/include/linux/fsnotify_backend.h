#define __LINUX_FSNOTIFY_BACKEND_H
#define FS_ACCESS		0x00000001
#define FS_MODIFY		0x00000002
#define FS_ATTRIB		0x00000004
#define FS_CLOSE_WRITE		0x00000008
#define FS_CLOSE_NOWRITE	0x00000010
#define FS_OPEN			0x00000020
#define FS_MOVED_FROM		0x00000040
#define FS_MOVED_TO		0x00000080
#define FS_CREATE		0x00000100
#define FS_DELETE		0x00000200
#define FS_DELETE_SELF		0x00000400
#define FS_MOVE_SELF		0x00000800
#define FS_UNMOUNT		0x00002000
#define FS_Q_OVERFLOW		0x00004000
#define FS_IN_IGNORED		0x00008000
#define FS_OPEN_PERM		0x00010000
#define FS_ACCESS_PERM		0x00020000
#define FS_EXCL_UNLINK		0x04000000
#define FS_ISDIR		0x40000000
#define FS_IN_ONESHOT		0x80000000
#define FS_DN_RENAME		0x10000000
#define FS_DN_MULTISHOT		0x20000000
#define FS_EVENT_ON_CHILD	0x08000000
#define FS_EVENTS_POSS_ON_CHILD   (FS_ACCESS | FS_MODIFY | FS_ATTRIB |\
FS_CLOSE_WRITE | FS_CLOSE_NOWRITE | FS_OPEN |\
FS_MOVED_FROM | FS_MOVED_TO | FS_CREATE |\
FS_DELETE)
#define FS_MOVE			(FS_MOVED_FROM | FS_MOVED_TO)
#define ALL_FSNOTIFY_PERM_EVENTS (FS_OPEN_PERM | FS_ACCESS_PERM)
#define ALL_FSNOTIFY_EVENTS (FS_ACCESS | FS_MODIFY | FS_ATTRIB | \
FS_CLOSE_WRITE | FS_CLOSE_NOWRITE | FS_OPEN | \
FS_MOVED_FROM | FS_MOVED_TO | FS_CREATE | \
FS_DELETE | FS_DELETE_SELF | FS_MOVE_SELF | \
FS_UNMOUNT | FS_Q_OVERFLOW | FS_IN_IGNORED | \
FS_OPEN_PERM | FS_ACCESS_PERM | FS_EXCL_UNLINK | \
FS_ISDIR | FS_IN_ONESHOT | FS_DN_RENAME | \
FS_DN_MULTISHOT | FS_EVENT_ON_CHILD)
struct fsnotify_group;
struct fsnotify_event;
struct fsnotify_mark;
struct fsnotify_event_private_data;
struct fsnotify_ops ;
struct fsnotify_group ;
struct fsnotify_event_holder ;
struct fsnotify_event_private_data ;
struct fsnotify_event ;
struct fsnotify_inode_mark ;
struct fsnotify_vfsmount_mark ;
struct fsnotify_mark ;
extern int fsnotify(struct inode *to_tell, __u32 mask, void *data, int data_is,
const unsigned char *name, u32 cookie);
extern int __fsnotify_parent(struct path *path, struct dentry *dentry, __u32 mask);
extern void __fsnotify_inode_delete(struct inode *inode);
extern void __fsnotify_vfsmount_delete(struct vfsmount *mnt);
extern u32 fsnotify_get_cookie(void);
static inline int fsnotify_inode_watches_children(struct inode *inode)
static inline void __fsnotify_update_dcache_flags(struct dentry *dentry)
static inline void __fsnotify_d_instantiate(struct dentry *dentry, struct inode *inode)
extern struct fsnotify_group *fsnotify_alloc_group(const struct fsnotify_ops *ops);
extern void fsnotify_put_group(struct fsnotify_group *group);
extern void fsnotify_get_event(struct fsnotify_event *event);
extern void fsnotify_put_event(struct fsnotify_event *event);
extern struct fsnotify_event_private_data *fsnotify_remove_priv_from_event(struct fsnotify_group *group,
struct fsnotify_event *event);
extern struct fsnotify_event *fsnotify_add_notify_event(struct fsnotify_group *group,
struct fsnotify_event *event,
struct fsnotify_event_private_data *priv,
struct fsnotify_event *(*merge)(struct list_head *,
struct fsnotify_event *));
extern bool fsnotify_notify_queue_is_empty(struct fsnotify_group *group);
extern struct fsnotify_event *fsnotify_peek_notify_event(struct fsnotify_group *group);
extern struct fsnotify_event *fsnotify_remove_notify_event(struct fsnotify_group *group);
extern void fsnotify_recalc_vfsmount_mask(struct vfsmount *mnt);
extern void fsnotify_recalc_inode_mask(struct inode *inode);
extern void fsnotify_init_mark(struct fsnotify_mark *mark, void (*free_mark)(struct fsnotify_mark *mark));
extern struct fsnotify_mark *fsnotify_find_inode_mark(struct fsnotify_group *group, struct inode *inode);
extern struct fsnotify_mark *fsnotify_find_vfsmount_mark(struct fsnotify_group *group, struct vfsmount *mnt);
extern void fsnotify_duplicate_mark(struct fsnotify_mark *new, struct fsnotify_mark *old);
extern void fsnotify_set_mark_ignored_mask_locked(struct fsnotify_mark *mark, __u32 mask);
extern void fsnotify_set_mark_mask_locked(struct fsnotify_mark *mark, __u32 mask);
extern int fsnotify_add_mark(struct fsnotify_mark *mark, struct fsnotify_group *group,
struct inode *inode, struct vfsmount *mnt, int allow_dups);
extern void fsnotify_destroy_mark(struct fsnotify_mark *mark);
extern void fsnotify_clear_vfsmount_marks_by_group(struct fsnotify_group *group);
extern void fsnotify_clear_inode_marks_by_group(struct fsnotify_group *group);
extern void fsnotify_clear_marks_by_group_flags(struct fsnotify_group *group, unsigned int flags);
extern void fsnotify_clear_marks_by_group(struct fsnotify_group *group);
extern void fsnotify_get_mark(struct fsnotify_mark *mark);
extern void fsnotify_put_mark(struct fsnotify_mark *mark);
extern void fsnotify_unmount_inodes(struct list_head *list);
extern struct fsnotify_event *fsnotify_create_event(struct inode *to_tell, __u32 mask,
void *data, int data_is,
const unsigned char *name,
u32 cookie, gfp_t gfp);
extern struct fsnotify_event *fsnotify_clone_event(struct fsnotify_event *old_event);
extern int fsnotify_replace_event(struct fsnotify_event_holder *old_holder,
struct fsnotify_event *new_event);
static inline int fsnotify(struct inode *to_tell, __u32 mask, void *data, int data_is,
const unsigned char *name, u32 cookie)
static inline int __fsnotify_parent(struct path *path, struct dentry *dentry, __u32 mask)
static inline void __fsnotify_inode_delete(struct inode *inode)
static inline void __fsnotify_vfsmount_delete(struct vfsmount *mnt)
static inline void __fsnotify_update_dcache_flags(struct dentry *dentry)
static inline void __fsnotify_d_instantiate(struct dentry *dentry, struct inode *inode)
static inline u32 fsnotify_get_cookie(void)
static inline void fsnotify_unmount_inodes(struct list_head *list)
