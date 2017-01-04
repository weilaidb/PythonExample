#define LIBIPW_H
#define LIBIPW_VERSION "git-1.1.13"
#define LIBIPW_DATA_LEN		2304
#define LIBIPW_1ADDR_LEN 10
#define LIBIPW_2ADDR_LEN 16
#define LIBIPW_3ADDR_LEN 24
#define LIBIPW_4ADDR_LEN 30
#define LIBIPW_FCS_LEN    4
#define LIBIPW_HLEN			(LIBIPW_4ADDR_LEN)
#define LIBIPW_FRAME_LEN		(LIBIPW_DATA_LEN + LIBIPW_HLEN)
#define MIN_FRAG_THRESHOLD     256U
#define	MAX_FRAG_THRESHOLD     2346U
#define LIBIPW_QCTL_TID		0x000F
extern u32 libipw_debug_level;
#define LIBIPW_DEBUG(level, fmt, args...) \
do  while (0)
static inline bool libipw_ratelimit_debug(u32 level)
#define LIBIPW_DEBUG(level, fmt, args...) do  while (0)
static inline bool libipw_ratelimit_debug(u32 level)
#define LIBIPW_DL_INFO          (1<<0)
#define LIBIPW_DL_WX            (1<<1)
#define LIBIPW_DL_SCAN          (1<<2)
#define LIBIPW_DL_STATE         (1<<3)
#define LIBIPW_DL_MGMT          (1<<4)
#define LIBIPW_DL_FRAG          (1<<5)
#define LIBIPW_DL_DROP          (1<<7)
#define LIBIPW_DL_TX            (1<<8)
#define LIBIPW_DL_RX            (1<<9)
#define LIBIPW_DL_QOS           (1<<31)
#define LIBIPW_ERROR(f, a...) printk(KERN_ERR "libipw: " f, ## a)
#define LIBIPW_WARNING(f, a...) printk(KERN_WARNING "libipw: " f, ## a)
#define LIBIPW_DEBUG_INFO(f, a...)   LIBIPW_DEBUG(LIBIPW_DL_INFO, f, ## a)
#define LIBIPW_DEBUG_WX(f, a...)     LIBIPW_DEBUG(LIBIPW_DL_WX, f, ## a)
#define LIBIPW_DEBUG_SCAN(f, a...)   LIBIPW_DEBUG(LIBIPW_DL_SCAN, f, ## a)
#define LIBIPW_DEBUG_STATE(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_STATE, f, ## a)
#define LIBIPW_DEBUG_MGMT(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_MGMT, f, ## a)
#define LIBIPW_DEBUG_FRAG(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_FRAG, f, ## a)
#define LIBIPW_DEBUG_DROP(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_DROP, f, ## a)
#define LIBIPW_DEBUG_TX(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_TX, f, ## a)
#define LIBIPW_DEBUG_RX(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_RX, f, ## a)
#define LIBIPW_DEBUG_QOS(f, a...)  LIBIPW_DEBUG(LIBIPW_DL_QOS, f, ## a)
#define WIRELESS_SPY
#define ETH_P_PREAUTH 0x88C7
#define ETH_P_80211_RAW (ETH_P_ECONET + 1)
#define P80211_OUI_LEN 3
struct libipw_snap_hdr  __packed;
#define SNAP_SIZE sizeof(struct libipw_snap_hdr)
#define WLAN_FC_GET_VERS(fc) ((fc) & IEEE80211_FCTL_VERS)
#define WLAN_FC_GET_TYPE(fc) ((fc) & IEEE80211_FCTL_FTYPE)
#define WLAN_FC_GET_STYPE(fc) ((fc) & IEEE80211_FCTL_STYPE)
#define WLAN_GET_SEQ_FRAG(seq) ((seq) & IEEE80211_SCTL_FRAG)
#define WLAN_GET_SEQ_SEQ(seq)  (((seq) & IEEE80211_SCTL_SEQ) >> 4)
#define LIBIPW_STATMASK_SIGNAL (1<<0)
#define LIBIPW_STATMASK_RSSI (1<<1)
#define LIBIPW_STATMASK_NOISE (1<<2)
#define LIBIPW_STATMASK_RATE (1<<3)
#define LIBIPW_STATMASK_WEMASK 0x7
#define LIBIPW_CCK_MODULATION    (1<<0)
#define LIBIPW_OFDM_MODULATION   (1<<1)
#define LIBIPW_24GHZ_BAND     (1<<0)
#define LIBIPW_52GHZ_BAND     (1<<1)
#define LIBIPW_CCK_RATE_1MB		        0x02
#define LIBIPW_CCK_RATE_2MB		        0x04
#define LIBIPW_CCK_RATE_5MB		        0x0B
#define LIBIPW_CCK_RATE_11MB		        0x16
#define LIBIPW_OFDM_RATE_6MB		        0x0C
#define LIBIPW_OFDM_RATE_9MB		        0x12
#define LIBIPW_OFDM_RATE_12MB		0x18
#define LIBIPW_OFDM_RATE_18MB		0x24
#define LIBIPW_OFDM_RATE_24MB		0x30
#define LIBIPW_OFDM_RATE_36MB		0x48
#define LIBIPW_OFDM_RATE_48MB		0x60
#define LIBIPW_OFDM_RATE_54MB		0x6C
#define LIBIPW_BASIC_RATE_MASK		0x80
#define LIBIPW_CCK_RATE_1MB_MASK		(1<<0)
#define LIBIPW_CCK_RATE_2MB_MASK		(1<<1)
#define LIBIPW_CCK_RATE_5MB_MASK		(1<<2)
#define LIBIPW_CCK_RATE_11MB_MASK		(1<<3)
#define LIBIPW_OFDM_RATE_6MB_MASK		(1<<4)
#define LIBIPW_OFDM_RATE_9MB_MASK		(1<<5)
#define LIBIPW_OFDM_RATE_12MB_MASK		(1<<6)
#define LIBIPW_OFDM_RATE_18MB_MASK		(1<<7)
#define LIBIPW_OFDM_RATE_24MB_MASK		(1<<8)
#define LIBIPW_OFDM_RATE_36MB_MASK		(1<<9)
#define LIBIPW_OFDM_RATE_48MB_MASK		(1<<10)
#define LIBIPW_OFDM_RATE_54MB_MASK		(1<<11)
#define LIBIPW_CCK_RATES_MASK	        0x0000000F
#define LIBIPW_CCK_BASIC_RATES_MASK	(LIBIPW_CCK_RATE_1MB_MASK | \
LIBIPW_CCK_RATE_2MB_MASK)
#define LIBIPW_CCK_DEFAULT_RATES_MASK	(LIBIPW_CCK_BASIC_RATES_MASK | \
LIBIPW_CCK_RATE_5MB_MASK | \
LIBIPW_CCK_RATE_11MB_MASK)
#define LIBIPW_OFDM_RATES_MASK		0x00000FF0
#define LIBIPW_OFDM_BASIC_RATES_MASK	(LIBIPW_OFDM_RATE_6MB_MASK | \
LIBIPW_OFDM_RATE_12MB_MASK | \
LIBIPW_OFDM_RATE_24MB_MASK)
#define LIBIPW_OFDM_DEFAULT_RATES_MASK	(LIBIPW_OFDM_BASIC_RATES_MASK | \
LIBIPW_OFDM_RATE_9MB_MASK  | \
LIBIPW_OFDM_RATE_18MB_MASK | \
LIBIPW_OFDM_RATE_36MB_MASK | \
LIBIPW_OFDM_RATE_48MB_MASK | \
LIBIPW_OFDM_RATE_54MB_MASK)
#define LIBIPW_DEFAULT_RATES_MASK (LIBIPW_OFDM_DEFAULT_RATES_MASK | \
LIBIPW_CCK_DEFAULT_RATES_MASK)
#define LIBIPW_NUM_OFDM_RATES	    8
#define LIBIPW_NUM_CCK_RATES	            4
#define LIBIPW_OFDM_SHIFT_MASK_A         4
struct libipw_rx_stats ;
#define LIBIPW_FRAG_CACHE_LEN 4
struct libipw_frag_entry ;
struct libipw_stats ;
struct libipw_device;
#define SEC_KEY_1		(1<<0)
#define SEC_KEY_2		(1<<1)
#define SEC_KEY_3		(1<<2)
#define SEC_KEY_4		(1<<3)
#define SEC_ACTIVE_KEY		(1<<4)
#define SEC_AUTH_MODE		(1<<5)
#define SEC_UNICAST_GROUP	(1<<6)
#define SEC_LEVEL		(1<<7)
#define SEC_ENABLED		(1<<8)
#define SEC_ENCRYPT		(1<<9)
#define SEC_LEVEL_0		0
#define SEC_LEVEL_1		1
#define SEC_LEVEL_2		2
#define SEC_LEVEL_2_CKIP	3
#define SEC_LEVEL_3		4
#define SEC_ALG_NONE		0
#define SEC_ALG_WEP		1
#define SEC_ALG_TKIP		2
#define SEC_ALG_CCMP		3
#define WEP_KEYS		4
#define WEP_KEY_LEN		13
#define SCM_KEY_LEN		32
#define SCM_TEMPORAL_KEY_LENGTH	16
struct libipw_security  __packed;
#define BEACON_PROBE_SSID_ID_POSITION 12
struct libipw_hdr_1addr  __packed;
struct libipw_hdr_2addr  __packed;
struct libipw_hdr_3addr  __packed;
struct libipw_hdr_4addr  __packed;
struct libipw_hdr_3addrqos  __packed;
struct libipw_info_element  __packed;
struct libipw_auth  __packed;
struct libipw_channel_switch  __packed;
struct libipw_action  __packed;
struct libipw_disassoc  __packed;
#define libipw_deauth libipw_disassoc
struct libipw_probe_request  __packed;
struct libipw_probe_response  __packed;
#define libipw_beacon libipw_probe_response
struct libipw_assoc_request  __packed;
struct libipw_reassoc_request  __packed;
struct libipw_assoc_response  __packed;
struct libipw_txb ;
#define MAX_SWEEP_TAB_ENTRIES		  42
#define MAX_SWEEP_TAB_ENTRIES_PER_PACKET  7
#define MAX_RATES_LENGTH                  ((u8)12)
#define MAX_RATES_EX_LENGTH               ((u8)16)
#define MAX_NETWORK_COUNT                  128
#define CRC_LENGTH                 4U
#define MAX_WPA_IE_LEN 64
#define NETWORK_HAS_OFDM       (1<<1)
#define NETWORK_HAS_CCK        (1<<2)
#define NETWORK_HAS_QOS_PARAMETERS      (1<<3)
#define NETWORK_HAS_QOS_INFORMATION     (1<<4)
#define NETWORK_HAS_QOS_MASK            (NETWORK_HAS_QOS_PARAMETERS | \
NETWORK_HAS_QOS_INFORMATION)
#define NETWORK_HAS_POWER_CONSTRAINT    (1<<5)
#define NETWORK_HAS_CSA                 (1<<6)
#define NETWORK_HAS_QUIET               (1<<7)
#define NETWORK_HAS_IBSS_DFS            (1<<8)
#define NETWORK_HAS_TPC_REPORT          (1<<9)
#define NETWORK_HAS_ERP_VALUE           (1<<10)
#define QOS_QUEUE_NUM                   4
#define QOS_OUI_LEN                     3
#define QOS_OUI_TYPE                    2
#define QOS_ELEMENT_ID                  221
#define QOS_OUI_INFO_SUB_TYPE           0
#define QOS_OUI_PARAM_SUB_TYPE          1
#define QOS_VERSION_1                   1
#define QOS_AIFSN_MIN_VALUE             2
struct libipw_qos_information_element  __packed;
struct libipw_qos_ac_parameter  __packed;
struct libipw_qos_parameter_info  __packed;
struct libipw_qos_parameters  __packed;
struct libipw_qos_data ;
struct libipw_tim_parameters  __packed;
enum ;
struct libipw_basic_report  __packed;
enum ;
enum ;
struct libipw_measurement_params  __packed;
struct libipw_measurement_request  __packed;
struct libipw_measurement_report  __packed;
struct libipw_tpc_report  __packed;
struct libipw_channel_map  __packed;
struct libipw_ibss_dfs ;
struct libipw_csa  __packed;
struct libipw_quiet  __packed;
struct libipw_network ;
enum libipw_state ;
#define DEFAULT_MAX_SCAN_AGE (15 * HZ)
#define DEFAULT_FTS 2346
#define CFG_LIBIPW_RESERVE_FCS (1<<0)
#define CFG_LIBIPW_COMPUTE_FCS (1<<1)
#define CFG_LIBIPW_RTS (1<<2)
#define LIBIPW_24GHZ_MIN_CHANNEL 1
#define LIBIPW_24GHZ_MAX_CHANNEL 14
#define LIBIPW_24GHZ_CHANNELS (LIBIPW_24GHZ_MAX_CHANNEL - \
LIBIPW_24GHZ_MIN_CHANNEL + 1)
#define LIBIPW_52GHZ_MIN_CHANNEL 34
#define LIBIPW_52GHZ_MAX_CHANNEL 165
#define LIBIPW_52GHZ_CHANNELS (LIBIPW_52GHZ_MAX_CHANNEL - \
LIBIPW_52GHZ_MIN_CHANNEL + 1)
enum ;
struct libipw_channel ;
struct libipw_geo ;
struct libipw_device ;
#define IEEE_A            (1<<0)
#define IEEE_B            (1<<1)
#define IEEE_G            (1<<2)
#define IEEE_MODE_MASK    (IEEE_A|IEEE_B|IEEE_G)
static inline void *libipw_priv(struct net_device *dev)
static inline int libipw_is_valid_mode(struct libipw_device *ieee,
int mode)
static inline int libipw_get_hdrlen(u16 fc)
static inline u8 *libipw_get_payload(struct ieee80211_hdr *hdr)
static inline int libipw_is_ofdm_rate(u8 rate)
static inline int libipw_is_cck_rate(u8 rate)
extern void free_libipw(struct net_device *dev, int monitor);
extern struct net_device *alloc_libipw(int sizeof_priv, int monitor);
extern int libipw_change_mtu(struct net_device *dev, int new_mtu);
extern void libipw_networks_age(struct libipw_device *ieee,
unsigned long age_secs);
extern int libipw_set_encryption(struct libipw_device *ieee);
extern netdev_tx_t libipw_xmit(struct sk_buff *skb,
struct net_device *dev);
extern void libipw_txb_free(struct libipw_txb *);
extern void libipw_rx_any(struct libipw_device *ieee,
struct sk_buff *skb, struct libipw_rx_stats *stats);
extern int libipw_rx(struct libipw_device *ieee, struct sk_buff *skb,
struct libipw_rx_stats *rx_stats);
extern void libipw_rx_mgt(struct libipw_device *ieee,
struct libipw_hdr_4addr *header,
struct libipw_rx_stats *stats);
extern void libipw_network_reset(struct libipw_network *network);
extern const struct libipw_geo *libipw_get_geo(struct libipw_device
*ieee);
extern int libipw_set_geo(struct libipw_device *ieee,
const struct libipw_geo *geo);
extern int libipw_is_valid_channel(struct libipw_device *ieee,
u8 channel);
extern int libipw_channel_to_index(struct libipw_device *ieee,
u8 channel);
extern u8 libipw_freq_to_channel(struct libipw_device *ieee, u32 freq);
extern u8 libipw_get_channel_flags(struct libipw_device *ieee,
u8 channel);
extern const struct libipw_channel *libipw_get_channel(struct
libipw_device
*ieee, u8 channel);
extern u32 libipw_channel_to_freq(struct libipw_device * ieee,
u8 channel);
extern int libipw_wx_get_scan(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key);
extern int libipw_wx_set_encode(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key);
extern int libipw_wx_get_encode(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key);
extern int libipw_wx_set_encodeext(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int libipw_wx_get_encodeext(struct libipw_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
static inline void libipw_increment_scans(struct libipw_device *ieee)
static inline int libipw_get_scans(struct libipw_device *ieee)
