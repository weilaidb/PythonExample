#define TSBITS 6
#define TSMASK (((__u32)1 << TSBITS) - 1)
extern int sysctl_tcp_syncookies;
__u32 syncookie_secret[2][16-4+SHA_DIGEST_WORDS];
EXPORT_SYMBOL(syncookie_secret);
static __init int init_syncookies(void)
__initcall(init_syncookies);
#define COOKIEBITS 24
#define COOKIEMASK (((__u32)1 << COOKIEBITS) - 1)
static DEFINE_PER_CPU(__u32 [16 + 5 + SHA_WORKSPACE_WORDS],
ipv4_cookie_scratch);
static u32 cookie_hash(__be32 saddr, __be32 daddr, __be16 sport, __be16 dport,
u32 count, int c)
__u32 cookie_init_timestamp(struct request_sock *req)
static __u32 secure_tcp_syn_cookie(__be32 saddr, __be32 daddr, __be16 sport,
__be16 dport, __u32 sseq, __u32 count,
__u32 data)
static __u32 check_tcp_syn_cookie(__u32 cookie, __be32 saddr, __be32 daddr,
__be16 sport, __be16 dport, __u32 sseq,
__u32 count, __u32 maxdiff)
static __u16 const msstab[] = ;
__u32 cookie_v4_init_sequence(struct sock *sk, struct sk_buff *skb, __u16 *mssp)
#define COUNTER_TRIES 4
static inline int cookie_check(struct sk_buff *skb, __u32 cookie)
static inline struct sock *get_cookie_sock(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst)
bool cookie_check_timestamp(struct tcp_options_received *tcp_opt, bool *ecn_ok)
EXPORT_SYMBOL(cookie_check_timestamp);
struct sock *cookie_v4_check(struct sock *sk, struct sk_buff *skb,
struct ip_options *opt)
