#define SEL_NETIF_HASH_SIZE	64
#define SEL_NETIF_HASH_MAX	1024
struct sel_netif ;
static u32 sel_netif_total;
static LIST_HEAD(sel_netif_list);
static DEFINE_SPINLOCK(sel_netif_lock);
static struct list_head sel_netif_hash[SEL_NETIF_HASH_SIZE];
static inline u32 sel_netif_hashfn(int ifindex)
static inline struct sel_netif *sel_netif_find(int ifindex)
static int sel_netif_insert(struct sel_netif *netif)
static void sel_netif_destroy(struct sel_netif *netif)
static int sel_netif_sid_slow(int ifindex, u32 *sid)
int sel_netif_sid(int ifindex, u32 *sid)
static void sel_netif_kill(int ifindex)
static void sel_netif_flush(void)
static int sel_netif_avc_callback(u32 event, u32 ssid, u32 tsid,
u16 class, u32 perms, u32 *retained)
static int sel_netif_netdev_notifier_handler(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block sel_netif_netdev_notifier = ;
static __init int sel_netif_init(void)
__initcall(sel_netif_init);
