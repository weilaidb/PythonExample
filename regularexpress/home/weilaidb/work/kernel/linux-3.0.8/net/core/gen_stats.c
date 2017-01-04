static inline int
gnet_stats_copy(struct gnet_dump *d, int type, void *buf, int size)
int
gnet_stats_start_copy_compat(struct sk_buff *skb, int type, int tc_stats_type,
int xstats_type, spinlock_t *lock, struct gnet_dump *d)
__acquires(lock)
EXPORT_SYMBOL(gnet_stats_start_copy_compat);
int
gnet_stats_start_copy(struct sk_buff *skb, int type, spinlock_t *lock,
struct gnet_dump *d)
EXPORT_SYMBOL(gnet_stats_start_copy);
int
gnet_stats_copy_basic(struct gnet_dump *d, struct gnet_stats_basic_packed *b)
EXPORT_SYMBOL(gnet_stats_copy_basic);
int
gnet_stats_copy_rate_est(struct gnet_dump *d,
const struct gnet_stats_basic_packed *b,
struct gnet_stats_rate_est *r)
EXPORT_SYMBOL(gnet_stats_copy_rate_est);
int
gnet_stats_copy_queue(struct gnet_dump *d, struct gnet_stats_queue *q)
EXPORT_SYMBOL(gnet_stats_copy_queue);
int
gnet_stats_copy_app(struct gnet_dump *d, void *st, int len)
EXPORT_SYMBOL(gnet_stats_copy_app);
int
gnet_stats_finish_copy(struct gnet_dump *d)
EXPORT_SYMBOL(gnet_stats_finish_copy);
