#define SEL_NETPORT_HASH_SIZE       256
#define SEL_NETPORT_HASH_BKT_LIMIT   16
struct sel_netport_bkt ;
struct sel_netport ;
static LIST_HEAD(sel_netport_list);
static DEFINE_SPINLOCK(sel_netport_lock);
static struct sel_netport_bkt sel_netport_hash[SEL_NETPORT_HASH_SIZE];
static void sel_netport_free(struct rcu_head *p)
static unsigned int sel_netport_hashfn(u16 pnum)
static struct sel_netport *sel_netport_find(u8 protocol, u16 pnum)
static void sel_netport_insert(struct sel_netport *port)
static int sel_netport_sid_slow(u8 protocol, u16 pnum, u32 *sid)
int sel_netport_sid(u8 protocol, u16 pnum, u32 *sid)
static void sel_netport_flush(void)
static int sel_netport_avc_callback(u32 event, u32 ssid, u32 tsid,
u16 class, u32 perms, u32 *retained)
static __init int sel_netport_init(void)
__initcall(sel_netport_init);
