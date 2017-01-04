#define __NET_FIB_RULES_H
struct fib_rule ;
struct fib_lookup_arg ;
struct fib_rules_ops ;
#define FRA_GENERIC_POLICY \
[FRA_IIFNAME]	= , \
[FRA_OIFNAME]	= , \
[FRA_PRIORITY]	= , \
[FRA_FWMARK]	= , \
[FRA_FWMASK]	= , \
[FRA_TABLE]     = , \
[FRA_GOTO]	=
static inline void fib_rule_get(struct fib_rule *rule)
static inline void fib_rule_put_rcu(struct rcu_head *head)
static inline void fib_rule_put(struct fib_rule *rule)
static inline u32 frh_get_table(struct fib_rule_hdr *frh, struct nlattr **nla)
extern struct fib_rules_ops *fib_rules_register(const struct fib_rules_ops *, struct net *);
extern void fib_rules_unregister(struct fib_rules_ops *);
extern int			fib_rules_lookup(struct fib_rules_ops *,
struct flowi *, int flags,
struct fib_lookup_arg *);
extern int			fib_default_rule_add(struct fib_rules_ops *,
u32 pref, u32 table,
u32 flags);
extern u32			fib_default_rule_pref(struct fib_rules_ops *ops);
