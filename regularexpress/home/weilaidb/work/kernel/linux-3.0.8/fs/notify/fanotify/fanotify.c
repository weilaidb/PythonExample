static bool should_merge(struct fsnotify_event *old, struct fsnotify_event *new)
static struct fsnotify_event *fanotify_merge(struct list_head *list,
struct fsnotify_event *event)
static int fanotify_get_response_from_access(struct fsnotify_group *group,
struct fsnotify_event *event)
static int fanotify_handle_event(struct fsnotify_group *group,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *fanotify_mark,
struct fsnotify_event *event)
static bool fanotify_should_send_event(struct fsnotify_group *group,
struct inode *to_tell,
struct fsnotify_mark *inode_mark,
struct fsnotify_mark *vfsmnt_mark,
__u32 event_mask, void *data, int data_type)
static void fanotify_free_group_priv(struct fsnotify_group *group)
const struct fsnotify_ops fanotify_fsnotify_ops = ;
