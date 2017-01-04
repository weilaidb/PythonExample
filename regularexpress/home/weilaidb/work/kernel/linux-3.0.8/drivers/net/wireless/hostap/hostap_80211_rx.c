static unsigned char rfc1042_header[] =
;
static unsigned char bridge_tunnel_header[] =
;
void hostap_dump_rx_80211(const char *name, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
int prism2_rx_80211(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats, int type)
static void monitor_rx(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
static struct prism2_frag_entry *
prism2_frag_cache_find(local_info_t *local, unsigned int seq,
unsigned int frag, u8 *src, u8 *dst)
static struct sk_buff *
prism2_frag_cache_get(local_info_t *local, struct ieee80211_hdr *hdr)
static int prism2_frag_cache_invalidate(local_info_t *local,
struct ieee80211_hdr *hdr)
static struct hostap_bss_info *__hostap_get_bss(local_info_t *local, u8 *bssid,
u8 *ssid, size_t ssid_len)
static struct hostap_bss_info *__hostap_add_bss(local_info_t *local, u8 *bssid,
u8 *ssid, size_t ssid_len)
static void __hostap_expire_bss(local_info_t *local)
static void hostap_rx_sta_beacon(local_info_t *local, struct sk_buff *skb,
int stype)
static int
hostap_rx_frame_mgmt(local_info_t *local, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats, u16 type,
u16 stype)
static struct net_device *prism2_rx_get_wds(local_info_t *local,
u8 *addr)
static int
hostap_rx_frame_wds(local_info_t *local, struct ieee80211_hdr *hdr, u16 fc,
struct net_device **wds)
static int hostap_is_eapol_frame(local_info_t *local, struct sk_buff *skb)
static int
hostap_rx_frame_decrypt(local_info_t *local, struct sk_buff *skb,
struct lib80211_crypt_data *crypt)
static int
hostap_rx_frame_decrypt_msdu(local_info_t *local, struct sk_buff *skb,
int keyidx, struct lib80211_crypt_data *crypt)
void hostap_80211_rx(struct net_device *dev, struct sk_buff *skb,
struct hostap_80211_rx_status *rx_stats)
EXPORT_SYMBOL(hostap_80211_rx);
