static DEFINE_MUTEX(xt_rateest_mutex);
#define RATEEST_HSIZE	16
static struct hlist_head rateest_hash[RATEEST_HSIZE] __read_mostly;
static unsigned int jhash_rnd __read_mostly;
static bool rnd_inited __read_mostly;
static unsigned int xt_rateest_hash(const char *name)
static void xt_rateest_hash_insert(struct xt_rateest *est)
struct xt_rateest *xt_rateest_lookup(const char *name)
EXPORT_SYMBOL_GPL(xt_rateest_lookup);
static void xt_rateest_free_rcu(struct rcu_head *head)
void xt_rateest_put(struct xt_rateest *est)
EXPORT_SYMBOL_GPL(xt_rateest_put);
static unsigned int
xt_rateest_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int xt_rateest_tg_checkentry(const struct xt_tgchk_param *par)
static void xt_rateest_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target xt_rateest_tg_reg __read_mostly = ;
static int __init xt_rateest_tg_init(void)
static void __exit xt_rateest_tg_fini(void)
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Xtables: packet rate estimator");
MODULE_ALIAS("ipt_RATEEST");
MODULE_ALIAS("ip6t_RATEEST");
module_init(xt_rateest_tg_init);
module_exit(xt_rateest_tg_fini);
