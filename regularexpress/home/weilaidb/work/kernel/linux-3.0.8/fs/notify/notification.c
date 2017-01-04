static struct kmem_cache *fsnotify_event_cachep;
static struct kmem_cache *fsnotify_event_holder_cachep;
static struct fsnotify_event *q_overflow_event;
static atomic_t fsnotify_sync_cookie = ATOMIC_INIT(0);
u32 fsnotify_get_cookie(void)
EXPORT_SYMBOL_GPL(fsnotify_get_cookie);
bool fsnotify_notify_queue_is_empty(struct fsnotify_group *group)
void fsnotify_get_event(struct fsnotify_event *event)
void fsnotify_put_event(struct fsnotify_event *event)
struct fsnotify_event_holder *fsnotify_alloc_event_holder(void)
void fsnotify_destroy_event_holder(struct fsnotify_event_holder *holder)
struct fsnotify_event_private_data *fsnotify_remove_priv_from_event(struct fsnotify_group *group, struct fsnotify_event *event)
struct fsnotify_event *fsnotify_add_notify_event(struct fsnotify_group *group, struct fsnotify_event *event,
struct fsnotify_event_private_data *priv,
struct fsnotify_event *(*merge)(struct list_head *,
struct fsnotify_event *))
struct fsnotify_event *fsnotify_remove_notify_event(struct fsnotify_group *group)
struct fsnotify_event *fsnotify_peek_notify_event(struct fsnotify_group *group)
void fsnotify_flush_notify(struct fsnotify_group *group)
static void initialize_event(struct fsnotify_event *event)
int fsnotify_replace_event(struct fsnotify_event_holder *old_holder,
struct fsnotify_event *new_event)
struct fsnotify_event *fsnotify_clone_event(struct fsnotify_event *old_event)
struct fsnotify_event *fsnotify_create_event(struct inode *to_tell, __u32 mask, void *data,
int data_type, const unsigned char *name,
u32 cookie, gfp_t gfp)
__init int fsnotify_notification_init(void)
subsys_initcall(fsnotify_notification_init);
