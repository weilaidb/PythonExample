int sysctl_aarp_expiry_time = AARP_EXPIRY_TIME;
int sysctl_aarp_tick_time = AARP_TICK_TIME;
int sysctl_aarp_retransmit_limit = AARP_RETRANSMIT_LIMIT;
int sysctl_aarp_resolve_time = AARP_RESOLVE_TIME;
struct aarp_entry ;
static struct aarp_entry *resolved[AARP_HASH_SIZE];
static struct aarp_entry *unresolved[AARP_HASH_SIZE];
static struct aarp_entry *proxies[AARP_HASH_SIZE];
static int unresolved_count;
static DEFINE_RWLOCK(aarp_lock);
static struct timer_list aarp_timer;
static void __aarp_expire(struct aarp_entry *a)
static void __aarp_send_query(struct aarp_entry *a)
static void aarp_send_reply(struct net_device *dev, struct atalk_addr *us,
struct atalk_addr *them, unsigned char *sha)
static void aarp_send_probe(struct net_device *dev, struct atalk_addr *us)
static void __aarp_expire_timer(struct aarp_entry **n)
static void __aarp_kick(struct aarp_entry **n)
static void __aarp_expire_device(struct aarp_entry **n, struct net_device *dev)
static void aarp_expire_timeout(unsigned long unused)
static int aarp_device_event(struct notifier_block *this, unsigned long event,
void *ptr)
static void __aarp_expire_all(struct aarp_entry **n)
static void aarp_purge(void)
static struct aarp_entry *aarp_alloc(void)
static struct aarp_entry *__aarp_find_entry(struct aarp_entry *list,
struct net_device *dev,
struct atalk_addr *sat)
void aarp_proxy_remove(struct net_device *dev, struct atalk_addr *sa)
static struct atalk_addr *__aarp_proxy_find(struct net_device *dev,
struct atalk_addr *sa)
static void aarp_send_probe_phase1(struct atalk_iface *iface)
void aarp_probe_network(struct atalk_iface *atif)
int aarp_proxy_probe_network(struct atalk_iface *atif, struct atalk_addr *sa)
int aarp_send_ddp(struct net_device *dev, struct sk_buff *skb,
struct atalk_addr *sa, void *hwaddr)
EXPORT_SYMBOL(aarp_send_ddp);
static void __aarp_resolved(struct aarp_entry **list, struct aarp_entry *a,
int hash)
static int aarp_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
static struct notifier_block aarp_notifier = ;
static unsigned char aarp_snap_id[] = ;
void __init aarp_proto_init(void)
void aarp_device_down(struct net_device *dev)
struct aarp_iter_state ;
static struct aarp_entry *iter_next(struct aarp_iter_state *iter, loff_t *pos)
static void *aarp_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(aarp_lock)
static void *aarp_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void aarp_seq_stop(struct seq_file *seq, void *v)
__releases(aarp_lock)
static const char *dt2str(unsigned long ticks)
static int aarp_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations aarp_seq_ops = ;
static int aarp_seq_open(struct inode *inode, struct file *file)
const struct file_operations atalk_seq_arp_fops = ;
void aarp_cleanup_module(void)
