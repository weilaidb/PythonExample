static struct xfrm_policy_afinfo xfrm4_policy_afinfo;
static struct dst_entry *__xfrm4_dst_lookup(struct net *net, struct flowi4 *fl4,
int tos,
const xfrm_address_t *saddr,
const xfrm_address_t *daddr)
static struct dst_entry *xfrm4_dst_lookup(struct net *net, int tos,
const xfrm_address_t *saddr,
const xfrm_address_t *daddr)
static int xfrm4_get_saddr(struct net *net,
xfrm_address_t *saddr, xfrm_address_t *daddr)
static int xfrm4_get_tos(const struct flowi *fl)
static int xfrm4_init_path(struct xfrm_dst *path, struct dst_entry *dst,
int nfheader_len)
static int xfrm4_fill_dst(struct xfrm_dst *xdst, struct net_device *dev,
const struct flowi *fl)
static void
_decode_session4(struct sk_buff *skb, struct flowi *fl, int reverse)
static inline int xfrm4_garbage_collect(struct dst_ops *ops)
static void xfrm4_update_pmtu(struct dst_entry *dst, u32 mtu)
static void xfrm4_dst_destroy(struct dst_entry *dst)
static void xfrm4_dst_ifdown(struct dst_entry *dst, struct net_device *dev,
int unregister)
static struct dst_ops xfrm4_dst_ops = ;
static struct xfrm_policy_afinfo xfrm4_policy_afinfo = ;
static struct ctl_table xfrm4_policy_table[] = ;
static struct ctl_table_header *sysctl_hdr;
static void __init xfrm4_policy_init(void)
static void __exit xfrm4_policy_fini(void)
void __init xfrm4_init(int rt_max_size)
