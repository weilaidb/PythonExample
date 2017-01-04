struct audit_watch ;
struct audit_parent ;
static struct fsnotify_group *audit_watch_group;
#define AUDIT_FS_WATCH (FS_MOVE | FS_CREATE | FS_DELETE | FS_DELETE_SELF |\
FS_MOVE_SELF | FS_EVENT_ON_CHILD)
static void audit_free_parent(struct audit_parent *parent)
static void audit_watch_free_mark(struct fsnotify_mark *entry)
static void audit_get_parent(struct audit_parent *parent)
static void audit_put_parent(struct audit_parent *parent)
static inline struct audit_parent *audit_find_parent(struct inode *inode)
void audit_get_watch(struct audit_watch *watch)
void audit_put_watch(struct audit_watch *watch)
static void audit_remove_watch(struct audit_watch *watch)
char *audit_watch_path(struct audit_watch *watch)
int audit_watch_compare(struct audit_watch *watch, unsigned long ino, dev_t dev)
static struct audit_parent *audit_init_parent(struct path *path)
static struct audit_watch *audit_init_watch(char *path)
int audit_to_watch(struct audit_krule *krule, char *path, int len, u32 op)
static struct audit_watch *audit_dupe_watch(struct audit_watch *old)
static void audit_watch_log_rule_change(struct audit_krule *r, struct audit_watch *w, char *op)
static void audit_update_watch(struct audit_parent *parent,
const char *dname, dev_t dev,
unsigned long ino, unsigned invalidating)
static void audit_remove_parent_watches(struct audit_parent *parent)
static int audit_get_nd(struct audit_watch *watch, struct path *parent)
static void audit_add_to_parent(struct audit_krule *krule,
struct audit_parent *parent)
int audit_add_watch(struct audit_krule *krule, struct list_head **list)
void audit_remove_watch_rule(struct audit_krule *krule)
static bool audit_watch_should_send_event(struct fsnotify_group *group, struct inode *inode,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
__u32 mask, void *data, int data_type)
static int audit_watch_handle_event(struct fsnotify_group *group,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
struct fsnotify_event *event)
static const struct fsnotify_ops audit_watch_fsnotify_ops = ;
static int __init audit_watch_init(void)
device_initcall(audit_watch_init);
