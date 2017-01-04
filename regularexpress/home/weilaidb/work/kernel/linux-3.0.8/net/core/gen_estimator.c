#define EST_MAX_INTERVAL	5
struct gen_estimator
;
struct gen_estimator_head
;
static struct gen_estimator_head elist[EST_MAX_INTERVAL+1];
static DEFINE_RWLOCK(est_lock);
static struct rb_root est_root = RB_ROOT;
static DEFINE_SPINLOCK(est_tree_lock);
static void est_timer(unsigned long arg)
static void gen_add_node(struct gen_estimator *est)
static
struct gen_estimator *gen_find_node(const struct gnet_stats_basic_packed *bstats,
const struct gnet_stats_rate_est *rate_est)
int gen_new_estimator(struct gnet_stats_basic_packed *bstats,
struct gnet_stats_rate_est *rate_est,
spinlock_t *stats_lock,
struct nlattr *opt)
EXPORT_SYMBOL(gen_new_estimator);
void gen_kill_estimator(struct gnet_stats_basic_packed *bstats,
struct gnet_stats_rate_est *rate_est)
EXPORT_SYMBOL(gen_kill_estimator);
int gen_replace_estimator(struct gnet_stats_basic_packed *bstats,
struct gnet_stats_rate_est *rate_est,
spinlock_t *stats_lock, struct nlattr *opt)
EXPORT_SYMBOL(gen_replace_estimator);
bool gen_estimator_active(const struct gnet_stats_basic_packed *bstats,
const struct gnet_stats_rate_est *rate_est)
EXPORT_SYMBOL(gen_estimator_active);
