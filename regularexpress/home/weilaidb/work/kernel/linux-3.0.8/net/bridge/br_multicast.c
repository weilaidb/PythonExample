#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#define mlock_dereference(X, br) \
rcu_dereference_protected(X, lockdep_is_held(&br->multicast_lock))
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline int ipv6_is_transient_multicast(const struct in6_addr *addr)
static inline int br_ip_equal(const struct br_ip *a, const struct br_ip *b)
static inline int __br_ip4_hash(struct net_bridge_mdb_htable *mdb, __be32 ip)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline int __br_ip6_hash(struct net_bridge_mdb_htable *mdb,
const struct in6_addr *ip)
static inline int br_ip_hash(struct net_bridge_mdb_htable *mdb,
struct br_ip *ip)
static struct net_bridge_mdb_entry *__br_mdb_ip_get(
struct net_bridge_mdb_htable *mdb, struct br_ip *dst, int hash)
static struct net_bridge_mdb_entry *br_mdb_ip_get(
struct net_bridge_mdb_htable *mdb, struct br_ip *dst)
static struct net_bridge_mdb_entry *br_mdb_ip4_get(
struct net_bridge_mdb_htable *mdb, __be32 dst)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static struct net_bridge_mdb_entry *br_mdb_ip6_get(
struct net_bridge_mdb_htable *mdb, const struct in6_addr *dst)
struct net_bridge_mdb_entry *br_mdb_get(struct net_bridge *br,
struct sk_buff *skb)
static void br_mdb_free(struct rcu_head *head)
static int br_mdb_copy(struct net_bridge_mdb_htable *new,
struct net_bridge_mdb_htable *old,
int elasticity)
static void br_multicast_free_pg(struct rcu_head *head)
static void br_multicast_free_group(struct rcu_head *head)
static void br_multicast_group_expired(unsigned long data)
static void br_multicast_del_pg(struct net_bridge *br,
struct net_bridge_port_group *pg)
static void br_multicast_port_group_expired(unsigned long data)
static int br_mdb_rehash(struct net_bridge_mdb_htable __rcu **mdbp, int max,
int elasticity)
static struct sk_buff *br_ip4_multicast_alloc_query(struct net_bridge *br,
__be32 group)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static struct sk_buff *br_ip6_multicast_alloc_query(struct net_bridge *br,
const struct in6_addr *group)
static struct sk_buff *br_multicast_alloc_query(struct net_bridge *br,
struct br_ip *addr)
static void br_multicast_send_group_query(struct net_bridge_mdb_entry *mp)
static void br_multicast_group_query_expired(unsigned long data)
static void br_multicast_send_port_group_query(struct net_bridge_port_group *pg)
static void br_multicast_port_group_query_expired(unsigned long data)
static struct net_bridge_mdb_entry *br_multicast_get_group(
struct net_bridge *br, struct net_bridge_port *port,
struct br_ip *group, int hash)
static struct net_bridge_mdb_entry *br_multicast_new_group(
struct net_bridge *br, struct net_bridge_port *port,
struct br_ip *group)
static int br_multicast_add_group(struct net_bridge *br,
struct net_bridge_port *port,
struct br_ip *group)
static int br_ip4_multicast_add_group(struct net_bridge *br,
struct net_bridge_port *port,
__be32 group)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int br_ip6_multicast_add_group(struct net_bridge *br,
struct net_bridge_port *port,
const struct in6_addr *group)
static void br_multicast_router_expired(unsigned long data)
static void br_multicast_local_router_expired(unsigned long data)
static void __br_multicast_send_query(struct net_bridge *br,
struct net_bridge_port *port,
struct br_ip *ip)
static void br_multicast_send_query(struct net_bridge *br,
struct net_bridge_port *port, u32 sent)
static void br_multicast_port_query_expired(unsigned long data)
void br_multicast_add_port(struct net_bridge_port *port)
void br_multicast_del_port(struct net_bridge_port *port)
static void __br_multicast_enable_port(struct net_bridge_port *port)
void br_multicast_enable_port(struct net_bridge_port *port)
void br_multicast_disable_port(struct net_bridge_port *port)
static int br_ip4_multicast_igmp3_report(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int br_ip6_multicast_mld2_report(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
static void br_multicast_add_router(struct net_bridge *br,
struct net_bridge_port *port)
static void br_multicast_mark_router(struct net_bridge *br,
struct net_bridge_port *port)
static void br_multicast_query_received(struct net_bridge *br,
struct net_bridge_port *port,
int saddr)
static int br_ip4_multicast_query(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int br_ip6_multicast_query(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
static void br_multicast_leave_group(struct net_bridge *br,
struct net_bridge_port *port,
struct br_ip *group)
static void br_ip4_multicast_leave_group(struct net_bridge *br,
struct net_bridge_port *port,
__be32 group)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static void br_ip6_multicast_leave_group(struct net_bridge *br,
struct net_bridge_port *port,
const struct in6_addr *group)
static int br_multicast_ipv4_rcv(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int br_multicast_ipv6_rcv(struct net_bridge *br,
struct net_bridge_port *port,
struct sk_buff *skb)
int br_multicast_rcv(struct net_bridge *br, struct net_bridge_port *port,
struct sk_buff *skb)
static void br_multicast_query_expired(unsigned long data)
void br_multicast_init(struct net_bridge *br)
void br_multicast_open(struct net_bridge *br)
void br_multicast_stop(struct net_bridge *br)
int br_multicast_set_router(struct net_bridge *br, unsigned long val)
int br_multicast_set_port_router(struct net_bridge_port *p, unsigned long val)
int br_multicast_toggle(struct net_bridge *br, unsigned long val)
int br_multicast_set_hash_max(struct net_bridge *br, unsigned long val)
