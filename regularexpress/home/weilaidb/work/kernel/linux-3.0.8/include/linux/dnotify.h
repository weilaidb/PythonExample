#define _LINUX_DNOTIFY_H
struct dnotify_struct ;
#define DNOTIFY_ALL_EVENTS (FS_DELETE | FS_DELETE_CHILD |\
FS_MODIFY | FS_MODIFY_CHILD |\
FS_ACCESS | FS_ACCESS_CHILD |\
FS_ATTRIB | FS_ATTRIB_CHILD |\
FS_CREATE | FS_DN_RENAME |\
FS_MOVED_FROM | FS_MOVED_TO)
extern int dir_notify_enable;
extern void dnotify_flush(struct file *, fl_owner_t);
extern int fcntl_dirnotify(int, struct file *, unsigned long);
static inline void dnotify_flush(struct file *filp, fl_owner_t id)
static inline int fcntl_dirnotify(int fd, struct file *filp, unsigned long arg)
