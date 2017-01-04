#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct eth803hdr  __packed;
struct rfc1042hdr  __packed;
struct rxpackethdr  __packed;
struct rx80211packethdr  __packed;
static int process_rxed_802_11_packet(struct lbs_private *priv,
struct sk_buff *skb);
int lbs_process_rxed_packet(struct lbs_private *priv, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(lbs_process_rxed_packet);
static u8 convert_mv_rate_to_radiotap(u8 rate)
static int process_rxed_802_11_packet(struct lbs_private *priv,
struct sk_buff *skb)
