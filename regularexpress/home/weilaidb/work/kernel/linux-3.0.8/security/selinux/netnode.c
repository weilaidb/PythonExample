#define SEL_NETNODE_HASH_SIZE       256
#define SEL_NETNODE_HASH_BKT_LIMIT   16
struct sel_netnode_bkt ;
struct sel_netnode ;
static LIST_HEAD(sel_netnode_list);
static DEFINE_SPINLOCK(sel_netnode_lock);
static struct sel_netnode_bkt sel_netnode_hash[SEL_NETNODE_HASH_SIZE];
static void sel_netnode_free(struct rcu_head *p)
static unsigned int sel_netnode_hashfn_ipv4(__be32 addr)
static unsigned int sel_netnode_hashfn_ipv6(const struct in6_addr *addr)
static struct sel_netnode *sel_netnode_find(const void *addr, u16 family)
static void sel_netnode_insert(struct sel_netnode *node)
static int sel_netnode_sid_slow(void *addr, u16 family, u32 *sid)
int sel_netnode_sid(void *addr, u16 family, u32 *sid)
static void sel_netnode_flush(void)
static int sel_netnode_avc_callback(u32 event, u32 ssid, u32 tsid,
u16 class, u32 perms, u32 *retained)
static __init int sel_netnode_init(void)
__initcall(sel_netnode_init);
