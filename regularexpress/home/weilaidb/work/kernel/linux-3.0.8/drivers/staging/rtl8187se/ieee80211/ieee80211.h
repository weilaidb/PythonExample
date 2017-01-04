#define IEEE80211_H
#define KEY_TYPE_NA		0x0
#define KEY_TYPE_WEP40 		0x1
#define KEY_TYPE_TKIP		0x2
#define KEY_TYPE_CCMP		0x4
#define KEY_TYPE_WEP104		0x5
#define aSifsTime					10
#define MGMT_QUEUE_NUM 5
#define IEEE_CMD_SET_WPA_PARAM			1
#define	IEEE_CMD_SET_WPA_IE			2
#define IEEE_CMD_SET_ENCRYPTION			3
#define IEEE_CMD_MLME				4
#define IEEE_PARAM_WPA_ENABLED			1
#define IEEE_PARAM_TKIP_COUNTERMEASURES		2
#define IEEE_PARAM_DROP_UNENCRYPTED		3
#define IEEE_PARAM_PRIVACY_INVOKED		4
#define IEEE_PARAM_AUTH_ALGS			5
#define IEEE_PARAM_IEEE_802_1X			6
#define IEEE_PARAM_WPAX_SELECT			7
#define IEEE_PROTO_WPA				1
#define IEEE_PROTO_RSN				2
#define IEEE_WPAX_USEGROUP			0
#define IEEE_WPAX_WEP40				1
#define IEEE_WPAX_TKIP				2
#define IEEE_WPAX_WRAP   			3
#define IEEE_WPAX_CCMP				4
#define IEEE_WPAX_WEP104			5
#define IEEE_KEY_MGMT_IEEE8021X			1
#define IEEE_KEY_MGMT_PSK			2
#define IEEE_MLME_STA_DEAUTH			1
#define IEEE_MLME_STA_DISASSOC			2
#define IEEE_CRYPT_ERR_UNKNOWN_ALG		2
#define IEEE_CRYPT_ERR_UNKNOWN_ADDR		3
#define IEEE_CRYPT_ERR_CRYPT_INIT_FAILED		4
#define IEEE_CRYPT_ERR_KEY_SET_FAILED		5
#define IEEE_CRYPT_ERR_TX_KEY_SET_FAILED		6
#define IEEE_CRYPT_ERR_CARD_CONF_FAILED		7
#define	IEEE_CRYPT_ALG_NAME_LEN			16
typedef struct ieee_param ieee_param;
#define MSECS(t) msecs_to_jiffies(t)
#define msleep_interruptible_rtl  msleep_interruptible
#define IEEE80211_DATA_LEN		2304
#define IEEE80211_3ADDR_LEN 24
#define IEEE80211_4ADDR_LEN 30
#define IEEE80211_FCS_LEN    4
#define IEEE80211_HLEN			IEEE80211_4ADDR_LEN
#define IEEE80211_FRAME_LEN		(IEEE80211_DATA_LEN + IEEE80211_HLEN)
#define IEEE80211_MGMT_HDR_LEN 24
#define IEEE80211_DATA_HDR3_LEN 24
#define IEEE80211_DATA_HDR4_LEN 30
#define MIN_FRAG_THRESHOLD     256U
#define	MAX_FRAG_THRESHOLD     2346U
#define IEEE80211_FCTL_DSTODS		0x0300
#define IEEE80211_FCTL_WEP		0x4000
extern u32 ieee80211_debug_level;
#define IEEE80211_DEBUG(level, fmt, args...) \
do  while (0)
#define IEEE80211_DEBUG(level, fmt, args...) do  while (0)
#define IEEE80211_DL_INFO          (1<<0)
#define IEEE80211_DL_WX            (1<<1)
#define IEEE80211_DL_SCAN          (1<<2)
#define IEEE80211_DL_STATE         (1<<3)
#define IEEE80211_DL_MGMT          (1<<4)
#define IEEE80211_DL_FRAG          (1<<5)
#define IEEE80211_DL_EAP           (1<<6)
#define IEEE80211_DL_DROP          (1<<7)
#define IEEE80211_DL_TX            (1<<8)
#define IEEE80211_DL_RX            (1<<9)
#define IEEE80211_ERROR(f, a...) printk(KERN_ERR "ieee80211: " f, ## a)
#define IEEE80211_WARNING(f, a...) printk(KERN_WARNING "ieee80211: " f, ## a)
#define IEEE80211_DEBUG_INFO(f, a...)   IEEE80211_DEBUG(IEEE80211_DL_INFO, f, ## a)
#define IEEE80211_DEBUG_WX(f, a...)     IEEE80211_DEBUG(IEEE80211_DL_WX, f, ## a)
#define IEEE80211_DEBUG_SCAN(f, a...)   IEEE80211_DEBUG(IEEE80211_DL_SCAN, f, ## a)
#define IEEE80211_DEBUG_STATE(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_STATE, f, ## a)
#define IEEE80211_DEBUG_MGMT(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_MGMT, f, ## a)
#define IEEE80211_DEBUG_FRAG(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_FRAG, f, ## a)
#define IEEE80211_DEBUG_EAP(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_EAP, f, ## a)
#define IEEE80211_DEBUG_DROP(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_DROP, f, ## a)
#define IEEE80211_DEBUG_TX(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_TX, f, ## a)
#define IEEE80211_DEBUG_RX(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_RX, f, ## a)
#define WIRELESS_SPY
#define ETH_P_PAE 0x888E
#define ETH_P_PREAUTH 0x88C7
#define ETH_P_80211_RAW (ETH_P_ECONET + 1)
#define P80211_OUI_LEN 3
struct ieee80211_snap_hdr  __attribute__ ((packed));
#define SNAP_SIZE sizeof(struct ieee80211_snap_hdr)
#define WLAN_FC_GET_TYPE(fc) ((fc) & IEEE80211_FCTL_FTYPE)
#define WLAN_FC_GET_STYPE(fc) ((fc) & IEEE80211_FCTL_STYPE)
#define WLAN_GET_SEQ_FRAG(seq) ((seq) & IEEE80211_SCTL_FRAG)
#define WLAN_GET_SEQ_SEQ(seq)  ((seq) & IEEE80211_SCTL_SEQ)
#define WLAN_CAPABILITY_BSS (1<<0)
#define WLAN_CAPABILITY_SHORT_SLOT (1<<10)
#define IEEE80211_STATMASK_SIGNAL (1<<0)
#define IEEE80211_STATMASK_RSSI (1<<1)
#define IEEE80211_STATMASK_NOISE (1<<2)
#define IEEE80211_STATMASK_RATE (1<<3)
#define IEEE80211_STATMASK_WEMASK 0x7
#define IEEE80211_CCK_MODULATION    (1<<0)
#define IEEE80211_OFDM_MODULATION   (1<<1)
#define IEEE80211_24GHZ_BAND     (1<<0)
#define IEEE80211_52GHZ_BAND     (1<<1)
#define IEEE80211_CCK_RATE_LEN  		4
#define IEEE80211_CCK_RATE_1MB		        0x02
#define IEEE80211_CCK_RATE_2MB		        0x04
#define IEEE80211_CCK_RATE_5MB		        0x0B
#define IEEE80211_CCK_RATE_11MB		        0x16
#define IEEE80211_OFDM_RATE_LEN 		8
#define IEEE80211_OFDM_RATE_6MB		        0x0C
#define IEEE80211_OFDM_RATE_9MB		        0x12
#define IEEE80211_OFDM_RATE_12MB		0x18
#define IEEE80211_OFDM_RATE_18MB		0x24
#define IEEE80211_OFDM_RATE_24MB		0x30
#define IEEE80211_OFDM_RATE_36MB		0x48
#define IEEE80211_OFDM_RATE_48MB		0x60
#define IEEE80211_OFDM_RATE_54MB		0x6C
#define IEEE80211_BASIC_RATE_MASK		0x80
#define IEEE80211_CCK_RATE_1MB_MASK		(1<<0)
#define IEEE80211_CCK_RATE_2MB_MASK		(1<<1)
#define IEEE80211_CCK_RATE_5MB_MASK		(1<<2)
#define IEEE80211_CCK_RATE_11MB_MASK		(1<<3)
#define IEEE80211_OFDM_RATE_6MB_MASK		(1<<4)
#define IEEE80211_OFDM_RATE_9MB_MASK		(1<<5)
#define IEEE80211_OFDM_RATE_12MB_MASK		(1<<6)
#define IEEE80211_OFDM_RATE_18MB_MASK		(1<<7)
#define IEEE80211_OFDM_RATE_24MB_MASK		(1<<8)
#define IEEE80211_OFDM_RATE_36MB_MASK		(1<<9)
#define IEEE80211_OFDM_RATE_48MB_MASK		(1<<10)
#define IEEE80211_OFDM_RATE_54MB_MASK		(1<<11)
#define IEEE80211_CCK_RATES_MASK	        0x0000000F
#define IEEE80211_CCK_BASIC_RATES_MASK	(IEEE80211_CCK_RATE_1MB_MASK | \
IEEE80211_CCK_RATE_2MB_MASK)
#define IEEE80211_CCK_DEFAULT_RATES_MASK	(IEEE80211_CCK_BASIC_RATES_MASK | \
IEEE80211_CCK_RATE_5MB_MASK | \
IEEE80211_CCK_RATE_11MB_MASK)
#define IEEE80211_OFDM_RATES_MASK		0x00000FF0
#define IEEE80211_OFDM_BASIC_RATES_MASK	(IEEE80211_OFDM_RATE_6MB_MASK | \
IEEE80211_OFDM_RATE_12MB_MASK | \
IEEE80211_OFDM_RATE_24MB_MASK)
#define IEEE80211_OFDM_DEFAULT_RATES_MASK	(IEEE80211_OFDM_BASIC_RATES_MASK | \
IEEE80211_OFDM_RATE_9MB_MASK  | \
IEEE80211_OFDM_RATE_18MB_MASK | \
IEEE80211_OFDM_RATE_36MB_MASK | \
IEEE80211_OFDM_RATE_48MB_MASK | \
IEEE80211_OFDM_RATE_54MB_MASK)
#define IEEE80211_DEFAULT_RATES_MASK (IEEE80211_OFDM_DEFAULT_RATES_MASK | \
IEEE80211_CCK_DEFAULT_RATES_MASK)
#define IEEE80211_NUM_OFDM_RATES	    8
#define IEEE80211_NUM_CCK_RATES	            4
#define IEEE80211_OFDM_SHIFT_MASK_A         4
#define IEEE80211_FC0_TYPE_MASK		0x0c
#define IEEE80211_FC0_TYPE_DATA		0x08
#define IEEE80211_FC0_SUBTYPE_MASK	0xB0
#define IEEE80211_FC0_SUBTYPE_QOS	0x80
#define IEEE80211_QOS_HAS_SEQ(fc) \
(((fc) & (IEEE80211_FC0_TYPE_MASK | IEEE80211_FC0_SUBTYPE_MASK)) == \
(IEEE80211_FC0_TYPE_DATA | IEEE80211_FC0_SUBTYPE_QOS))
#define IEEE_IBSS_MAC_HASH_SIZE 31
struct ieee_ibss_seq ;
struct ieee80211_rx_stats ;
#define IEEE80211_FRAG_CACHE_LEN 4
struct ieee80211_frag_entry ;
struct ieee80211_stats ;
struct ieee80211_device;
#define SEC_KEY_1         (1<<0)
#define SEC_KEY_2         (1<<1)
#define SEC_KEY_3         (1<<2)
#define SEC_KEY_4         (1<<3)
#define SEC_ACTIVE_KEY    (1<<4)
#define SEC_AUTH_MODE     (1<<5)
#define SEC_UNICAST_GROUP (1<<6)
#define SEC_LEVEL         (1<<7)
#define SEC_ENABLED       (1<<8)
#define SEC_LEVEL_0      0
#define SEC_LEVEL_1      1
#define SEC_LEVEL_2      2
#define SEC_LEVEL_2_CKIP 3
#define SEC_LEVEL_3      4
#define WEP_KEYS 4
#define WEP_KEY_LEN 13
#define WEP_KEY_LEN_MODIF 32
struct ieee80211_security  __attribute__ ((packed));
enum ;
struct ieee80211_header_data ;
struct ieee80211_hdr_4addr  __attribute__ ((packed));
struct ieee80211_hdr_3addrqos  __attribute__ ((packed));
struct ieee80211_hdr_4addrqos  __attribute__ ((packed));
struct ieee80211_info_element_hdr  __attribute__ ((packed));
struct ieee80211_info_element  __attribute__ ((packed));
struct ieee80211_authentication  __attribute__ ((packed));
struct ieee80211_disassoc_frame  __attribute__ ((packed));
struct ieee80211_probe_request  __attribute__ ((packed));
struct ieee80211_probe_response  __attribute__ ((packed));
struct ieee80211_assoc_request_frame  __attribute__ ((packed));
struct ieee80211_assoc_response_frame  __attribute__ ((packed));
struct ieee80211_txb ;
#define MAX_SWEEP_TAB_ENTRIES			42
#define MAX_SWEEP_TAB_ENTRIES_PER_PACKET	7
#define MAX_RATES_LENGTH			((u8)12)
#define MAX_RATES_EX_LENGTH			((u8)16)
#define MAX_NETWORK_COUNT			128
#define MAX_CHANNEL_NUMBER			165
#define IEEE80211_SOFTMAC_SCAN_TIME		100
#define IEEE80211_SOFTMAC_ASSOC_RETRY_TIME	(HZ * 2)
#define CRC_LENGTH	4U
#define MAX_WPA_IE_LEN	64
#define NETWORK_EMPTY_ESSID	(1 << 0)
#define NETWORK_HAS_OFDM	(1 << 1)
#define NETWORK_HAS_CCK		(1 << 2)
struct ieee80211_wmm_ac_param ;
struct ieee80211_wmm_ts_info  __attribute__ ((packed));
struct ieee80211_wmm_tspec_elem __attribute__((packed));
enum eap_type ;
static const char *eap_types[] = ;
static inline const char *eap_get_type(int type)
struct eapol  __attribute__ ((packed));
struct ieee80211_softmac_stats ;
#define BEACON_PROBE_SSID_ID_POSITION 12
#define IEEE80211_DEFAULT_TX_ESSID "Penguin"
#define IEEE80211_DEFAULT_BASIC_RATE 10
enum ;
#define MAX_SP_Len  (WMM_all_frame << 4)
#define IEEE80211_QOS_TID 0x0f
#define QOS_CTL_NOTCONTAIN_ACK (0x01 << 5)
#define MAX_IE_LEN						0xFF
typedef struct _CHANNEL_LISTCHANNEL_LIST, *PCHANNEL_LIST;
#define IEEE80211_WATCH_DOG_TIME    2000
#define ANTENNA_DIVERSITY_TIMER_PERIOD		1000
#define IEEE80211_DTIM_MBCAST 4
#define IEEE80211_DTIM_UCAST 2
#define IEEE80211_DTIM_VALID 1
#define IEEE80211_DTIM_INVALID 0
#define IEEE80211_PS_DISABLED 0
#define IEEE80211_PS_UNICAST IEEE80211_DTIM_UCAST
#define IEEE80211_PS_MBCAST IEEE80211_DTIM_MBCAST
#define IEEE80211_PS_ENABLE   IEEE80211_DTIM_VALID
#undef WMM_Hang_8187
#define WME_AC_BE   0x00
#define WME_AC_BK   0x01
#define WME_AC_VI   0x02
#define WME_AC_VO   0x03
#define WME_ACI_MASK 0x03
#define WME_AIFSN_MASK 0x03
#define WME_AC_PRAM_LEN 16
#define UP2AC(up) (		   \
((up) < 1) ? WME_AC_BE : \
((up) < 3) ? WME_AC_BK : \
((up) < 4) ? WME_AC_BE : \
((up) < 6) ? WME_AC_VI : \
WME_AC_VO)
#define AC2UP(_ac)	(       \
((_ac) == WME_AC_VO) ? 6 : \
((_ac) == WME_AC_VI) ? 5 : \
((_ac) == WME_AC_BK) ? 1 : \
0)
#define	ETHER_ADDR_LEN		6
struct	ether_header  __attribute__((packed));
#define	ETHERTYPE_PAE	0x888e
#define	ETHERTYPE_IP	0x0800
struct ieee80211_network ;
enum ieee80211_state ;
#define DEFAULT_MAX_SCAN_AGE (15 * HZ)
#define DEFAULT_FTS 2346
#define CFG_IEEE80211_RESERVE_FCS (1<<0)
#define CFG_IEEE80211_COMPUTE_FCS (1<<1)
typedef struct tx_pending_ttx_pending_t;
enum ;
struct ieee80211_device ;
#define IEEE_A            (1<<0)
#define IEEE_B            (1<<1)
#define IEEE_G            (1<<2)
#define IEEE_MODE_MASK    (IEEE_A|IEEE_B|IEEE_G)
#define IEEE_SOFTMAC_SCAN (1<<2)
#define IEEE_SOFTMAC_ASSOCIATE (1<<3)
#define IEEE_SOFTMAC_PROBERQ (1<<4)
#define IEEE_SOFTMAC_PROBERS (1<<5)
#define IEEE_SOFTMAC_TX_QUEUE (1<<7)
#define IEEE_SOFTMAC_SINGLE_QUEUE (1<<8)
#define IEEE_SOFTMAC_BEACONS (1<<6)
static inline void *ieee80211_priv(struct net_device *dev)
extern inline int ieee80211_is_empty_essid(const char *essid, int essid_len)
extern inline int ieee80211_is_valid_mode(struct ieee80211_device *ieee, int mode)
extern inline int ieee80211_get_hdrlen(u16 fc)
extern void free_ieee80211(struct net_device *dev);
extern struct net_device *alloc_ieee80211(int sizeof_priv);
extern int ieee80211_set_encryption(struct ieee80211_device *ieee);
extern int ieee80211_encrypt_fragment(
struct ieee80211_device *ieee,
struct sk_buff *frag,
int hdr_len);
extern int ieee80211_rtl_xmit(struct sk_buff *skb,
struct net_device *dev);
extern void ieee80211_txb_free(struct ieee80211_txb *);
extern int ieee80211_rtl_rx(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats);
extern void ieee80211_rx_mgt(struct ieee80211_device *ieee,
struct ieee80211_hdr_4addr *header,
struct ieee80211_rx_stats *stats);
extern int ieee80211_wx_get_scan(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key);
extern int ieee80211_wx_set_encode(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key);
extern int ieee80211_wx_get_encode(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *key);
extern int ieee80211_wx_set_encode_ext(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data* wrqu, char *extra);
int ieee80211_wx_set_auth(struct ieee80211_device *ieee,
struct iw_request_info *info,
struct iw_param *data, char *extra);
int ieee80211_wx_set_mlme(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
int ieee80211_wx_set_gen_ie(struct ieee80211_device *ieee, u8 *ie, size_t len);
extern short ieee80211_is_54g(struct ieee80211_network net);
extern short ieee80211_is_shortslot(struct ieee80211_network net);
extern int ieee80211_rx_frame_softmac(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats, u16 type,
u16 stype);
extern void ieee80211_softmac_new_net(struct ieee80211_device *ieee, struct ieee80211_network *net);
extern void ieee80211_softmac_xmit(struct ieee80211_txb *txb, struct ieee80211_device *ieee);
extern void ieee80211_softmac_check_all_nets(struct ieee80211_device *ieee);
extern void ieee80211_start_bss(struct ieee80211_device *ieee);
extern void ieee80211_start_master_bss(struct ieee80211_device *ieee);
extern void ieee80211_start_ibss(struct ieee80211_device *ieee);
extern void ieee80211_softmac_init(struct ieee80211_device *ieee);
extern void ieee80211_softmac_free(struct ieee80211_device *ieee);
extern void ieee80211_associate_abort(struct ieee80211_device *ieee);
extern void ieee80211_disassociate(struct ieee80211_device *ieee);
extern void ieee80211_stop_scan(struct ieee80211_device *ieee);
extern void ieee80211_start_scan_syncro(struct ieee80211_device *ieee);
extern void ieee80211_check_all_nets(struct ieee80211_device *ieee);
extern void ieee80211_start_protocol(struct ieee80211_device *ieee);
extern void ieee80211_stop_protocol(struct ieee80211_device *ieee);
extern void ieee80211_softmac_start_protocol(struct ieee80211_device *ieee);
extern void ieee80211_softmac_stop_protocol(struct ieee80211_device *ieee);
extern void ieee80211_reset_queue(struct ieee80211_device *ieee);
extern void ieee80211_rtl_wake_queue(struct ieee80211_device *ieee);
extern void ieee80211_rtl_stop_queue(struct ieee80211_device *ieee);
extern struct sk_buff *ieee80211_get_beacon(struct ieee80211_device *ieee);
extern void ieee80211_start_send_beacons(struct ieee80211_device *ieee);
extern void ieee80211_stop_send_beacons(struct ieee80211_device *ieee);
extern int ieee80211_wpa_supplicant_ioctl(struct ieee80211_device *ieee, struct iw_point *p);
extern void notify_wx_assoc_event(struct ieee80211_device *ieee);
extern void ieee80211_ps_tx_ack(struct ieee80211_device *ieee, short success);
extern void SendDisassociation(struct ieee80211_device *ieee,u8* asSta,u8 asRsn);
extern void ieee80211_rtl_start_scan(struct ieee80211_device *ieee);
extern void SendDisassociation(struct ieee80211_device *ieee,
u8*                     asSta,
u8                      asRsn);
extern void ieee80211_tkip_null(void);
extern void ieee80211_wep_null(void);
extern void ieee80211_ccmp_null(void);
extern int ieee80211_wx_get_wap(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *ext);
extern int ieee80211_wx_set_wap(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *awrq,
char *extra);
extern int ieee80211_wx_get_essid(struct ieee80211_device *ieee, struct iw_request_info *a,union iwreq_data *wrqu,char *b);
extern int ieee80211_wx_set_rate(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_get_rate(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_set_mode(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b);
extern int ieee80211_wx_set_scan(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b);
extern int ieee80211_wx_set_essid(struct ieee80211_device *ieee,
struct iw_request_info *a,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_get_mode(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b);
extern int ieee80211_wx_set_freq(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b);
extern int ieee80211_wx_get_freq(struct ieee80211_device *ieee, struct iw_request_info *a,
union iwreq_data *wrqu, char *b);
extern void ieee80211_wx_sync_scan_wq(struct work_struct *work);
extern int ieee80211_wx_set_rawtx(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_get_name(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_set_power(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_get_power(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern void ieee80211_softmac_ips_scan_syncro(struct ieee80211_device *ieee);
extern void ieee80211_sta_ps_send_null_frame(struct ieee80211_device *ieee, short pwr);
extern const long ieee80211_wlan_frequencies[];
extern inline void ieee80211_increment_scans(struct ieee80211_device *ieee)
extern inline int ieee80211_get_scans(struct ieee80211_device *ieee)
static inline const char *escape_essid(const char *essid, u8 essid_len)
