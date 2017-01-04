static LIST_HEAD(ip_set_type_list);
static DEFINE_MUTEX(ip_set_type_mutex);
static DEFINE_RWLOCK(ip_set_ref_lock);
static struct ip_set **ip_set_list;
static ip_set_id_t ip_set_max = CONFIG_IP_SET_MAX;
#define STREQ(a, b)	(strncmp(a, b, IPSET_MAXNAMELEN) == 0)
static unsigned int max_sets;
module_param(max_sets, int, 0600);
MODULE_PARM_DESC(max_sets, "maximal number of sets");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jozsef Kadlecsik <kadlec@blackhole.kfki.hu>");
MODULE_DESCRIPTION("core IP set support");
MODULE_ALIAS_NFNL_SUBSYS(NFNL_SUBSYS_IPSET);
static inline void
ip_set_type_lock(void)
static inline void
ip_set_type_unlock(void)
static struct ip_set_type *
find_set_type(const char *name, u8 family, u8 revision)
static int
try_to_load_type(const char *name)
static int
find_set_type_get(const char *name, u8 family, u8 revision,
struct ip_set_type **found)
static int
find_set_type_minmax(const char *name, u8 family, u8 *min, u8 *max)
#define family_name(f)	((f) == AF_INET ? "inet" : \
(f) == AF_INET6 ? "inet6" : "any")
int
ip_set_type_register(struct ip_set_type *type)
EXPORT_SYMBOL_GPL(ip_set_type_register);
void
ip_set_type_unregister(struct ip_set_type *type)
EXPORT_SYMBOL_GPL(ip_set_type_unregister);
void *
ip_set_alloc(size_t size)
EXPORT_SYMBOL_GPL(ip_set_alloc);
void
ip_set_free(void *members)
EXPORT_SYMBOL_GPL(ip_set_free);
static inline bool
flag_nested(const struct nlattr *nla)
static const struct nla_policy ipaddr_policy[IPSET_ATTR_IPADDR_MAX + 1] = ;
int
ip_set_get_ipaddr4(struct nlattr *nla,  __be32 *ipaddr)
EXPORT_SYMBOL_GPL(ip_set_get_ipaddr4);
int
ip_set_get_ipaddr6(struct nlattr *nla, union nf_inet_addr *ipaddr)
EXPORT_SYMBOL_GPL(ip_set_get_ipaddr6);
static inline void
__ip_set_get(ip_set_id_t index)
static inline void
__ip_set_put(ip_set_id_t index)
int
ip_set_test(ip_set_id_t index, const struct sk_buff *skb,
u8 family, u8 dim, u8 flags)
EXPORT_SYMBOL_GPL(ip_set_test);
int
ip_set_add(ip_set_id_t index, const struct sk_buff *skb,
u8 family, u8 dim, u8 flags)
EXPORT_SYMBOL_GPL(ip_set_add);
int
ip_set_del(ip_set_id_t index, const struct sk_buff *skb,
u8 family, u8 dim, u8 flags)
EXPORT_SYMBOL_GPL(ip_set_del);
ip_set_id_t
ip_set_get_byname(const char *name, struct ip_set **set)
EXPORT_SYMBOL_GPL(ip_set_get_byname);
void
ip_set_put_byindex(ip_set_id_t index)
EXPORT_SYMBOL_GPL(ip_set_put_byindex);
const char *
ip_set_name_byindex(ip_set_id_t index)
EXPORT_SYMBOL_GPL(ip_set_name_byindex);
ip_set_id_t
ip_set_nfnl_get(const char *name)
EXPORT_SYMBOL_GPL(ip_set_nfnl_get);
ip_set_id_t
ip_set_nfnl_get_byindex(ip_set_id_t index)
EXPORT_SYMBOL_GPL(ip_set_nfnl_get_byindex);
void
ip_set_nfnl_put(ip_set_id_t index)
EXPORT_SYMBOL_GPL(ip_set_nfnl_put);
static inline bool
protocol_failed(const struct nlattr * const tb[])
static inline u32
flag_exist(const struct nlmsghdr *nlh)
static struct nlmsghdr *
start_msg(struct sk_buff *skb, u32 pid, u32 seq, unsigned int flags,
enum ipset_cmd cmd)
static const struct nla_policy ip_set_create_policy[IPSET_ATTR_CMD_MAX + 1] = ;
static ip_set_id_t
find_set_id(const char *name)
static inline struct ip_set *
find_set(const char *name)
static int
find_free_id(const char *name, ip_set_id_t *index, struct ip_set **set)
static int
ip_set_create(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static const struct nla_policy
ip_set_setname_policy[IPSET_ATTR_CMD_MAX + 1] = ;
static void
ip_set_destroy_set(ip_set_id_t index)
static int
ip_set_destroy(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static void
ip_set_flush_set(struct ip_set *set)
static int
ip_set_flush(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static const struct nla_policy
ip_set_setname2_policy[IPSET_ATTR_CMD_MAX + 1] = ;
static int
ip_set_rename(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static int
ip_set_swap(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
#define DUMP_INIT	0L
#define DUMP_ALL	1L
#define DUMP_ONE	2L
#define DUMP_LAST	3L
static int
ip_set_dump_done(struct netlink_callback *cb)
static inline void
dump_attrs(struct nlmsghdr *nlh)
static int
dump_init(struct netlink_callback *cb)
static int
ip_set_dump_start(struct sk_buff *skb, struct netlink_callback *cb)
static int
ip_set_dump(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static const struct nla_policy ip_set_adt_policy[IPSET_ATTR_CMD_MAX + 1] = ;
static int
call_ad(struct sock *ctnl, struct sk_buff *skb, struct ip_set *set,
struct nlattr *tb[], enum ipset_adt adt,
u32 flags, bool use_lineno)
static int
ip_set_uadd(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static int
ip_set_udel(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static int
ip_set_utest(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static int
ip_set_header(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static const struct nla_policy ip_set_type_policy[IPSET_ATTR_CMD_MAX + 1] = ;
static int
ip_set_type(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static const struct nla_policy
ip_set_protocol_policy[IPSET_ATTR_CMD_MAX + 1] = ;
static int
ip_set_protocol(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const attr[])
static const struct nfnl_callback ip_set_netlink_subsys_cb[IPSET_MSG_MAX] = ;
static struct nfnetlink_subsystem ip_set_netlink_subsys __read_mostly = ;
static int
ip_set_sockfn_get(struct sock *sk, int optval, void __user *user, int *len)
static struct nf_sockopt_ops so_set __read_mostly = ;
static int __init
ip_set_init(void)
static void __exit
ip_set_fini(void)
module_init(ip_set_init);
module_exit(ip_set_fini);
