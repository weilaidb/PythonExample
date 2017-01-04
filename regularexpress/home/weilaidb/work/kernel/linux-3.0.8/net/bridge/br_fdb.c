static struct kmem_cache *br_fdb_cache __read_mostly;
static int fdb_insert(struct net_bridge *br, struct net_bridge_port *source,
const unsigned char *addr);
static void fdb_notify(const struct net_bridge_fdb_entry *, int);
static u32 fdb_salt __read_mostly;
int __init br_fdb_init(void)
void br_fdb_fini(void)
static inline unsigned long hold_time(const struct net_bridge *br)
static inline int has_expired(const struct net_bridge *br,
const struct net_bridge_fdb_entry *fdb)
static inline int br_mac_hash(const unsigned char *mac)
static void fdb_rcu_free(struct rcu_head *head)
static inline void fdb_delete(struct net_bridge_fdb_entry *f)
void br_fdb_changeaddr(struct net_bridge_port *p, const unsigned char *newaddr)
void br_fdb_cleanup(unsigned long _data)
void br_fdb_flush(struct net_bridge *br)
void br_fdb_delete_by_port(struct net_bridge *br,
const struct net_bridge_port *p,
int do_all)
struct net_bridge_fdb_entry *__br_fdb_get(struct net_bridge *br,
const unsigned char *addr)
#if defined(CONFIG_ATM_LANE) || defined(CONFIG_ATM_LANE_MODULE)
int br_fdb_test_addr(struct net_device *dev, unsigned char *addr)
int br_fdb_fillbuf(struct net_bridge *br, void *buf,
unsigned long maxnum, unsigned long skip)
static struct net_bridge_fdb_entry *fdb_find(struct hlist_head *head,
const unsigned char *addr)
static struct net_bridge_fdb_entry *fdb_find_rcu(struct hlist_head *head,
const unsigned char *addr)
static struct net_bridge_fdb_entry *fdb_create(struct hlist_head *head,
struct net_bridge_port *source,
const unsigned char *addr)
static int fdb_insert(struct net_bridge *br, struct net_bridge_port *source,
const unsigned char *addr)
int br_fdb_insert(struct net_bridge *br, struct net_bridge_port *source,
const unsigned char *addr)
void br_fdb_update(struct net_bridge *br, struct net_bridge_port *source,
const unsigned char *addr)
static int fdb_to_nud(const struct net_bridge_fdb_entry *fdb)
static int fdb_fill_info(struct sk_buff *skb,
const struct net_bridge_fdb_entry *fdb,
u32 pid, u32 seq, int type, unsigned int flags)
static inline size_t fdb_nlmsg_size(void)
static void fdb_notify(const struct net_bridge_fdb_entry *fdb, int type)
int br_fdb_dump(struct sk_buff *skb, struct netlink_callback *cb)
static int fdb_add_entry(struct net_bridge_port *source, const __u8 *addr,
__u16 state)
int br_fdb_add(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
static int fdb_delete_by_addr(struct net_bridge_port *p, const u8 *addr)
int br_fdb_delete(struct sk_buff *skb, struct nlmsghdr *nlh, void *arg)
