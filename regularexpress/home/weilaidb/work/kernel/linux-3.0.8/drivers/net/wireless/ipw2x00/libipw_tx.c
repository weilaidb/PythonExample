static u8 P802_1H_OUI[P80211_OUI_LEN] = ;
static u8 RFC1042_OUI[P80211_OUI_LEN] = ;
static int libipw_copy_snap(u8 * data, __be16 h_proto)
static int libipw_encrypt_fragment(struct libipw_device *ieee,
struct sk_buff *frag, int hdr_len)
void libipw_txb_free(struct libipw_txb *txb)
static struct libipw_txb *libipw_alloc_txb(int nr_frags, int txb_size,
int headroom, gfp_t gfp_mask)
static int libipw_classify(struct sk_buff *skb)
netdev_tx_t libipw_xmit(struct sk_buff *skb, struct net_device *dev)
EXPORT_SYMBOL(libipw_xmit);
EXPORT_SYMBOL(libipw_txb_free);
