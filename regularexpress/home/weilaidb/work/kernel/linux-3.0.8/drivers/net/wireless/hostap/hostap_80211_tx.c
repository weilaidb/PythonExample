static unsigned char rfc1042_header[] =
;
static unsigned char bridge_tunnel_header[] =
;
void hostap_dump_tx_80211(const char *name, struct sk_buff *skb)
netdev_tx_t hostap_data_start_xmit(struct sk_buff *skb,
struct net_device *dev)
netdev_tx_t hostap_mgmt_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static struct sk_buff * hostap_tx_encrypt(struct sk_buff *skb,
struct lib80211_crypt_data *crypt)
netdev_tx_t hostap_master_start_xmit(struct sk_buff *skb,
struct net_device *dev)
EXPORT_SYMBOL(hostap_master_start_xmit);
