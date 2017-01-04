struct fib4_rule ;
u32 fib_rules_tclass(const struct fib_result *res)
int fib_lookup(struct net *net, struct flowi4 *flp, struct fib_result *res)
static int fib4_rule_action(struct fib_rule *rule, struct flowi *flp,
int flags, struct fib_lookup_arg *arg)
static int fib4_rule_match(struct fib_rule *rule, struct flowi *fl, int flags)
static struct fib_table *fib_empty_table(struct net *net)
static const struct nla_policy fib4_rule_policy[FRA_MAX+1] = ;
static int fib4_rule_configure(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh,
struct nlattr **tb)
static int fib4_rule_compare(struct fib_rule *rule, struct fib_rule_hdr *frh,
struct nlattr **tb)
static int fib4_rule_fill(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh)
static size_t fib4_rule_nlmsg_payload(struct fib_rule *rule)
static void fib4_rule_flush_cache(struct fib_rules_ops *ops)
static const struct fib_rules_ops __net_initdata fib4_rules_ops_template = ;
static int fib_default_rules_init(struct fib_rules_ops *ops)
int __net_init fib4_rules_init(struct net *net)
void __net_exit fib4_rules_exit(struct net *net)
