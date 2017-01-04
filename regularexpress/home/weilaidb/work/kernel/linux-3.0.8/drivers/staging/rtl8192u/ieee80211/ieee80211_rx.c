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
bool
AddReorderEntry(
PRX_TS_RECORD			pTS,
PRX_REORDER_ENTRY		pReorderEntry
)
void ieee80211_indicate_packets(struct ieee80211_device *ieee, struct ieee80211_rxb** prxbIndicateArray,u8  index)
void RxReorderIndicatePacket( struct ieee80211_device *ieee,
struct ieee80211_rxb* prxb,
PRX_TS_RECORD		pTS,
u16			SeqNum)
u8 parse_subframe(struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats,
struct ieee80211_rxb *rxb,u8* src,u8* dst)
int ieee80211_rx(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats)
#define MGMT_FRAME_FIXED_PART_LENGTH            0x24
static u8 qos_oui[QOS_OUI_LEN] = ;
static int ieee80211_verify_qos_info(struct ieee80211_qos_information_element
*info_element, int sub_type)
static int ieee80211_read_qos_param_element(struct ieee80211_qos_parameter_info
*element_param, struct ieee80211_info_element
*info_element)
static int ieee80211_read_qos_info_element(struct
ieee80211_qos_information_element
*element_info, struct ieee80211_info_element
*info_element)
static int ieee80211_qos_convert_ac_to_parameters(struct
ieee80211_qos_parameter_info
*param_elm, struct
ieee80211_qos_parameters
*qos_param)
static int ieee80211_parse_qos_info_param_IE(struct ieee80211_info_element
*info_element,
struct ieee80211_network *network)
#define MFIE_STRING(x) case MFIE_TYPE_ ##x: return #x
static const char *get_info_element_string(u16 id)
static inline void ieee80211_extract_country_ie(
struct ieee80211_device *ieee,
struct ieee80211_info_element *info_element,
struct ieee80211_network *network,
u8 * addr2
)
int ieee80211_parse_info_param(struct ieee80211_device *ieee,
struct ieee80211_info_element *info_element,
u16 length,
struct ieee80211_network *network,
struct ieee80211_rx_stats *stats)
static inline u8 ieee80211_SignalStrengthTranslate(
u8  CurrSS
)
long ieee80211_translate_todbm(u8 signal_strength_index	)
static inline int ieee80211_network_init(
struct ieee80211_device *ieee,
struct ieee80211_probe_response *beacon,
struct ieee80211_network *network,
struct ieee80211_rx_stats *stats)
static inline int is_same_network(struct ieee80211_network *src,
struct ieee80211_network *dst, struct ieee80211_device* ieee)
static inline void update_network(struct ieee80211_network *dst,
struct ieee80211_network *src)
static inline int is_beacon(__le16 fc)
static inline void ieee80211_process_probe_response(
struct ieee80211_device *ieee,
struct ieee80211_probe_response *beacon,
struct ieee80211_rx_stats *stats)
void ieee80211_rx_mgt(struct ieee80211_device *ieee,
struct ieee80211_hdr_4addr *header,
struct ieee80211_rx_stats *stats)
EXPORT_SYMBOL(ieee80211_rx_mgt);
EXPORT_SYMBOL(ieee80211_rx);
