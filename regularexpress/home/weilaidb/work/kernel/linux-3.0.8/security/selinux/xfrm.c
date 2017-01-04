atomic_t selinux_xfrm_refcount = ATOMIC_INIT(0);
static inline int selinux_authorizable_ctx(struct xfrm_sec_ctx *ctx)
static inline int selinux_authorizable_xfrm(struct xfrm_state *x)
int selinux_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir)
int selinux_xfrm_state_pol_flow_match(struct xfrm_state *x, struct xfrm_policy *xp,
const struct flowi *fl)
int selinux_xfrm_decode_session(struct sk_buff *skb, u32 *sid, int ckall)
static int selinux_xfrm_sec_ctx_alloc(struct xfrm_sec_ctx **ctxp,
struct xfrm_user_sec_ctx *uctx, u32 sid)
int selinux_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp,
struct xfrm_user_sec_ctx *uctx)
int selinux_xfrm_policy_clone(struct xfrm_sec_ctx *old_ctx,
struct xfrm_sec_ctx **new_ctxp)
void selinux_xfrm_policy_free(struct xfrm_sec_ctx *ctx)
int selinux_xfrm_policy_delete(struct xfrm_sec_ctx *ctx)
int selinux_xfrm_state_alloc(struct xfrm_state *x, struct xfrm_user_sec_ctx *uctx,
u32 secid)
void selinux_xfrm_state_free(struct xfrm_state *x)
int selinux_xfrm_state_delete(struct xfrm_state *x)
int selinux_xfrm_sock_rcv_skb(u32 isec_sid, struct sk_buff *skb,
struct common_audit_data *ad)
int selinux_xfrm_postroute_last(u32 isec_sid, struct sk_buff *skb,
struct common_audit_data *ad, u8 proto)
