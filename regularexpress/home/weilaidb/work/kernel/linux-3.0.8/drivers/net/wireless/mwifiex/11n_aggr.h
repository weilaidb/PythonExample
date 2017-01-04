#define _MWIFIEX_11N_AGGR_H_
#define PKT_TYPE_AMSDU	0xE6
int mwifiex_11n_deaggregate_pkt(struct mwifiex_private *priv,
struct sk_buff *skb);
int mwifiex_11n_aggregate_pkt(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ptr, int headroom,
int ptr_index, unsigned long flags)
__releases(&priv->wmm.ra_list_spinlock);
