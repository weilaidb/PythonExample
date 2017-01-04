struct fib6_rule
;
struct dst_entry *fib6_rule_lookup(struct net *net, struct flowi6 *fl6,
int flags, pol_lookup_t lookup)
static int fib6_rule_action(struct fib_rule *rule, struct flowi *flp,
int flags, struct fib_lookup_arg *arg)
static int fib6_rule_match(struct fib_rule *rule, struct flowi *fl, int flags)
static const struct nla_policy fib6_rule_policy[FRA_MAX+1] = ;
static int fib6_rule_configure(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh,
struct nlattr **tb)
static int fib6_rule_compare(struct fib_rule *rule, struct fib_rule_hdr *frh,
struct nlattr **tb)
static int fib6_rule_fill(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh)
static u32 fib6_rule_default_pref(struct fib_rules_ops *ops)
static size_t fib6_rule_nlmsg_payload(struct fib_rule *rule)
static const struct fib_rules_ops __net_initdata fib6_rules_ops_template = ;
static int __net_init fib6_rules_net_init(struct net *net)
static void __net_exit fib6_rules_net_exit(struct net *net)
static struct pernet_operations fib6_rules_net_ops = ;
int __init fib6_rules_init(void)
void fib6_rules_cleanup(void)
