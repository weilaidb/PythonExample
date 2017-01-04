#define HOSTAP_80211_H
struct hostap_ieee80211_mgmt  __packed;
#define IEEE80211_MGMT_HDR_LEN 24
#define IEEE80211_DATA_HDR3_LEN 24
#define IEEE80211_DATA_HDR4_LEN 30
struct hostap_80211_rx_status ;
enum ;
int prism2_rx_80211(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats, int type);
void hostap_80211_rx(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats);
void hostap_dump_rx_80211(const char *name, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats);
void hostap_dump_tx_80211(const char *name, struct sk_buff *skb);
netdev_tx_t hostap_data_start_xmit(struct sk_buff *skb,
struct net_device *dev);
netdev_tx_t hostap_mgmt_start_xmit(struct sk_buff *skb,
struct net_device *dev);
netdev_tx_t hostap_master_start_xmit(struct sk_buff *skb,
struct net_device *dev);
