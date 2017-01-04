static u8 oui_rfc1042[] = ;
static u8 oui_8021h[] = ;
int skb_ether_to_p80211(wlandevice_t *wlandev, u32 ethconv,
struct sk_buff *skb, union p80211_hdr *p80211_hdr,
struct p80211_metawep *p80211_wep)
static void orinoco_spy_gather(wlandevice_t *wlandev, char *mac,
struct p80211_rxmeta *rxmeta)
int skb_p80211_to_ether(wlandevice_t *wlandev, u32 ethconv,
struct sk_buff *skb)
int p80211_stt_findproto(u16 proto)
void p80211skb_rxmeta_detach(struct sk_buff *skb)
int p80211skb_rxmeta_attach(struct wlandevice *wlandev, struct sk_buff *skb)
void p80211skb_free(struct wlandevice *wlandev, struct sk_buff *skb)
