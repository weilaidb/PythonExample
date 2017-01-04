#define IEEE80211_H
#define IW_MODE_MONITOR 6
#define IWEVCUSTOM 0x8c02
#define container_of(ptr, type, member) ()
#define KEY_TYPE_NA		0x0
#define KEY_TYPE_WEP40 		0x1
#define KEY_TYPE_TKIP		0x2
#define KEY_TYPE_CCMP		0x4
#define KEY_TYPE_WEP104		0x5
#define MAX_QUEUE_SIZE		0x10
#define BK_QUEUE                               0
#define BE_QUEUE                               1
#define VI_QUEUE                               2
#define VO_QUEUE                               3
#define HCCA_QUEUE                             4
#define TXCMD_QUEUE                            5
#define MGNT_QUEUE                             6
#define HIGH_QUEUE                             7
#define BEACON_QUEUE                           8
#define LOW_QUEUE                              BE_QUEUE
#define NORMAL_QUEUE                           MGNT_QUEUE
#define SWRF_TIMEOUT				50
#define IE_CISCO_FLAG_POSITION		0x08
#define SUPPORT_CKIP_MIC			0x08
#define SUPPORT_CKIP_PK			0x10
typedef struct cb_desc cb_desc, *pcb_desc;
#define MGN_1M                  0x02
#define MGN_2M                  0x04
#define MGN_5_5M                0x0b
#define MGN_11M                 0x16
#define MGN_6M                  0x0c
#define MGN_9M                  0x12
#define MGN_12M                 0x18
#define MGN_18M                 0x24
#define MGN_24M                 0x30
#define MGN_36M                 0x48
#define MGN_48M                 0x60
#define MGN_54M                 0x6c
#define MGN_MCS0                0x80
#define MGN_MCS1                0x81
#define MGN_MCS2                0x82
#define MGN_MCS3                0x83
#define MGN_MCS4                0x84
#define MGN_MCS5                0x85
#define MGN_MCS6                0x86
#define MGN_MCS7                0x87
#define MGN_MCS8                0x88
#define MGN_MCS9                0x89
#define MGN_MCS10               0x8a
#define MGN_MCS11               0x8b
#define MGN_MCS12               0x8c
#define MGN_MCS13               0x8d
#define MGN_MCS14               0x8e
#define MGN_MCS15               0x8f
enum	_ReasonCode;
#define aSifsTime	 ((priv->ieee80211->current_network.mode == IEEE_A)||(priv->ieee80211->current_network.mode == IEEE_N_24G)||(priv->ieee80211->current_network.mode == IEEE_N_5G))? 16 : 10
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
#define IEEE_CRYPT_ERR_CRYPT_INIT_FAILED	4
#define IEEE_CRYPT_ERR_KEY_SET_FAILED		5
#define IEEE_CRYPT_ERR_TX_KEY_SET_FAILED	6
#define IEEE_CRYPT_ERR_CARD_CONF_FAILED		7
#define	IEEE_CRYPT_ALG_NAME_LEN			16
#define MAX_IE_LEN  0xff
#define ieee80211_crypt_deinit_entries 	ieee80211_crypt_deinit_entries_rsl
#define ieee80211_crypt_deinit_handler 	ieee80211_crypt_deinit_handler_rsl
#define ieee80211_crypt_delayed_deinit 	ieee80211_crypt_delayed_deinit_rsl
#define ieee80211_register_crypto_ops  	ieee80211_register_crypto_ops_rsl
#define ieee80211_unregister_crypto_ops ieee80211_unregister_crypto_ops_rsl
#define ieee80211_get_crypto_ops 	ieee80211_get_crypto_ops_rsl
#define ieee80211_ccmp_null		ieee80211_ccmp_null_rsl
#define ieee80211_tkip_null		ieee80211_tkip_null_rsl
#define ieee80211_wep_null		ieee80211_wep_null_rsl
#define free_ieee80211          	free_ieee80211_rsl
#define alloc_ieee80211        		alloc_ieee80211_rsl
#define ieee80211_rx 			ieee80211_rx_rsl
#define ieee80211_rx_mgt		ieee80211_rx_mgt_rsl
#define ieee80211_get_beacon		ieee80211_get_beacon_rsl
#define ieee80211_wake_queue		ieee80211_wake_queue_rsl
#define ieee80211_stop_queue		ieee80211_stop_queue_rsl
#define ieee80211_reset_queue		ieee80211_reset_queue_rsl
#define ieee80211_softmac_stop_protocol	ieee80211_softmac_stop_protocol_rsl
#define ieee80211_softmac_start_protocol ieee80211_softmac_start_protocol_rsl
#define ieee80211_is_shortslot		ieee80211_is_shortslot_rsl
#define ieee80211_is_54g		ieee80211_is_54g_rsl
#define ieee80211_wpa_supplicant_ioctl	ieee80211_wpa_supplicant_ioctl_rsl
#define ieee80211_ps_tx_ack		ieee80211_ps_tx_ack_rsl
#define ieee80211_softmac_xmit		ieee80211_softmac_xmit_rsl
#define ieee80211_stop_send_beacons	ieee80211_stop_send_beacons_rsl
#define notify_wx_assoc_event		notify_wx_assoc_event_rsl
#define SendDisassociation		SendDisassociation_rsl
#define ieee80211_disassociate		ieee80211_disassociate_rsl
#define ieee80211_start_send_beacons	ieee80211_start_send_beacons_rsl
#define ieee80211_stop_scan		ieee80211_stop_scan_rsl
#define ieee80211_send_probe_requests	ieee80211_send_probe_requests_rsl
#define ieee80211_softmac_scan_syncro	ieee80211_softmac_scan_syncro_rsl
#define ieee80211_start_scan_syncro	ieee80211_start_scan_syncro_rsl
#define ieee80211_wx_get_essid		ieee80211_wx_get_essid_rsl
#define ieee80211_wx_set_essid		ieee80211_wx_set_essid_rsl
#define ieee80211_wx_set_rate		ieee80211_wx_set_rate_rsl
#define ieee80211_wx_get_rate		ieee80211_wx_get_rate_rsl
#define ieee80211_wx_set_wap		ieee80211_wx_set_wap_rsl
#define ieee80211_wx_get_wap		ieee80211_wx_get_wap_rsl
#define ieee80211_wx_set_mode		ieee80211_wx_set_mode_rsl
#define ieee80211_wx_get_mode		ieee80211_wx_get_mode_rsl
#define ieee80211_wx_set_scan		ieee80211_wx_set_scan_rsl
#define ieee80211_wx_get_freq		ieee80211_wx_get_freq_rsl
#define ieee80211_wx_set_freq		ieee80211_wx_set_freq_rsl
#define ieee80211_wx_set_rawtx		ieee80211_wx_set_rawtx_rsl
#define ieee80211_wx_get_name		ieee80211_wx_get_name_rsl
#define ieee80211_wx_set_power		ieee80211_wx_set_power_rsl
#define ieee80211_wx_get_power		ieee80211_wx_get_power_rsl
#define ieee80211_wlan_frequencies	ieee80211_wlan_frequencies_rsl
#define ieee80211_wx_set_rts		ieee80211_wx_set_rts_rsl
#define ieee80211_wx_get_rts		ieee80211_wx_get_rts_rsl
#define ieee80211_txb_free		ieee80211_txb_free_rsl
#define ieee80211_wx_set_gen_ie		ieee80211_wx_set_gen_ie_rsl
#define ieee80211_wx_get_scan		ieee80211_wx_get_scan_rsl
#define ieee80211_wx_set_encode		ieee80211_wx_set_encode_rsl
#define ieee80211_wx_get_encode		ieee80211_wx_get_encode_rsl
#if WIRELESS_EXT >= 18
#define ieee80211_wx_set_mlme		ieee80211_wx_set_mlme_rsl
#define ieee80211_wx_set_auth		ieee80211_wx_set_auth_rsl
#define ieee80211_wx_set_encode_ext	ieee80211_wx_set_encode_ext_rsl
#define ieee80211_wx_get_encode_ext	ieee80211_wx_get_encode_ext_rsl
typedef struct ieee_param ieee_param;
#if WIRELESS_EXT < 17
#define IW_QUAL_QUAL_INVALID   0x10
#define IW_QUAL_LEVEL_INVALID  0x20
#define IW_QUAL_NOISE_INVALID  0x40
#define IW_QUAL_QUAL_UPDATED   0x1
#define IW_QUAL_LEVEL_UPDATED  0x2
#define IW_QUAL_NOISE_UPDATED  0x4
#define MSECS(t) msecs_to_jiffies(t)
#define msleep_interruptible_rsl  msleep_interruptible
#define IEEE80211_DATA_LEN		2304
#define IEEE80211_1ADDR_LEN 10
#define IEEE80211_2ADDR_LEN 16
#define IEEE80211_3ADDR_LEN 24
#define IEEE80211_4ADDR_LEN 30
#define IEEE80211_FCS_LEN    4
#define IEEE80211_HLEN                  (IEEE80211_4ADDR_LEN)
#define IEEE80211_FRAME_LEN             (IEEE80211_DATA_LEN + IEEE80211_HLEN)
#define IEEE80211_MGMT_HDR_LEN 24
#define IEEE80211_DATA_HDR3_LEN 24
#define IEEE80211_DATA_HDR4_LEN 30
#define MIN_FRAG_THRESHOLD     256U
#define MAX_FRAG_THRESHOLD     2346U
#define IEEE80211_FCTL_VERS		0x0003
#define IEEE80211_FCTL_FTYPE		0x000c
#define IEEE80211_FCTL_STYPE		0x00f0
#define IEEE80211_FCTL_FRAMETYPE	0x00fc
#define IEEE80211_FCTL_TODS		0x0100
#define IEEE80211_FCTL_FROMDS		0x0200
#define IEEE80211_FCTL_DSTODS		0x0300
#define IEEE80211_FCTL_MOREFRAGS	0x0400
#define IEEE80211_FCTL_RETRY		0x0800
#define IEEE80211_FCTL_PM		0x1000
#define IEEE80211_FCTL_MOREDATA		0x2000
#define IEEE80211_FCTL_WEP		0x4000
#define IEEE80211_FCTL_ORDER		0x8000
#define IEEE80211_FTYPE_MGMT		0x0000
#define IEEE80211_FTYPE_CTL		0x0004
#define IEEE80211_FTYPE_DATA		0x0008
#define IEEE80211_STYPE_ASSOC_REQ	0x0000
#define IEEE80211_STYPE_ASSOC_RESP 	0x0010
#define IEEE80211_STYPE_REASSOC_REQ	0x0020
#define IEEE80211_STYPE_REASSOC_RESP	0x0030
#define IEEE80211_STYPE_PROBE_REQ	0x0040
#define IEEE80211_STYPE_PROBE_RESP	0x0050
#define IEEE80211_STYPE_BEACON		0x0080
#define IEEE80211_STYPE_ATIM		0x0090
#define IEEE80211_STYPE_DISASSOC	0x00A0
#define IEEE80211_STYPE_AUTH		0x00B0
#define IEEE80211_STYPE_DEAUTH		0x00C0
#define IEEE80211_STYPE_MANAGE_ACT	0x00D0
#define IEEE80211_STYPE_PSPOLL		0x00A0
#define IEEE80211_STYPE_RTS		0x00B0
#define IEEE80211_STYPE_CTS		0x00C0
#define IEEE80211_STYPE_ACK		0x00D0
#define IEEE80211_STYPE_CFEND		0x00E0
#define IEEE80211_STYPE_CFENDACK	0x00F0
#define IEEE80211_STYPE_BLOCKACK   0x0094
#define IEEE80211_STYPE_DATA		0x0000
#define IEEE80211_STYPE_DATA_CFACK	0x0010
#define IEEE80211_STYPE_DATA_CFPOLL	0x0020
#define IEEE80211_STYPE_DATA_CFACKPOLL	0x0030
#define IEEE80211_STYPE_NULLFUNC	0x0040
#define IEEE80211_STYPE_CFACK		0x0050
#define IEEE80211_STYPE_CFPOLL		0x0060
#define IEEE80211_STYPE_CFACKPOLL	0x0070
#define IEEE80211_STYPE_QOS_DATA	0x0080
#define IEEE80211_STYPE_QOS_NULL	0x00C0
#define IEEE80211_SCTL_FRAG		0x000F
#define IEEE80211_SCTL_SEQ		0xFFF0
#define IEEE80211_QCTL_TID              0x000F
#define	FC_QOS_BIT					BIT7
#define IsDataFrame(pdu)			( ((pdu[0] & 0x0C)==0x08) ? true : false )
#define	IsLegacyDataFrame(pdu)	(IsDataFrame(pdu) && (!(pdu[0]&FC_QOS_BIT)) )
#define IsQoSDataFrame(pframe)  ((*(u16*)pframe&(IEEE80211_STYPE_QOS_DATA|IEEE80211_FTYPE_DATA)) == (IEEE80211_STYPE_QOS_DATA|IEEE80211_FTYPE_DATA))
#define Frame_Order(pframe)     (*(u16*)pframe&IEEE80211_FCTL_ORDER)
#define SN_LESS(a, b)		(((a-b)&0x800)!=0)
#define SN_EQUAL(a, b)	(a == b)
#define MAX_DEV_ADDR_SIZE 8
typedef enum _ACT_CATEGORY ACT_CATEGORY, *PACT_CATEGORY;
typedef enum _TS_ACTION TS_ACTION, *PTS_ACTION;
typedef enum _BA_ACTION BA_ACTION, *PBA_ACTION;
typedef enum _InitialGainOpTypeInitialGainOpType;
#define CONFIG_IEEE80211_DEBUG
extern u32 ieee80211_debug_level;
#define IEEE80211_DEBUG(level, fmt, args...) \
do  while (0)
#define IEEE80211_DEBUG_DATA(level, data, datalen)	\
do while (0)
#define IEEE80211_DEBUG(level, fmt, args...) do  while (0)
#define IEEE80211_DEBUG_DATA(level, data, datalen) do  while(0)
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
#define IEEE80211_DL_HT		   (1<<10)
#define IEEE80211_DL_BA		   (1<<11)
#define IEEE80211_DL_TS		   (1<<12)
#define IEEE80211_DL_QOS           (1<<13)
#define IEEE80211_DL_REORDER	   (1<<14)
#define IEEE80211_DL_IOT	   (1<<15)
#define IEEE80211_DL_IPS	   (1<<16)
#define IEEE80211_DL_TRACE	   (1<<29)
#define IEEE80211_DL_DATA	   (1<<30)
#define IEEE80211_DL_ERR	   (1<<31)
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
#define IEEE80211_DEBUG_QOS(f, a...)  IEEE80211_DEBUG(IEEE80211_DL_QOS, f, ## a)
#define MAX_STR_LEN     64
#define PRINTABLE(_ch)  (_ch>'!' && _ch<'~')
#define IEEE80211_PRINT_STR(_Comp, _TitleString, _Ptr, _Len)                            	\
if((_Comp) & level)   							\
#define IEEE80211_PRINT_STR(_Comp, _TitleString, _Ptr, _Len)  do  while (0)
#define WIRELESS_SPY
#define ETH_P_PAE 0x888E
#define ETH_P_PREAUTH 0x88C7
#define ETH_P_80211_RAW (ETH_P_ECONET + 1)
#define P80211_OUI_LEN 3
struct ieee80211_snap_hdr  __attribute__ ((packed));
#define SNAP_SIZE sizeof(struct ieee80211_snap_hdr)
#define WLAN_FC_GET_VERS(fc) ((fc) & IEEE80211_FCTL_VERS)
#define WLAN_FC_GET_TYPE(fc) ((fc) & IEEE80211_FCTL_FTYPE)
#define WLAN_FC_GET_STYPE(fc) ((fc) & IEEE80211_FCTL_STYPE)
#define WLAN_FC_GET_FRAMETYPE(fc) ((fc) & IEEE80211_FCTL_FRAMETYPE)
#define WLAN_GET_SEQ_FRAG(seq) ((seq) & IEEE80211_SCTL_FRAG)
#define WLAN_GET_SEQ_SEQ(seq)  (((seq) & IEEE80211_SCTL_SEQ) >> 4)
#define WLAN_AUTH_OPEN 0
#define WLAN_AUTH_SHARED_KEY 1
#define WLAN_AUTH_LEAP 2
#define WLAN_AUTH_CHALLENGE_LEN 128
#define WLAN_CAPABILITY_BSS (1<<0)
#define WLAN_CAPABILITY_IBSS (1<<1)
#define WLAN_CAPABILITY_CF_POLLABLE (1<<2)
#define WLAN_CAPABILITY_CF_POLL_REQUEST (1<<3)
#define WLAN_CAPABILITY_PRIVACY (1<<4)
#define WLAN_CAPABILITY_SHORT_PREAMBLE (1<<5)
#define WLAN_CAPABILITY_PBCC (1<<6)
#define WLAN_CAPABILITY_CHANNEL_AGILITY (1<<7)
#define WLAN_CAPABILITY_SPECTRUM_MGMT (1<<8)
#define WLAN_CAPABILITY_QOS (1<<9)
#define WLAN_CAPABILITY_SHORT_SLOT (1<<10)
#define WLAN_CAPABILITY_DSSS_OFDM (1<<13)
#define WLAN_ERP_NON_ERP_PRESENT (1<<0)
#define WLAN_ERP_USE_PROTECTION (1<<1)
#define WLAN_ERP_BARKER_PREAMBLE (1<<2)
enum ieee80211_statuscode ;
enum ieee80211_reasoncode ;
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
#define IEEE80211_CCK_RATE_1MB			0x02
#define IEEE80211_CCK_RATE_2MB			0x04
#define IEEE80211_CCK_RATE_5MB			0x0B
#define IEEE80211_CCK_RATE_11MB			0x16
#define IEEE80211_OFDM_RATE_LEN 		8
#define IEEE80211_OFDM_RATE_6MB			0x0C
#define IEEE80211_OFDM_RATE_9MB			0x12
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
#define IEEE80211_CCK_RATES_MASK		0x0000000F
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
#define IEEE80211_NUM_CCK_RATES		    4
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
#define SEC_ENCRYPT       (1<<9)
#define SEC_LEVEL_0      0
#define SEC_LEVEL_1      1
#define SEC_LEVEL_2      2
#define SEC_LEVEL_2_CKIP 3
#define SEC_LEVEL_3      4
#define SEC_ALG_NONE            0
#define SEC_ALG_WEP             1
#define SEC_ALG_TKIP            2
#define SEC_ALG_CCMP            3
#define WEP_KEYS 		4
#define WEP_KEY_LEN		13
#define SCM_KEY_LEN             32
#define SCM_TEMPORAL_KEY_LENGTH 16
struct ieee80211_security  __attribute__ ((packed));
enum ieee80211_mfie ;
struct ieee80211_hdr  __attribute__ ((packed));
struct ieee80211_hdr_1addr  __attribute__ ((packed));
struct ieee80211_hdr_2addr  __attribute__ ((packed));
struct ieee80211_hdr_3addr  __attribute__ ((packed));
struct ieee80211_hdr_4addr  __attribute__ ((packed));
struct ieee80211_hdr_3addrqos  __attribute__ ((packed));
struct ieee80211_hdr_4addrqos  __attribute__ ((packed));
struct ieee80211_info_element  __attribute__ ((packed));
struct ieee80211_authentication  __attribute__ ((packed));
struct ieee80211_disassoc  __attribute__ ((packed));
struct ieee80211_probe_request  __attribute__ ((packed));
struct ieee80211_probe_response  __attribute__ ((packed));
#define ieee80211_beacon ieee80211_probe_response
struct ieee80211_assoc_request_frame  __attribute__ ((packed));
struct ieee80211_reassoc_request_frame  __attribute__ ((packed));
struct ieee80211_assoc_response_frame  __attribute__ ((packed));
struct ieee80211_txb ;
#define MAX_TX_AGG_COUNT		  16
struct ieee80211_drv_agg_txb __attribute__((packed));
#define MAX_SUBFRAME_COUNT 		  64
struct ieee80211_rxb __attribute__((packed));
typedef union _frameqos frameqos,*pframeqos;
#define MAX_SWEEP_TAB_ENTRIES		  42
#define MAX_SWEEP_TAB_ENTRIES_PER_PACKET  7
#define MAX_RATES_LENGTH                  ((u8)12)
#define MAX_RATES_EX_LENGTH               ((u8)16)
#define MAX_NETWORK_COUNT                  128
#define MAX_CHANNEL_NUMBER                 161
#define IEEE80211_SOFTMAC_SCAN_TIME	   100
#define IEEE80211_SOFTMAC_ASSOC_RETRY_TIME (HZ * 2)
#define CRC_LENGTH                 4U
#define MAX_WPA_IE_LEN 64
#define NETWORK_EMPTY_ESSID (1<<0)
#define NETWORK_HAS_OFDM    (1<<1)
#define NETWORK_HAS_CCK     (1<<2)
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
struct ieee80211_qos_information_element  __attribute__ ((packed));
struct ieee80211_qos_ac_parameter  __attribute__ ((packed));
struct ieee80211_qos_parameter_info  __attribute__ ((packed));
struct ieee80211_qos_parameters  __attribute__ ((packed));
struct ieee80211_qos_data ;
struct ieee80211_tim_parameters  __attribute__ ((packed));
struct ieee80211_wmm_ac_param ;
struct ieee80211_wmm_ts_info  __attribute__ ((packed));
struct ieee80211_wmm_tspec_elem __attribute__((packed));
enum eap_type ;
static const char *eap_types[] = ;
static inline const char *eap_get_type(int type)
static inline u8 Frame_QoSTID(u8* buf)
struct eapol  __attribute__ ((packed));
struct ieee80211_softmac_stats;
#define BEACON_PROBE_SSID_ID_POSITION 12
struct ieee80211_info_element_hdr  __attribute__ ((packed));
#define IEEE80211_DEFAULT_TX_ESSID "Penguin"
#define IEEE80211_DEFAULT_BASIC_RATE 2
enum ;
#define MAX_SP_Len  (WMM_all_frame << 4)
#define IEEE80211_QOS_TID 0x0f
#define QOS_CTL_NOTCONTAIN_ACK (0x01 << 5)
#define IEEE80211_DTIM_MBCAST 4
#define IEEE80211_DTIM_UCAST 2
#define IEEE80211_DTIM_VALID 1
#define IEEE80211_DTIM_INVALID 0
#define IEEE80211_PS_DISABLED 0
#define IEEE80211_PS_UNICAST IEEE80211_DTIM_UCAST
#define IEEE80211_PS_MBCAST IEEE80211_DTIM_MBCAST
#undef WMM_Hang_8187
#define WME_AC_BK   0x00
#define WME_AC_BE   0x01
#define WME_AC_VI   0x02
#define WME_AC_VO   0x03
#define WME_ACI_MASK 0x03
#define WME_AIFSN_MASK 0x03
#define WME_AC_PRAM_LEN 16
#define MAX_RECEIVE_BUFFER_SIZE 9100
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
#define ETHERNET_HEADER_SIZE    14
struct	ether_header  __attribute__((packed));
#define	ETHERTYPE_PAE	0x888e
#define	ETHERTYPE_IP	0x0800
typedef struct _bss_htbss_ht, *pbss_ht;
typedef enum _erp_t erp_t;
struct ieee80211_network ;
enum ieee80211_state ;
#define DEFAULT_MAX_SCAN_AGE (15 * HZ)
#define DEFAULT_FTS 2346
#define CFG_IEEE80211_RESERVE_FCS (1<<0)
#define CFG_IEEE80211_COMPUTE_FCS (1<<1)
#define CFG_IEEE80211_RTS (1<<2)
#define IEEE80211_24GHZ_MIN_CHANNEL 1
#define IEEE80211_24GHZ_MAX_CHANNEL 14
#define IEEE80211_24GHZ_CHANNELS (IEEE80211_24GHZ_MAX_CHANNEL - \
IEEE80211_24GHZ_MIN_CHANNEL + 1)
#define IEEE80211_52GHZ_MIN_CHANNEL 34
#define IEEE80211_52GHZ_MAX_CHANNEL 165
#define IEEE80211_52GHZ_CHANNELS (IEEE80211_52GHZ_MAX_CHANNEL - \
IEEE80211_52GHZ_MIN_CHANNEL + 1)
typedef struct tx_pending_ttx_pending_t;
typedef struct _bandwidth_autoswitch
bandwidth_autoswitch,*pbandwidth_autoswitch;
#define REORDER_WIN_SIZE	128
#define REORDER_ENTRY_NUM	128
typedef struct _RX_REORDER_ENTRY
RX_REORDER_ENTRY, *PRX_REORDER_ENTRY;
typedef enum _Fsync_StateFsync_State;
typedef	enum _RT_PS_MODE
RT_PS_MODE;
typedef enum _IPS_CALLBACK_FUNCION
IPS_CALLBACK_FUNCION;
typedef enum _RT_JOIN_ACTIONRT_JOIN_ACTION;
typedef struct _IbssParmsIbssParms, *PIbssParms;
#define MAX_NUM_RATES	264
typedef	enum _RT_RF_POWER_STATE
RT_RF_POWER_STATE;
typedef struct _RT_POWER_SAVE_CONTROL
RT_POWER_SAVE_CONTROL,*PRT_POWER_SAVE_CONTROL;
typedef u32 RT_RF_CHANGE_SOURCE;
#define RF_CHANGE_BY_SW BIT31
#define RF_CHANGE_BY_HW BIT30
#define RF_CHANGE_BY_PS BIT29
#define RF_CHANGE_BY_IPS BIT28
#define RF_CHANGE_BY_INIT	0
typedef enum
country_code_type_t;
#define RT_MAX_LD_SLOT_NUM	10
typedef struct _RT_LINK_DETECT_TRT_LINK_DETECT_T, *PRT_LINK_DETECT_T;
struct ieee80211_device ;
#define IEEE_A            (1<<0)
#define IEEE_B            (1<<1)
#define IEEE_G            (1<<2)
#define IEEE_N_24G 		  (1<<4)
#define	IEEE_N_5G		  (1<<5)
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
static inline u8 *ieee80211_get_payload(struct ieee80211_hdr *hdr)
static inline int ieee80211_is_ofdm_rate(u8 rate)
static inline int ieee80211_is_cck_rate(u8 rate)
extern void free_ieee80211(struct net_device *dev);
extern struct net_device *alloc_ieee80211(int sizeof_priv);
extern int ieee80211_set_encryption(struct ieee80211_device *ieee);
extern int ieee80211_encrypt_fragment(
struct ieee80211_device *ieee,
struct sk_buff *frag,
int hdr_len);
extern int ieee80211_xmit(struct sk_buff *skb,
struct net_device *dev);
extern void ieee80211_txb_free(struct ieee80211_txb *);
extern int ieee80211_rx(struct ieee80211_device *ieee, struct sk_buff *skb,
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
#if WIRELESS_EXT >= 18
extern int ieee80211_wx_get_encode_ext(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data* wrqu, char *extra);
extern int ieee80211_wx_set_encode_ext(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data* wrqu, char *extra);
extern int ieee80211_wx_set_auth(struct ieee80211_device *ieee,
struct iw_request_info *info,
struct iw_param *data, char *extra);
extern int ieee80211_wx_set_mlme(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_set_gen_ie(struct ieee80211_device *ieee, u8 *ie, size_t len);
extern short ieee80211_is_54g(struct ieee80211_network net);
extern short ieee80211_is_shortslot(struct ieee80211_network net);
extern int ieee80211_rx_frame_softmac(struct ieee80211_device *ieee, struct sk_buff *skb,
struct ieee80211_rx_stats *rx_stats, u16 type,
u16 stype);
extern void ieee80211_softmac_new_net(struct ieee80211_device *ieee, struct ieee80211_network *net);
void SendDisassociation(struct ieee80211_device *ieee, u8* asSta, u8 asRsn);
extern void ieee80211_softmac_xmit(struct ieee80211_txb *txb, struct ieee80211_device *ieee);
extern void ieee80211_stop_send_beacons(struct ieee80211_device *ieee);
extern void notify_wx_assoc_event(struct ieee80211_device *ieee);
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
extern void ieee80211_wake_queue(struct ieee80211_device *ieee);
extern void ieee80211_stop_queue(struct ieee80211_device *ieee);
extern struct sk_buff *ieee80211_get_beacon(struct ieee80211_device *ieee);
extern void ieee80211_start_send_beacons(struct ieee80211_device *ieee);
extern void ieee80211_stop_send_beacons(struct ieee80211_device *ieee);
extern int ieee80211_wpa_supplicant_ioctl(struct ieee80211_device *ieee, struct iw_point *p);
extern void notify_wx_assoc_event(struct ieee80211_device *ieee);
extern void ieee80211_ps_tx_ack(struct ieee80211_device *ieee, short success);
extern void softmac_mgmt_xmit(struct sk_buff *skb, struct ieee80211_device *ieee);
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
extern int ieee80211_wx_set_rts(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
extern int ieee80211_wx_get_rts(struct ieee80211_device *ieee,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
#define MAX_RECEIVE_BUFFER_SIZE 9100
extern void HTDebugHTCapability(u8* CapIE, u8* TitleString );
extern void HTDebugHTInfo(u8*  InfoIE, u8* TitleString);
void HTSetConnectBwMode(struct ieee80211_device* ieee, HT_CHANNEL_WIDTH Bandwidth, HT_EXTCHNL_OFFSET    Offset);
extern void HTUpdateDefaultSetting(struct ieee80211_device* ieee);
extern void HTConstructCapabilityElement(struct ieee80211_device* ieee, u8* posHTCap, u8* len, u8 isEncrypt);
extern void HTConstructInfoElement(struct ieee80211_device* ieee, u8* posHTInfo, u8* len, u8 isEncrypt);
extern void HTConstructRT2RTAggElement(struct ieee80211_device* ieee, u8* posRT2RTAgg, u8* len);
extern void HTOnAssocRsp(struct ieee80211_device *ieee);
extern void HTInitializeHTInfo(struct ieee80211_device* ieee);
extern void HTInitializeBssDesc(PBSS_HT pBssHT);
extern void HTResetSelfAndSavePeerSetting(struct ieee80211_device* ieee, struct ieee80211_network * pNetwork);
extern void HTUpdateSelfAndPeerSetting(struct ieee80211_device* ieee,   struct ieee80211_network * pNetwork);
extern u8 HTGetHighestMCSRate(struct ieee80211_device* ieee, u8* pMCSRateSet, u8* pMCSFilter);
extern u8 MCS_FILTER_ALL[];
extern u16 MCS_DATA_RATE[2][2][77] ;
extern u8 HTCCheck(struct ieee80211_device* ieee, u8*   pFrame);
extern void HTResetIOTSetting(PRT_HIGH_THROUGHPUT  pHTInfo);
extern bool IsHTHalfNmodeAPs(struct ieee80211_device* ieee);
extern u16 HTHalfMcsToDataRate(struct ieee80211_device* ieee,  u8      nMcsRate);
extern u16 HTMcsToDataRate( struct ieee80211_device* ieee, u8 nMcsRate);
extern u16  TxCountToDataRate( struct ieee80211_device* ieee, u8 nDataRate);
extern int ieee80211_rx_ADDBAReq( struct ieee80211_device* ieee, struct sk_buff *skb);
extern int ieee80211_rx_ADDBARsp( struct ieee80211_device* ieee, struct sk_buff *skb);
extern int ieee80211_rx_DELBA(struct ieee80211_device* ieee,struct sk_buff *skb);
extern void TsInitAddBA( struct ieee80211_device* ieee, PTX_TS_RECORD   pTS, u8 Policy, u8 bOverwritePending);
extern void TsInitDelBA( struct ieee80211_device* ieee, PTS_COMMON_INFO pTsCommonInfo, TR_SELECT TxRxSelect);
extern void BaSetupTimeOut(unsigned long data);
extern void TxBaInactTimeout(unsigned long data);
extern void RxBaInactTimeout(unsigned long data);
extern void ResetBaEntry( PBA_RECORD pBA);
extern bool GetTs(
struct ieee80211_device*        ieee,
PTS_COMMON_INFO                 *ppTS,
u8*                             Addr,
u8                              TID,
TR_SELECT                       TxRxSelect,
bool                            bAddNewTs
);
extern void TSInitialize(struct ieee80211_device *ieee);
extern  void TsStartAddBaProcess(struct ieee80211_device* ieee, PTX_TS_RECORD   pTxTS);
extern void RemovePeerTS(struct ieee80211_device* ieee, u8* Addr);
extern void RemoveAllTS(struct ieee80211_device* ieee);
void ieee80211_softmac_scan_syncro(struct ieee80211_device *ieee);
extern const long ieee80211_wlan_frequencies[];
extern inline void ieee80211_increment_scans(struct ieee80211_device *ieee)
extern inline int ieee80211_get_scans(struct ieee80211_device *ieee)
static inline const char *escape_essid(const char *essid, u8 essid_len)
extern short check_nic_enough_desc(struct net_device *dev, int queue_index);
extern int ieee80211_data_xmit(struct sk_buff *skb, struct net_device *dev);
extern int ieee80211_parse_info_param(struct ieee80211_device *ieee,
struct ieee80211_info_element *info_element,
u16 length,
struct ieee80211_network *network,
struct ieee80211_rx_stats *stats);
void ieee80211_indicate_packets(struct ieee80211_device *ieee, struct ieee80211_rxb** prxbIndicateArray,u8  index);
#define RT_ASOC_RETRY_LIMIT	5
