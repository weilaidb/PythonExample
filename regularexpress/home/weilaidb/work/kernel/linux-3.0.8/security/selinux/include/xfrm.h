#define _SELINUX_XFRM_H_
int selinux_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp,
struct xfrm_user_sec_ctx *sec_ctx);
int selinux_xfrm_policy_clone(struct xfrm_sec_ctx *old_ctx,
struct xfrm_sec_ctx **new_ctxp);
void selinux_xfrm_policy_free(struct xfrm_sec_ctx *ctx);
int selinux_xfrm_policy_delete(struct xfrm_sec_ctx *ctx);
int selinux_xfrm_state_alloc(struct xfrm_state *x,
struct xfrm_user_sec_ctx *sec_ctx, u32 secid);
void selinux_xfrm_state_free(struct xfrm_state *x);
int selinux_xfrm_state_delete(struct xfrm_state *x);
int selinux_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir);
int selinux_xfrm_state_pol_flow_match(struct xfrm_state *x,
struct xfrm_policy *xp, const struct flowi *fl);
static inline struct inode_security_struct *get_sock_isec(struct sock *sk)
extern atomic_t selinux_xfrm_refcount;
static inline int selinux_xfrm_enabled(void)
int selinux_xfrm_sock_rcv_skb(u32 sid, struct sk_buff *skb,
struct common_audit_data *ad);
int selinux_xfrm_postroute_last(u32 isec_sid, struct sk_buff *skb,
struct common_audit_data *ad, u8 proto);
int selinux_xfrm_decode_session(struct sk_buff *skb, u32 *sid, int ckall);
static inline void selinux_xfrm_notify_policyload(void)
static inline int selinux_xfrm_enabled(void)
static inline int selinux_xfrm_sock_rcv_skb(u32 isec_sid, struct sk_buff *skb,
struct common_audit_data *ad)
static inline int selinux_xfrm_postroute_last(u32 isec_sid, struct sk_buff *skb,
struct common_audit_data *ad, u8 proto)
static inline int selinux_xfrm_decode_session(struct sk_buff *skb, u32 *sid, int ckall)
static inline void selinux_xfrm_notify_policyload(void)
static inline void selinux_skb_xfrm_sid(struct sk_buff *skb, u32 *sid)
