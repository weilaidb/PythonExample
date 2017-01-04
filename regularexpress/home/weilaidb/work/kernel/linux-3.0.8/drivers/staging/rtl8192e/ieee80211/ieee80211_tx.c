static u8 P802_1H_OUI[P80211_OUI_LEN] = ;
static u8 RFC1042_OUI[P80211_OUI_LEN] = ;
static inline int ieee80211_put_snap(u8 *data, u16 h_proto)
int ieee80211_encrypt_fragment(
struct ieee80211_device *ieee,
struct sk_buff *frag,
int hdr_len)
void ieee80211_txb_free(struct ieee80211_txb *txb)
struct ieee80211_txb *ieee80211_alloc_txb(int nr_frags, int txb_size,
int gfp_mask)
static int
ieee80211_classify(struct sk_buff *skb, struct ieee80211_network *network)
#define SN_LESS(a, b)		(((a-b)&0x800)!=0)
void ieee80211_tx_query_agg_cap(struct ieee80211_device* ieee, struct sk_buff* skb, cb_desc* tcb_desc)
extern void ieee80211_qurey_ShortPreambleMode(struct ieee80211_device* ieee, cb_desc* tcb_desc)
extern	void
ieee80211_query_HTCapShortGI(struct ieee80211_device *ieee, cb_desc *tcb_desc)
void ieee80211_query_BandwidthMode(struct ieee80211_device* ieee, cb_desc *tcb_desc)
void ieee80211_query_protectionmode(struct ieee80211_device* ieee, cb_desc* tcb_desc, struct sk_buff* skb)
void ieee80211_txrate_selectmode(struct ieee80211_device* ieee, cb_desc* tcb_desc)
void ieee80211_query_seqnum(struct ieee80211_device*ieee, struct sk_buff* skb, u8* dst)
int ieee80211_rtl_xmit(struct sk_buff *skb, struct net_device *dev)
