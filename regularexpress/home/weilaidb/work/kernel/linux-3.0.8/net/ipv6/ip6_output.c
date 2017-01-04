int ip6_fragment(struct sk_buff *skb, int (*output)(struct sk_buff *));
int __ip6_local_out(struct sk_buff *skb)
int ip6_local_out(struct sk_buff *skb)
EXPORT_SYMBOL_GPL(ip6_local_out);
static int ip6_dev_loopback_xmit(struct sk_buff *newskb)
static int ip6_finish_output2(struct sk_buff *skb)
static int ip6_finish_output(struct sk_buff *skb)
int ip6_output(struct sk_buff *skb)
int ip6_xmit(struct sock *sk, struct sk_buff *skb, struct flowi6 *fl6,
struct ipv6_txoptions *opt)
EXPORT_SYMBOL(ip6_xmit);
int ip6_nd_hdr(struct sock *sk, struct sk_buff *skb, struct net_device *dev,
const struct in6_addr *saddr, const struct in6_addr *daddr,
int proto, int len)
static int ip6_call_ra_chain(struct sk_buff *skb, int sel)
static int ip6_forward_proxy_check(struct sk_buff *skb)
static inline int ip6_forward_finish(struct sk_buff *skb)
int ip6_forward(struct sk_buff *skb)
static void ip6_copy_metadata(struct sk_buff *to, struct sk_buff *from)
int ip6_find_1stfragopt(struct sk_buff *skb, u8 **nexthdr)
static u32 hashidentrnd __read_mostly;
#define FID_HASH_SZ 16
static u32 ipv6_fragmentation_id[FID_HASH_SZ];
void __init initialize_hashidentrnd(void)
static u32 __ipv6_select_ident(const struct in6_addr *addr)
void ipv6_select_ident(struct frag_hdr *fhdr, struct in6_addr *addr)
int ip6_fragment(struct sk_buff *skb, int (*output)(struct sk_buff *))
static inline int ip6_rt_check(const struct rt6key *rt_key,
const struct in6_addr *fl_addr,
const struct in6_addr *addr_cache)
static struct dst_entry *ip6_sk_dst_check(struct sock *sk,
struct dst_entry *dst,
const struct flowi6 *fl6)
static int ip6_dst_lookup_tail(struct sock *sk,
struct dst_entry **dst, struct flowi6 *fl6)
int ip6_dst_lookup(struct sock *sk, struct dst_entry **dst, struct flowi6 *fl6)
EXPORT_SYMBOL_GPL(ip6_dst_lookup);
struct dst_entry *ip6_dst_lookup_flow(struct sock *sk, struct flowi6 *fl6,
const struct in6_addr *final_dst,
bool can_sleep)
EXPORT_SYMBOL_GPL(ip6_dst_lookup_flow);
struct dst_entry *ip6_sk_dst_lookup_flow(struct sock *sk, struct flowi6 *fl6,
const struct in6_addr *final_dst,
bool can_sleep)
EXPORT_SYMBOL_GPL(ip6_sk_dst_lookup_flow);
static inline int ip6_ufo_append_data(struct sock *sk,
int getfrag(void *from, char *to, int offset, int len,
int odd, struct sk_buff *skb),
void *from, int length, int hh_len, int fragheaderlen,
int transhdrlen, int mtu,unsigned int flags,
struct rt6_info *rt)
static inline struct ipv6_opt_hdr *ip6_opt_dup(struct ipv6_opt_hdr *src,
gfp_t gfp)
static inline struct ipv6_rt_hdr *ip6_rthdr_dup(struct ipv6_rt_hdr *src,
gfp_t gfp)
int ip6_append_data(struct sock *sk, int getfrag(void *from, char *to,
int offset, int len, int odd, struct sk_buff *skb),
void *from, int length, int transhdrlen,
int hlimit, int tclass, struct ipv6_txoptions *opt, struct flowi6 *fl6,
struct rt6_info *rt, unsigned int flags, int dontfrag)
static void ip6_cork_release(struct inet_sock *inet, struct ipv6_pinfo *np)
int ip6_push_pending_frames(struct sock *sk)
void ip6_flush_pending_frames(struct sock *sk)
