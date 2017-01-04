struct netlbl_unlhsh_tbl ;
#define netlbl_unlhsh_addr4_entry(iter) \
container_of(iter, struct netlbl_unlhsh_addr4, list)
struct netlbl_unlhsh_addr4 ;
#define netlbl_unlhsh_addr6_entry(iter) \
container_of(iter, struct netlbl_unlhsh_addr6, list)
struct netlbl_unlhsh_addr6 ;
struct netlbl_unlhsh_iface ;
struct netlbl_unlhsh_walk_arg ;
static DEFINE_SPINLOCK(netlbl_unlhsh_lock);
#define netlbl_unlhsh_rcu_deref(p) \
rcu_dereference_check(p, rcu_read_lock_held() || \
lockdep_is_held(&netlbl_unlhsh_lock))
static struct netlbl_unlhsh_tbl *netlbl_unlhsh = NULL;
static struct netlbl_unlhsh_iface *netlbl_unlhsh_def = NULL;
static u8 netlabel_unlabel_acceptflg = 0;
static struct genl_family netlbl_unlabel_gnl_family = ;
static const struct nla_policy netlbl_unlabel_genl_policy[NLBL_UNLABEL_A_MAX + 1] = ;
static void netlbl_unlhsh_free_iface(struct rcu_head *entry)
static u32 netlbl_unlhsh_hash(int ifindex)
static struct netlbl_unlhsh_iface *netlbl_unlhsh_search_iface(int ifindex)
static int netlbl_unlhsh_add_addr4(struct netlbl_unlhsh_iface *iface,
const struct in_addr *addr,
const struct in_addr *mask,
u32 secid)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int netlbl_unlhsh_add_addr6(struct netlbl_unlhsh_iface *iface,
const struct in6_addr *addr,
const struct in6_addr *mask,
u32 secid)
static struct netlbl_unlhsh_iface *netlbl_unlhsh_add_iface(int ifindex)
int netlbl_unlhsh_add(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u32 addr_len,
u32 secid,
struct netlbl_audit *audit_info)
static int netlbl_unlhsh_remove_addr4(struct net *net,
struct netlbl_unlhsh_iface *iface,
const struct in_addr *addr,
const struct in_addr *mask,
struct netlbl_audit *audit_info)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int netlbl_unlhsh_remove_addr6(struct net *net,
struct netlbl_unlhsh_iface *iface,
const struct in6_addr *addr,
const struct in6_addr *mask,
struct netlbl_audit *audit_info)
static void netlbl_unlhsh_condremove_iface(struct netlbl_unlhsh_iface *iface)
int netlbl_unlhsh_remove(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u32 addr_len,
struct netlbl_audit *audit_info)
static int netlbl_unlhsh_netdev_handler(struct notifier_block *this,
unsigned long event,
void *ptr)
static void netlbl_unlabel_acceptflg_set(u8 value,
struct netlbl_audit *audit_info)
static int netlbl_unlabel_addrinfo_get(struct genl_info *info,
void **addr,
void **mask,
u32 *len)
static int netlbl_unlabel_accept(struct sk_buff *skb, struct genl_info *info)
static int netlbl_unlabel_list(struct sk_buff *skb, struct genl_info *info)
static int netlbl_unlabel_staticadd(struct sk_buff *skb,
struct genl_info *info)
static int netlbl_unlabel_staticadddef(struct sk_buff *skb,
struct genl_info *info)
static int netlbl_unlabel_staticremove(struct sk_buff *skb,
struct genl_info *info)
static int netlbl_unlabel_staticremovedef(struct sk_buff *skb,
struct genl_info *info)
static int netlbl_unlabel_staticlist_gen(u32 cmd,
const struct netlbl_unlhsh_iface *iface,
const struct netlbl_unlhsh_addr4 *addr4,
const struct netlbl_unlhsh_addr6 *addr6,
void *arg)
static int netlbl_unlabel_staticlist(struct sk_buff *skb,
struct netlink_callback *cb)
static int netlbl_unlabel_staticlistdef(struct sk_buff *skb,
struct netlink_callback *cb)
static struct genl_ops netlbl_unlabel_genl_ops[] = ;
int __init netlbl_unlabel_genl_init(void)
static struct notifier_block netlbl_unlhsh_netdev_notifier = ;
int __init netlbl_unlabel_init(u32 size)
int netlbl_unlabel_getattr(const struct sk_buff *skb,
u16 family,
struct netlbl_lsm_secattr *secattr)
int __init netlbl_unlabel_defconf(void)
