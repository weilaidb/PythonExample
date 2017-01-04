static struct kmem_cache *peer_cachep __read_mostly;
#define node_height(x) x->avl_height
#define peer_avl_empty ((struct inet_peer *)&peer_fake_node)
#define peer_avl_empty_rcu ((struct inet_peer __rcu __force *)&peer_fake_node)
static const struct inet_peer peer_fake_node = ;
struct inet_peer_base ;
static struct inet_peer_base v4_peers = ;
static struct inet_peer_base v6_peers = ;
#define PEER_MAXDEPTH 40
int inet_peer_threshold __read_mostly = 65536 + 128;
int inet_peer_minttl __read_mostly = 120 * HZ;
int inet_peer_maxttl __read_mostly = 10 * 60 * HZ;
int inet_peer_gc_mintime __read_mostly = 10 * HZ;
int inet_peer_gc_maxtime __read_mostly = 120 * HZ;
static struct  unused_peers = ;
static void peer_check_expire(unsigned long dummy);
static DEFINE_TIMER(peer_periodic_timer, peer_check_expire, 0, 0);
void __init inet_initpeers(void)
static void unlink_from_unused(struct inet_peer *p)
static int addr_compare(const struct inetpeer_addr *a,
const struct inetpeer_addr *b)
#define rcu_deref_locked(X, BASE)				\
rcu_dereference_protected(X, lockdep_is_held(&(BASE)->lock.lock))
#define lookup(_daddr, _stack, _base)				\
()
static bool atomic_add_unless_return(atomic_t *ptr, int a, int u, int *newv)
static struct inet_peer *lookup_rcu(const struct inetpeer_addr *daddr,
struct inet_peer_base *base,
int *newrefcnt)
#define lookup_rightempty(start, base)				\
()
static void peer_avl_rebalance(struct inet_peer __rcu **stack[],
struct inet_peer __rcu ***stackend,
struct inet_peer_base *base)
#define link_to_pool(n, base)					\
do  while (0)
static void inetpeer_free_rcu(struct rcu_head *head)
static void unlink_from_pool(struct inet_peer *p, struct inet_peer_base *base,
struct inet_peer __rcu **stack[PEER_MAXDEPTH])
static struct inet_peer_base *family_to_base(int family)
static struct inet_peer_base *peer_to_base(struct inet_peer *p)
static int cleanup_once(unsigned long ttl, struct inet_peer __rcu **stack[PEER_MAXDEPTH])
struct inet_peer *inet_getpeer(struct inetpeer_addr *daddr, int create)
static int compute_total(void)
EXPORT_SYMBOL_GPL(inet_getpeer);
static void peer_check_expire(unsigned long dummy)
void inet_putpeer(struct inet_peer *p)
EXPORT_SYMBOL_GPL(inet_putpeer);
#define XRLIM_BURST_FACTOR 6
bool inet_peer_xrlim_allow(struct inet_peer *peer, int timeout)
EXPORT_SYMBOL(inet_peer_xrlim_allow);
