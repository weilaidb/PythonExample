struct dn_rt_hash_bucket
;
extern struct neigh_table dn_neigh_table;
static unsigned char dn_hiord_addr[6] = ;
static const int dn_rt_min_delay = 2 * HZ;
static const int dn_rt_max_delay = 10 * HZ;
static const int dn_rt_mtu_expires = 10 * 60 * HZ;
static unsigned long dn_rt_deadline;
static int dn_dst_gc(struct dst_ops *ops);
static struct dst_entry *dn_dst_check(struct dst_entry *, __u32);
static unsigned int dn_dst_default_advmss(const struct dst_entry *dst);
static unsigned int dn_dst_default_mtu(const struct dst_entry *dst);
static void dn_dst_destroy(struct dst_entry *);
static struct dst_entry *dn_dst_negative_advice(struct dst_entry *);
static void dn_dst_link_failure(struct sk_buff *);
static void dn_dst_update_pmtu(struct dst_entry *dst, u32 mtu);
static int dn_route_input(struct sk_buff *);
static void dn_run_flush(unsigned long dummy);
static struct dn_rt_hash_bucket *dn_rt_hash_table;
static unsigned dn_rt_hash_mask;
static struct timer_list dn_route_timer;
static DEFINE_TIMER(dn_rt_flush_timer, dn_run_flush, 0, 0);
int decnet_dst_gc_interval = 2;
static struct dst_ops dn_dst_ops = ;
static void dn_dst_destroy(struct dst_entry *dst)
static __inline__ unsigned dn_hash(__le16 src, __le16 dst)
static inline void dnrt_free(struct dn_route *rt)
static inline void dnrt_drop(struct dn_route *rt)
static void dn_dst_check_expire(unsigned long dummy)
static int dn_dst_gc(struct dst_ops *ops)
static void dn_dst_update_pmtu(struct dst_entry *dst, u32 mtu)
static struct dst_entry *dn_dst_check(struct dst_entry *dst, __u32 cookie)
static struct dst_entry *dn_dst_negative_advice(struct dst_entry *dst)
static void dn_dst_link_failure(struct sk_buff *skb)
static inline int compare_keys(struct flowidn *fl1, struct flowidn *fl2)
static int dn_insert_route(struct dn_route *rt, unsigned hash, struct dn_route **rp)
static void dn_run_flush(unsigned long dummy)
static DEFINE_SPINLOCK(dn_rt_flush_lock);
void dn_rt_cache_flush(int delay)
static int dn_return_short(struct sk_buff *skb)
static int dn_return_long(struct sk_buff *skb)
static int dn_route_rx_packet(struct sk_buff *skb)
static int dn_route_rx_long(struct sk_buff *skb)
static int dn_route_rx_short(struct sk_buff *skb)
static int dn_route_discard(struct sk_buff *skb)
static int dn_route_ptp_hello(struct sk_buff *skb)
int dn_route_rcv(struct sk_buff *skb, struct net_device *dev, struct packet_type *pt, struct net_device *orig_dev)
static int dn_output(struct sk_buff *skb)
static int dn_forward(struct sk_buff *skb)
static int dn_rt_bug(struct sk_buff *skb)
static unsigned int dn_dst_default_advmss(const struct dst_entry *dst)
static unsigned int dn_dst_default_mtu(const struct dst_entry *dst)
static int dn_rt_set_next_hop(struct dn_route *rt, struct dn_fib_res *res)
static inline int dn_match_addr(__le16 addr1, __le16 addr2)
static __le16 dnet_select_source(const struct net_device *dev, __le16 daddr, int scope)
static inline __le16 __dn_fib_res_prefsrc(struct dn_fib_res *res)
static inline __le16 dn_fib_rules_map_destination(__le16 daddr, struct dn_fib_res *res)
static int dn_route_output_slow(struct dst_entry **pprt, const struct flowidn *oldflp, int try_hard)
static int __dn_route_output_key(struct dst_entry **pprt, const struct flowidn *flp, int flags)
static int dn_route_output_key(struct dst_entry **pprt, struct flowidn *flp, int flags)
int dn_route_output_sock(struct dst_entry **pprt, struct flowidn *fl, struct sock *sk, int flags)
static int dn_route_input_slow(struct sk_buff *skb)
static int dn_route_input(struct sk_buff *skb)
static int dn_rt_fill_info(struct sk_buff *skb, u32 pid, u32 seq,
int event, int nowait, unsigned int flags)
static int dn_cache_getroute(struct sk_buff *in_skb, struct nlmsghdr *nlh, void *arg)
int dn_cache_dump(struct sk_buff *skb, struct netlink_callback *cb)
struct dn_rt_cache_iter_state ;
static struct dn_route *dn_rt_cache_get_first(struct seq_file *seq)
static struct dn_route *dn_rt_cache_get_next(struct seq_file *seq, struct dn_route *rt)
static void *dn_rt_cache_seq_start(struct seq_file *seq, loff_t *pos)
static void *dn_rt_cache_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void dn_rt_cache_seq_stop(struct seq_file *seq, void *v)
static int dn_rt_cache_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations dn_rt_cache_seq_ops = ;
static int dn_rt_cache_seq_open(struct inode *inode, struct file *file)
static const struct file_operations dn_rt_cache_seq_fops = ;
void __init dn_route_init(void)
void __exit dn_route_cleanup(void)
