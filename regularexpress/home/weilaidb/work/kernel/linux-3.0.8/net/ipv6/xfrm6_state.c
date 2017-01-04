static void
__xfrm6_init_tempsel(struct xfrm_selector *sel, const struct flowi *fl)
static void
xfrm6_init_temprop(struct xfrm_state *x, const struct xfrm_tmpl *tmpl,
const xfrm_address_t *daddr, const xfrm_address_t *saddr)
static int
__xfrm6_sort(void **dst, void **src, int n, int (*cmp)(void *p), int maxclass)
static int __xfrm6_state_sort_cmp(void *p)
static int
__xfrm6_state_sort(struct xfrm_state **dst, struct xfrm_state **src, int n)
static int __xfrm6_tmpl_sort_cmp(void *p)
static int
__xfrm6_tmpl_sort(struct xfrm_tmpl **dst, struct xfrm_tmpl **src, int n)
int xfrm6_extract_header(struct sk_buff *skb)
static struct xfrm_state_afinfo xfrm6_state_afinfo = ;
int __init xfrm6_state_init(void)
void xfrm6_state_fini(void)
