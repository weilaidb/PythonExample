static int xfrm4_init_flags(struct xfrm_state *x)
static void
__xfrm4_init_tempsel(struct xfrm_selector *sel, const struct flowi *fl)
static void
xfrm4_init_temprop(struct xfrm_state *x, const struct xfrm_tmpl *tmpl,
const xfrm_address_t *daddr, const xfrm_address_t *saddr)
int xfrm4_extract_header(struct sk_buff *skb)
static struct xfrm_state_afinfo xfrm4_state_afinfo = ;
void __init xfrm4_state_init(void)
