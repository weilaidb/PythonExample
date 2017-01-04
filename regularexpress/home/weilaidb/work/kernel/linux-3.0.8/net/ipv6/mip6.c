static inline unsigned int calc_padlen(unsigned int len, unsigned int n)
static inline void *mip6_padn(__u8 *data, __u8 padlen)
static inline void mip6_param_prob(struct sk_buff *skb, u8 code, int pos)
static int mip6_mh_len(int type)
static int mip6_mh_filter(struct sock *sk, struct sk_buff *skb)
struct mip6_report_rate_limiter ;
static struct mip6_report_rate_limiter mip6_report_rl = ;
static int mip6_destopt_input(struct xfrm_state *x, struct sk_buff *skb)
static int mip6_destopt_output(struct xfrm_state *x, struct sk_buff *skb)
static inline int mip6_report_rl_allow(struct timeval *stamp,
const struct in6_addr *dst,
const struct in6_addr *src, int iif)
static int mip6_destopt_reject(struct xfrm_state *x, struct sk_buff *skb,
const struct flowi *fl)
static int mip6_destopt_offset(struct xfrm_state *x, struct sk_buff *skb,
u8 **nexthdr)
static int mip6_destopt_init_state(struct xfrm_state *x)
static void mip6_destopt_destroy(struct xfrm_state *x)
static const struct xfrm_type mip6_destopt_type =
;
static int mip6_rthdr_input(struct xfrm_state *x, struct sk_buff *skb)
static int mip6_rthdr_output(struct xfrm_state *x, struct sk_buff *skb)
static int mip6_rthdr_offset(struct xfrm_state *x, struct sk_buff *skb,
u8 **nexthdr)
static int mip6_rthdr_init_state(struct xfrm_state *x)
static void mip6_rthdr_destroy(struct xfrm_state *x)
static const struct xfrm_type mip6_rthdr_type =
;
static int __init mip6_init(void)
static void __exit mip6_fini(void)
module_init(mip6_init);
module_exit(mip6_fini);
MODULE_LICENSE("GPL");
MODULE_ALIAS_XFRM_TYPE(AF_INET6, XFRM_PROTO_DSTOPTS);
MODULE_ALIAS_XFRM_TYPE(AF_INET6, XFRM_PROTO_ROUTING);
