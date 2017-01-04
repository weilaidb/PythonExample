extern struct kmem_cache *event_priv_cachep;
struct inotify_event_private_data ;
struct inotify_inode_mark ;
extern void inotify_ignored_and_remove_idr(struct fsnotify_mark *fsn_mark,
struct fsnotify_group *group);
extern void inotify_free_event_priv(struct fsnotify_event_private_data *event_priv);
extern const struct fsnotify_ops inotify_fsnotify_ops;
