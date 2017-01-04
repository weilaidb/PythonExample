extern int sysctl_tcp_syncookies;
extern __u32 syncookie_secret[2][16-4+SHA_DIGEST_WORDS];
#define COOKIEBITS 24
#define COOKIEMASK (((__u32)1 << COOKIEBITS) - 1)
static __u16 const msstab[] = ;
#define COUNTER_TRIES 4
static inline struct sock *get_cookie_sock(struct sock *sk, struct sk_buff *skb,
struct request_sock *req,
struct dst_entry *dst)
static DEFINE_PER_CPU(__u32 [16 + 5 + SHA_WORKSPACE_WORDS],
ipv6_cookie_scratch);
static u32 cookie_hash(const struct in6_addr *saddr, const struct in6_addr *daddr,
__be16 sport, __be16 dport, u32 count, int c)
static __u32 secure_tcp_syn_cookie(const struct in6_addr *saddr,
const struct in6_addr *daddr,
__be16 sport, __be16 dport, __u32 sseq,
__u32 count, __u32 data)
static __u32 check_tcp_syn_cookie(__u32 cookie, const struct in6_addr *saddr,
const struct in6_addr *daddr, __be16 sport,
__be16 dport, __u32 sseq, __u32 count,
__u32 maxdiff)
__u32 cookie_v6_init_sequence(struct sock *sk, struct sk_buff *skb, __u16 *mssp)
static inline int cookie_check(struct sk_buff *skb, __u32 cookie)
struct sock *cookie_v6_check(struct sock *sk, struct sk_buff *skb)
