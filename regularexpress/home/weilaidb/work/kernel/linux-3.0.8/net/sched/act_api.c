void tcf_hash_destroy(struct tcf_common *p, struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_destroy);
int tcf_hash_release(struct tcf_common *p, int bind,
struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_release);
static int tcf_dump_walker(struct sk_buff *skb, struct netlink_callback *cb,
struct tc_action *a, struct tcf_hashinfo *hinfo)
static int tcf_del_walker(struct sk_buff *skb, struct tc_action *a,
struct tcf_hashinfo *hinfo)
int tcf_generic_walker(struct sk_buff *skb, struct netlink_callback *cb,
int type, struct tc_action *a)
EXPORT_SYMBOL(tcf_generic_walker);
struct tcf_common *tcf_hash_lookup(u32 index, struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_lookup);
u32 tcf_hash_new_index(u32 *idx_gen, struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_new_index);
int tcf_hash_search(struct tc_action *a, u32 index)
EXPORT_SYMBOL(tcf_hash_search);
struct tcf_common *tcf_hash_check(u32 index, struct tc_action *a, int bind,
struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_check);
struct tcf_common *tcf_hash_create(u32 index, struct nlattr *est,
struct tc_action *a, int size, int bind,
u32 *idx_gen, struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_create);
void tcf_hash_insert(struct tcf_common *p, struct tcf_hashinfo *hinfo)
EXPORT_SYMBOL(tcf_hash_insert);
static struct tc_action_ops *act_base = NULL;
static DEFINE_RWLOCK(act_mod_lock);
int tcf_register_action(struct tc_action_ops *act)
EXPORT_SYMBOL(tcf_register_action);
int tcf_unregister_action(struct tc_action_ops *act)
EXPORT_SYMBOL(tcf_unregister_action);
static struct tc_action_ops *tc_lookup_action_n(char *kind)
static struct tc_action_ops *tc_lookup_action(struct nlattr *kind)
int tcf_action_exec(struct sk_buff *skb, struct tc_action *act,
struct tcf_result *res)
EXPORT_SYMBOL(tcf_action_exec);
void tcf_action_destroy(struct tc_action *act, int bind)
int
tcf_action_dump_old(struct sk_buff *skb, struct tc_action *a, int bind, int ref)
int
tcf_action_dump_1(struct sk_buff *skb, struct tc_action *a, int bind, int ref)
EXPORT_SYMBOL(tcf_action_dump_1);
int
tcf_action_dump(struct sk_buff *skb, struct tc_action *act, int bind, int ref)
struct tc_action *tcf_action_init_1(struct nlattr *nla, struct nlattr *est,
char *name, int ovr, int bind)
struct tc_action *tcf_action_init(struct nlattr *nla, struct nlattr *est,
char *name, int ovr, int bind)
int tcf_action_copy_stats(struct sk_buff *skb, struct tc_action *a,
int compat_mode)
static int
tca_get_fill(struct sk_buff *skb, struct tc_action *a, u32 pid, u32 seq,
u16 flags, int event, int bind, int ref)
static int
act_get_notify(struct net *net, u32 pid, struct nlmsghdr *n,
struct tc_action *a, int event)
static struct tc_action *
tcf_action_get_1(struct nlattr *nla, struct nlmsghdr *n, u32 pid)
static void cleanup_a(struct tc_action *act)
static struct tc_action *create_a(int i)
static int tca_action_flush(struct net *net, struct nlattr *nla,
struct nlmsghdr *n, u32 pid)
static int
tca_action_gd(struct net *net, struct nlattr *nla, struct nlmsghdr *n,
u32 pid, int event)
static int tcf_add_notify(struct net *net, struct tc_action *a,
u32 pid, u32 seq, int event, u16 flags)
static int
tcf_action_add(struct net *net, struct nlattr *nla, struct nlmsghdr *n,
u32 pid, int ovr)
static int tc_ctl_action(struct sk_buff *skb, struct nlmsghdr *n, void *arg)
static struct nlattr *
find_dump_kind(const struct nlmsghdr *n)
static int
tc_dump_action(struct sk_buff *skb, struct netlink_callback *cb)
static int __init tc_action_init(void)
subsys_initcall(tc_action_init);
