static struct fib_rules_ops *dn_fib_rules_ops;
struct dn_fib_rule
;
int dn_fib_lookup(struct flowidn *flp, struct dn_fib_res *res)
static int dn_fib_rule_action(struct fib_rule *rule, struct flowi *flp,
int flags, struct fib_lookup_arg *arg)
static const struct nla_policy dn_fib_rule_policy[FRA_MAX+1] = ;
static int dn_fib_rule_match(struct fib_rule *rule, struct flowi *fl, int flags)
static int dn_fib_rule_configure(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh,
struct nlattr **tb)
static int dn_fib_rule_compare(struct fib_rule *rule, struct fib_rule_hdr *frh,
struct nlattr **tb)
unsigned dnet_addr_type(__le16 addr)
static int dn_fib_rule_fill(struct fib_rule *rule, struct sk_buff *skb,
struct fib_rule_hdr *frh)
static void dn_fib_rule_flush_cache(struct fib_rules_ops *ops)
static const struct fib_rules_ops __net_initdata dn_fib_rules_ops_template = ;
void __init dn_fib_rules_init(void)
void __exit dn_fib_rules_cleanup(void)
