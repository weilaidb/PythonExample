#define _LINUX_P80211CONV_H
#define WLAN_ETHADDR_LEN	6
#define WLAN_IEEE_OUI_LEN	3
#define WLAN_ETHCONV_ENCAP	1
#define WLAN_ETHCONV_8021h	3
#define WLAN_ETHHDR_LEN		14
#define P80211CAPTURE_VERSION	0x80211001
#define	P80211_FRMMETA_MAGIC	0x802110
#define P80211SKB_FRMMETA(s) \
(((((struct p80211_frmmeta *)((s)->cb))->magic) == \
P80211_FRMMETA_MAGIC) ? \
((struct p80211_frmmeta *)((s)->cb)) : \
(NULL))
#define P80211SKB_RXMETA(s) \
(P80211SKB_FRMMETA((s)) ?  P80211SKB_FRMMETA((s))->rx : \
((struct p80211_rxmeta *)(NULL)))
struct p80211_rxmeta ;
struct p80211_frmmeta ;
void p80211skb_free(struct wlandevice *wlandev, struct sk_buff *skb);
int p80211skb_rxmeta_attach(struct wlandevice *wlandev, struct sk_buff *skb);
void p80211skb_rxmeta_detach(struct sk_buff *skb);
struct p80211_caphdr ;
typedef void (*freebuf_method_t) (void *buf, int size);
struct p80211_metawep ;
struct wlan_ethhdr  __packed;
struct wlan_llc  __packed;
struct wlan_snap  __packed;
struct wlandevice;
int skb_p80211_to_ether(struct wlandevice *wlandev, u32 ethconv,
struct sk_buff *skb);
int skb_ether_to_p80211(struct wlandevice *wlandev, u32 ethconv,
struct sk_buff *skb, union p80211_hdr *p80211_hdr,
struct p80211_metawep *p80211_wep);
int p80211_stt_findproto(u16 proto);
