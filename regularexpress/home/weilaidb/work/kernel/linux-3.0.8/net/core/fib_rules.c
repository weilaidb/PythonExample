int fib_default_rule_add(struct fib_rules_ops *ops,
u32 pref, u32 table, u32 flags)
EXPORT_SYMBOL(fib_default_rule_add);
u32 fib_default_rule_pref(struct fib_rules_ops *ops)
EXPORT_SYMBOL(fib_default_rule_pref);
static void notify_rule_change(int event, struct fib_rule *rule,
struct fib_rules_ops *ops, struct nlmsghdr *nlh,
u32 pid);
static struct fib_rules_ops *lookup_rules_ops(struct net *net, int family)
static void rules_ops_put(struct fib_rules_ops *ops)
static void flush_route_cache(struct fib_rules_ops *ops)
static int __fib_rules_register(struct fib_rules_ops *ops)
struct fib_rules_ops *
fib_rules_register(const struct fib_rules_ops *tmpl, struct net *net)
EXPORT_SYMBOL_GPL(fib_rules_register);
static void fib_rules_cleanup_ops(struct fib_rules_ops *ops)
static void fib_rules_put_rcu(struct rcu_head *head)
void fib_rules_unregister(struct fib_rules_ops *ops)
EXPORT_SYMBOL_GPL(fib_rules_unregister);
static int fib_rule_match(struct fib_rule *rule, struct fib_rules_ops *ops,
struct flowi *fl, int flags)
int fib_rules_lookup(struct fib_rules_ops *ops, struct flowi *fl,
int flags, struct fib_lookup_arg *arg)
EXPORT_SYMBOL_GPL(fib_rules_lookup);
static int validate_rulemsg(struct fib_rule_hdr *frh, struct nlattr **tb,
struct fib_rules_ops *ops)
static int fib_nl_newrule(struct sk_buff *skb, struct nlmsghdr* nlh, void *arg)
static int fib_nl_delrule(struct sk_buff *skb, struct nlmsghdr* nlh, void *arg)
static inline size_t fib_rule_nlmsg_size(struct fib_rules_ops *ops,
struct fib_rule *rule)
static int fib_nl_fill_rule(struct sk_buff *skb, struct fib_rule *rule,
u32 pid, u32 seq, int type, int flags,
struct fib_rules_ops *ops)
static int dump_rules(struct sk_buff *skb, struct netlink_callback *cb,
struct fib_rules_ops *ops)
static int fib_nl_dumprule(struct sk_buff *skb, struct netlink_callback *cb)
static void notify_rule_change(int event, struct fib_rule *rule,
struct fib_rules_ops *ops, struct nlmsghdr *nlh,
u32 pid)
static void attach_rules(struct list_head *rules, struct net_device *dev)
static void detach_rules(struct list_head *rules, struct net_device *dev)
static int fib_rules_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block fib_rules_notifier = ;
static int __net_init fib_rules_net_init(struct net *net)
static struct pernet_operations fib_rules_net_ops = ;
static int __init fib_rules_init(void)
subsys_initcall(fib_rules_init);
