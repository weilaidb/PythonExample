u32 xfrm_replay_seqhi(struct xfrm_state *x, __be32 net_seq)
static void xfrm_replay_notify(struct xfrm_state *x, int event)
static int xfrm_replay_overflow(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm_replay_check(struct xfrm_state *x,
struct sk_buff *skb, __be32 net_seq)
static void xfrm_replay_advance(struct xfrm_state *x, __be32 net_seq)
static int xfrm_replay_overflow_bmp(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm_replay_check_bmp(struct xfrm_state *x,
struct sk_buff *skb, __be32 net_seq)
static void xfrm_replay_advance_bmp(struct xfrm_state *x, __be32 net_seq)
static void xfrm_replay_notify_bmp(struct xfrm_state *x, int event)
static int xfrm_replay_overflow_esn(struct xfrm_state *x, struct sk_buff *skb)
static int xfrm_replay_check_esn(struct xfrm_state *x,
struct sk_buff *skb, __be32 net_seq)
static void xfrm_replay_advance_esn(struct xfrm_state *x, __be32 net_seq)
static struct xfrm_replay xfrm_replay_legacy = ;
static struct xfrm_replay xfrm_replay_bmp = ;
static struct xfrm_replay xfrm_replay_esn = ;
int xfrm_init_replay(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_init_replay);
