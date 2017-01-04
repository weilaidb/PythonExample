static bool event_compare(struct fsnotify_event *old, struct fsnotify_event *new)
static struct fsnotify_event *inotify_merge(struct list_head *list,
struct fsnotify_event *event)
static int inotify_handle_event(struct fsnotify_group *group,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
struct fsnotify_event *event)
static void inotify_freeing_mark(struct fsnotify_mark *fsn_mark, struct fsnotify_group *group)
static bool inotify_should_send_event(struct fsnotify_group *group, struct inode *inode,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmount_mark,
__u32 mask, void *data, int data_type)
static int idr_callback(int id, void *p, void *data)
static void inotify_free_group_priv(struct fsnotify_group *group)
void inotify_free_event_priv(struct fsnotify_event_private_data *fsn_event_priv)
const struct fsnotify_ops inotify_fsnotify_ops = ;
