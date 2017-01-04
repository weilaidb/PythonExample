extern void register_wlags_sysfs(struct net_device *);
extern void unregister_wlags_sysfs(struct net_device *);
static inline void register_wlags_sysfs(struct net_device *net)
static inline void unregister_wlags_sysfs(struct net_device *net)
