int sysctl_ip_default_ttl __read_mostly = IPDEFTTL;
EXPORT_SYMBOL(sysctl_ip_default_ttl);
__inline__ void ip_send_check(struct iphdr *iph)
EXPORT_SYMBOL(ip_send_check);
int __ip_local_out(struct sk_buff *skb)
int ip_local_out(struct sk_buff *skb)
EXPORT_SYMBOL_GPL(ip_local_out);
static int ip_dev_loopback_xmit(struct sk_buff *newskb)
static inline int ip_select_ttl(struct inet_sock *inet, struct dst_entry *dst)
int ip_build_and_send_pkt(struct sk_buff *skb, struct sock *sk,
__be32 saddr, __be32 daddr, struct ip_options_rcu *opt)
EXPORT_SYMBOL_GPL(ip_build_and_send_pkt);
static inline int ip_finish_output2(struct sk_buff *skb)
static inline int ip_skb_dst_mtu(struct sk_buff *skb)
static int ip_finish_output(struct sk_buff *skb)
int ip_mc_output(struct sk_buff *skb)
int ip_output(struct sk_buff *skb)
int ip_queue_xmit(struct sk_buff *skb, struct flowi *fl)
EXPORT_SYMBOL(ip_queue_xmit);
static void ip_copy_metadata(struct sk_buff *to, struct sk_buff *from)
int ip_fragment(struct sk_buff *skb, int (*output)(struct sk_buff *))
EXPORT_SYMBOL(ip_fragment);
int
ip_generic_getfrag(void *from, char *to, int offset, int len, int odd, struct sk_buff *skb)
EXPORT_SYMBOL(ip_generic_getfrag);
static inline __wsum
csum_page(struct page *page, int offset, int copy)
static inline int ip_ufo_append_data(struct sock *sk,
struct sk_buff_head *queue,
int getfrag(void *from, char *to, int offset, int len,
int odd, struct sk_buff *skb),
void *from, int length, int hh_len, int fragheaderlen,
int transhdrlen, int maxfraglen, unsigned int flags)
static int __ip_append_data(struct sock *sk,
struct flowi4 *fl4,
struct sk_buff_head *queue,
struct inet_cork *cork,
int getfrag(void *from, char *to, int offset,
int len, int odd, struct sk_buff *skb),
void *from, int length, int transhdrlen,
unsigned int flags)
static int ip_setup_cork(struct sock *sk, struct inet_cork *cork,
struct ipcm_cookie *ipc, struct rtable **rtp)
int ip_append_data(struct sock *sk, struct flowi4 *fl4,
int getfrag(void *from, char *to, int offset, int len,
int odd, struct sk_buff *skb),
void *from, int length, int transhdrlen,
struct ipcm_cookie *ipc, struct rtable **rtp,
unsigned int flags)
ssize_t	ip_append_page(struct sock *sk, struct flowi4 *fl4, struct page *page,
int offset, size_t size, int flags)
static void ip_cork_release(struct inet_cork *cork)
struct sk_buff *__ip_make_skb(struct sock *sk,
struct flowi4 *fl4,
struct sk_buff_head *queue,
struct inet_cork *cork)
int ip_send_skb(struct sk_buff *skb)
int ip_push_pending_frames(struct sock *sk, struct flowi4 *fl4)
static void __ip_flush_pending_frames(struct sock *sk,
struct sk_buff_head *queue,
struct inet_cork *cork)
void ip_flush_pending_frames(struct sock *sk)
struct sk_buff *ip_make_skb(struct sock *sk,
struct flowi4 *fl4,
int getfrag(void *from, char *to, int offset,
int len, int odd, struct sk_buff *skb),
void *from, int length, int transhdrlen,
struct ipcm_cookie *ipc, struct rtable **rtp,
unsigned int flags)
static int ip_reply_glue_bits(void *dptr, char *to, int offset,
int len, int odd, struct sk_buff *skb)
void ip_send_reply(struct sock *sk, struct sk_buff *skb, __be32 daddr,
struct ip_reply_arg *arg, unsigned int len)
void __init ip_init(void)
