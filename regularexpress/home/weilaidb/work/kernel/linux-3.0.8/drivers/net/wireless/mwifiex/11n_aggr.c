static int
mwifiex_11n_form_amsdu_pkt(struct sk_buff *skb_aggr,
struct sk_buff *skb_src, int *pad)
static void
mwifiex_11n_form_amsdu_txpd(struct mwifiex_private *priv,
struct sk_buff *skb)
int
mwifiex_11n_aggregate_pkt(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *pra_list, int headroom,
int ptrindex, unsigned long ra_list_flags)
__releases(&priv->wmm.ra_list_spinlock)
