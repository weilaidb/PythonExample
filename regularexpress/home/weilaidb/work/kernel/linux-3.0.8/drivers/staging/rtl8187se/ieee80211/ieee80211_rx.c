static inline void ieee80211_monitor_rx(struct ieee80211_device *ieee,
struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats)
static struct ieee80211_frag_entry *
ieee80211_frag_cache_find(struct ieee80211_device *ieee, unsigned int seq,
unsigned int frag, u8 tid,u8 *src, u8 *dst)
static struct sk_buff *
ieee80211_frag_cache_get(struct ieee80211_device *ieee,
struct ieee80211_hdr_4addr *hdr)
static int ieee80211_frag_cache_invalidate(struct ieee80211_device *ieee,
struct ieee80211_hdr_4addr *hdr)
static inline int
ieee80211_rx_frame_mgmt(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats, u16 type,
u16 stype)
static unsigned char rfc1042_header[] =
;
static unsigned char bridge_tunnel_header[] =
;
static int ieee80211_is_eapol_frame(struct ieee80211_device *ieee,
struct sk_buff *skb, size_t hdrlen)
static inline int
ieee80211_rx_frame_decrypt(struct ieee80211_device* ieee, struct sk_buff *skb,
struct ieee80211_crypt_data *crypt)
static inline int
ieee80211_rx_frame_decrypt_msdu(struct ieee80211_device* ieee, struct sk_buff *skb,
int keyidx, struct ieee80211_crypt_data *crypt)
#define IEEE_PACKET_RETRY_TIME (5*HZ)
static int is_duplicate_packet(struct ieee80211_device *ieee,
struct ieee80211_hdr_4addr *header)
int ieee80211_rtl_rx(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats)
#define MGMT_FRAME_FIXED_PART_LENGTH		0x24
static inline int ieee80211_is_ofdm_rate(u8 rate)
static inline int ieee80211_SignalStrengthTranslate(
int  CurrSS
)
static inline void ieee80211_extract_country_ie(
struct ieee80211_device *ieee,
struct ieee80211_info_element *info_element,
struct ieee80211_network *network,
u8 * addr2
)
int
ieee80211_TranslateToDbm(
unsigned char SignalStrengthIndex
)
inline int ieee80211_network_init(
struct ieee80211_device *ieee,
struct ieee80211_probe_response *beacon,
struct ieee80211_network *network,
struct ieee80211_rx_stats *stats)
static inline int is_same_network(struct ieee80211_network *src,
struct ieee80211_network *dst,
struct ieee80211_device * ieee)
inline void update_network(struct ieee80211_network *dst,
struct ieee80211_network *src)
inline void ieee80211_process_probe_response(
struct ieee80211_device *ieee,
struct ieee80211_probe_response *beacon,
struct ieee80211_rx_stats *stats)
void ieee80211_rx_mgt(struct ieee80211_device *ieee,
struct ieee80211_hdr_4addr *header,
struct ieee80211_rx_stats *stats)
