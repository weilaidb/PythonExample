static void libipw_monitor_rx(struct libipw_device *ieee,
struct sk_buff *skb,
struct libipw_rx_stats *rx_stats)
static struct libipw_frag_entry *libipw_frag_cache_find(struct
libipw_device
*ieee,
unsigned int seq,
unsigned int frag,
u8 * src,
u8 * dst)
static struct sk_buff *libipw_frag_cache_get(struct libipw_device *ieee,
struct libipw_hdr_4addr *hdr)
static int libipw_frag_cache_invalidate(struct libipw_device *ieee,
struct libipw_hdr_4addr *hdr)
static int
libipw_rx_frame_mgmt(struct libipw_device *ieee, struct sk_buff *skb,
struct libipw_rx_stats *rx_stats, u16 type,
u16 stype)
static unsigned char libipw_rfc1042_header[] =
;
static unsigned char libipw_bridge_tunnel_header[] =
;
static int libipw_is_eapol_frame(struct libipw_device *ieee,
struct sk_buff *skb)
static int
libipw_rx_frame_decrypt(struct libipw_device *ieee, struct sk_buff *skb,
struct lib80211_crypt_data *crypt)
static int
libipw_rx_frame_decrypt_msdu(struct libipw_device *ieee,
struct sk_buff *skb, int keyidx,
struct lib80211_crypt_data *crypt)
int libipw_rx(struct libipw_device *ieee, struct sk_buff *skb,
struct libipw_rx_stats *rx_stats)
void libipw_rx_any(struct libipw_device *ieee,
struct sk_buff *skb, struct libipw_rx_stats *stats)
#define MGMT_FRAME_FIXED_PART_LENGTH		0x24
static u8 qos_oui[QOS_OUI_LEN] = ;
static int libipw_verify_qos_info(struct libipw_qos_information_element
*info_element, int sub_type)
static int libipw_read_qos_param_element(struct libipw_qos_parameter_info
*element_param, struct libipw_info_element
*info_element)
static int libipw_read_qos_info_element(struct
libipw_qos_information_element
*element_info, struct libipw_info_element
*info_element)
static int libipw_qos_convert_ac_to_parameters(struct
libipw_qos_parameter_info
*param_elm, struct
libipw_qos_parameters
*qos_param)
static int libipw_parse_qos_info_param_IE(struct libipw_info_element
*info_element,
struct libipw_network *network)
#define MFIE_STRING(x) case WLAN_EID_ ##x: return #x
static const char *get_info_element_string(u16 id)
static int libipw_parse_info_param(struct libipw_info_element
*info_element, u16 length,
struct libipw_network *network)
static int libipw_handle_assoc_resp(struct libipw_device *ieee, struct libipw_assoc_response
*frame, struct libipw_rx_stats *stats)
static int libipw_network_init(struct libipw_device *ieee, struct libipw_probe_response
*beacon,
struct libipw_network *network,
struct libipw_rx_stats *stats)
static inline int is_same_network(struct libipw_network *src,
struct libipw_network *dst)
static void update_network(struct libipw_network *dst,
struct libipw_network *src)
static inline int is_beacon(__le16 fc)
static void libipw_process_probe_response(struct libipw_device
*ieee, struct
libipw_probe_response
*beacon, struct libipw_rx_stats
*stats)
void libipw_rx_mgt(struct libipw_device *ieee,
struct libipw_hdr_4addr *header,
struct libipw_rx_stats *stats)
EXPORT_SYMBOL_GPL(libipw_rx_any);
EXPORT_SYMBOL(libipw_rx_mgt);
EXPORT_SYMBOL(libipw_rx);
