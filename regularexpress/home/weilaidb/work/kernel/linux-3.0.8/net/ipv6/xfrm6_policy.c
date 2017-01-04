#if defined(CONFIG_IPV6_MIP6) || defined(CONFIG_IPV6_MIP6_MODULE)
static struct xfrm_policy_afinfo xfrm6_policy_afinfo;
static struct dst_entry *xfrm6_dst_lookup(struct net *net, int tos,
const xfrm_address_t *saddr,
const xfrm_address_t *daddr)
static int xfrm6_get_saddr(struct net *net,
xfrm_address_t *saddr, xfrm_address_t *daddr)
static int xfrm6_get_tos(const struct flowi *fl)
static int xfrm6_init_path(struct xfrm_dst *path, struct dst_entry *dst,
int nfheader_len)
static int xfrm6_fill_dst(struct xfrm_dst *xdst, struct net_device *dev,
const struct flowi *fl)
static inline void
_decode_session6(struct sk_buff *skb, struct flowi *fl, int reverse)
static inline int xfrm6_garbage_collect(struct dst_ops *ops)
static void xfrm6_update_pmtu(struct dst_entry *dst, u32 mtu)
static void xfrm6_dst_destroy(struct dst_entry *dst)
static void xfrm6_dst_ifdown(struct dst_entry *dst, struct net_device *dev,
int unregister)
static struct dst_ops xfrm6_dst_ops = ;
static struct xfrm_policy_afinfo xfrm6_policy_afinfo = ;
static int __init xfrm6_policy_init(void)
static void xfrm6_policy_fini(void)
static struct ctl_table xfrm6_policy_table[] = ;
static struct ctl_table_header *sysctl_hdr;
int __init xfrm6_init(void)
void xfrm6_fini(void)
