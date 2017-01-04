#define __NET_GEN_STATS_H
struct gnet_dump ;
extern int gnet_stats_start_copy(struct sk_buff *skb, int type,
spinlock_t *lock, struct gnet_dump *d);
extern int gnet_stats_start_copy_compat(struct sk_buff *skb, int type,
int tc_stats_type,int xstats_type,
spinlock_t *lock, struct gnet_dump *d);
extern int gnet_stats_copy_basic(struct gnet_dump *d,
struct gnet_stats_basic_packed *b);
extern int gnet_stats_copy_rate_est(struct gnet_dump *d,
const struct gnet_stats_basic_packed *b,
struct gnet_stats_rate_est *r);
extern int gnet_stats_copy_queue(struct gnet_dump *d,
struct gnet_stats_queue *q);
extern int gnet_stats_copy_app(struct gnet_dump *d, void *st, int len);
extern int gnet_stats_finish_copy(struct gnet_dump *d);
extern int gen_new_estimator(struct gnet_stats_basic_packed *bstats,
struct gnet_stats_rate_est *rate_est,
spinlock_t *stats_lock, struct nlattr *opt);
extern void gen_kill_estimator(struct gnet_stats_basic_packed *bstats,
struct gnet_stats_rate_est *rate_est);
extern int gen_replace_estimator(struct gnet_stats_basic_packed *bstats,
struct gnet_stats_rate_est *rate_est,
spinlock_t *stats_lock, struct nlattr *opt);
extern bool gen_estimator_active(const struct gnet_stats_basic_packed *bstats,
const struct gnet_stats_rate_est *rate_est);
