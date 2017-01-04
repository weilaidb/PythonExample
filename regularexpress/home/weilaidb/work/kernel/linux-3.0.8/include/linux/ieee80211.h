#define LINUX_IEEE80211_H
#define FCS_LEN 4
#define IEEE80211_FCTL_VERS		0x0003
#define IEEE80211_FCTL_FTYPE		0x000c
#define IEEE80211_FCTL_STYPE		0x00f0
#define IEEE80211_FCTL_TODS		0x0100
#define IEEE80211_FCTL_FROMDS		0x0200
#define IEEE80211_FCTL_MOREFRAGS	0x0400
#define IEEE80211_FCTL_RETRY		0x0800
#define IEEE80211_FCTL_PM		0x1000
#define IEEE80211_FCTL_MOREDATA		0x2000
#define IEEE80211_FCTL_PROTECTED	0x4000
#define IEEE80211_FCTL_ORDER		0x8000
#define IEEE80211_SCTL_FRAG		0x000F
#define IEEE80211_SCTL_SEQ		0xFFF0
#define IEEE80211_FTYPE_MGMT		0x0000
#define IEEE80211_FTYPE_CTL		0x0004
#define IEEE80211_FTYPE_DATA		0x0008
#define IEEE80211_STYPE_ASSOC_REQ	0x0000
#define IEEE80211_STYPE_ASSOC_RESP	0x0010
#define IEEE80211_STYPE_REASSOC_REQ	0x0020
#define IEEE80211_STYPE_REASSOC_RESP	0x0030
#define IEEE80211_STYPE_PROBE_REQ	0x0040
#define IEEE80211_STYPE_PROBE_RESP	0x0050
#define IEEE80211_STYPE_BEACON		0x0080
#define IEEE80211_STYPE_ATIM		0x0090
#define IEEE80211_STYPE_DISASSOC	0x00A0
#define IEEE80211_STYPE_AUTH		0x00B0
#define IEEE80211_STYPE_DEAUTH		0x00C0
#define IEEE80211_STYPE_ACTION		0x00D0
#define IEEE80211_STYPE_BACK_REQ	0x0080
#define IEEE80211_STYPE_BACK		0x0090
#define IEEE80211_STYPE_PSPOLL		0x00A0
#define IEEE80211_STYPE_RTS		0x00B0
#define IEEE80211_STYPE_CTS		0x00C0
#define IEEE80211_STYPE_ACK		0x00D0
#define IEEE80211_STYPE_CFEND		0x00E0
#define IEEE80211_STYPE_CFENDACK	0x00F0
#define IEEE80211_STYPE_DATA			0x0000
#define IEEE80211_STYPE_DATA_CFACK		0x0010
#define IEEE80211_STYPE_DATA_CFPOLL		0x0020
#define IEEE80211_STYPE_DATA_CFACKPOLL		0x0030
#define IEEE80211_STYPE_NULLFUNC		0x0040
#define IEEE80211_STYPE_CFACK			0x0050
#define IEEE80211_STYPE_CFPOLL			0x0060
#define IEEE80211_STYPE_CFACKPOLL		0x0070
#define IEEE80211_STYPE_QOS_DATA		0x0080
#define IEEE80211_STYPE_QOS_DATA_CFACK		0x0090
#define IEEE80211_STYPE_QOS_DATA_CFPOLL		0x00A0
#define IEEE80211_STYPE_QOS_DATA_CFACKPOLL	0x00B0
#define IEEE80211_STYPE_QOS_NULLFUNC		0x00C0
#define IEEE80211_STYPE_QOS_CFACK		0x00D0
#define IEEE80211_STYPE_QOS_CFPOLL		0x00E0
#define IEEE80211_STYPE_QOS_CFACKPOLL		0x00F0
#define IEEE80211_MAX_FRAG_THRESHOLD	2352
#define IEEE80211_MAX_RTS_THRESHOLD	2353
#define IEEE80211_MAX_AID		2007
#define IEEE80211_MAX_TIM_LEN		251
#define IEEE80211_MAX_DATA_LEN		2304
#define IEEE80211_MAX_FRAME_LEN		2352
#define IEEE80211_MAX_SSID_LEN		32
#define IEEE80211_MAX_MESH_ID_LEN	32
#define IEEE80211_QOS_CTL_LEN		2
#define IEEE80211_QOS_CTL_TID_MASK	0x000F
#define IEEE80211_QOS_CTL_TAG1D_MASK	0x0007
#define IEEE80211_WMM_IE_AP_QOSINFO_UAPSD	(1<<7)
#define IEEE80211_WMM_IE_AP_QOSINFO_PARAM_SET_CNT_MASK	0x0f
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_VO	(1<<0)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_VI	(1<<1)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_BK	(1<<2)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_BE	(1<<3)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_MASK	0x0f
#define IEEE80211_WMM_IE_STA_QOSINFO_SP_ALL	0x00
#define IEEE80211_WMM_IE_STA_QOSINFO_SP_2	0x01
#define IEEE80211_WMM_IE_STA_QOSINFO_SP_4	0x02
#define IEEE80211_WMM_IE_STA_QOSINFO_SP_6	0x03
#define IEEE80211_WMM_IE_STA_QOSINFO_SP_MASK	0x03
#define IEEE80211_WMM_IE_STA_QOSINFO_SP_SHIFT	5
#define IEEE80211_HT_CTL_LEN		4
struct ieee80211_hdr  __attribute__ ((packed));
struct ieee80211_hdr_3addr  __attribute__ ((packed));
struct ieee80211_qos_hdr  __attribute__ ((packed));
static inline int ieee80211_has_tods(__le16 fc)
static inline int ieee80211_has_fromds(__le16 fc)
static inline int ieee80211_has_a4(__le16 fc)
static inline int ieee80211_has_morefrags(__le16 fc)
static inline int ieee80211_has_retry(__le16 fc)
static inline int ieee80211_has_pm(__le16 fc)
static inline int ieee80211_has_moredata(__le16 fc)
static inline int ieee80211_has_protected(__le16 fc)
static inline int ieee80211_has_order(__le16 fc)
static inline int ieee80211_is_mgmt(__le16 fc)
static inline int ieee80211_is_ctl(__le16 fc)
static inline int ieee80211_is_data(__le16 fc)
static inline int ieee80211_is_data_qos(__le16 fc)
static inline int ieee80211_is_data_present(__le16 fc)
static inline int ieee80211_is_assoc_req(__le16 fc)
static inline int ieee80211_is_assoc_resp(__le16 fc)
static inline int ieee80211_is_reassoc_req(__le16 fc)
static inline int ieee80211_is_reassoc_resp(__le16 fc)
static inline int ieee80211_is_probe_req(__le16 fc)
static inline int ieee80211_is_probe_resp(__le16 fc)
static inline int ieee80211_is_beacon(__le16 fc)
static inline int ieee80211_is_atim(__le16 fc)
static inline int ieee80211_is_disassoc(__le16 fc)
static inline int ieee80211_is_auth(__le16 fc)
static inline int ieee80211_is_deauth(__le16 fc)
static inline int ieee80211_is_action(__le16 fc)
static inline int ieee80211_is_back_req(__le16 fc)
static inline int ieee80211_is_back(__le16 fc)
static inline int ieee80211_is_pspoll(__le16 fc)
static inline int ieee80211_is_rts(__le16 fc)
static inline int ieee80211_is_cts(__le16 fc)
static inline int ieee80211_is_ack(__le16 fc)
static inline int ieee80211_is_cfend(__le16 fc)
static inline int ieee80211_is_cfendack(__le16 fc)
static inline int ieee80211_is_nullfunc(__le16 fc)
static inline int ieee80211_is_qos_nullfunc(__le16 fc)
struct ieee80211s_hdr  __attribute__ ((packed));
#define MESH_FLAGS_AE_A4 	0x1
#define MESH_FLAGS_AE_A5_A6	0x2
#define MESH_FLAGS_AE		0x3
#define MESH_FLAGS_PS_DEEP	0x4
struct ieee80211_quiet_ie  __attribute__ ((packed));
struct ieee80211_msrment_ie  __attribute__ ((packed));
struct ieee80211_channel_sw_ie  __attribute__ ((packed));
struct ieee80211_tim_ie  __attribute__ ((packed));
struct ieee80211_meshconf_ie  __attribute__ ((packed));
struct ieee80211_rann_ie  __attribute__ ((packed));
#define WLAN_SA_QUERY_TR_ID_LEN 2
struct ieee80211_mgmt  __attribute__ ((packed));
#define IEEE80211_MIN_ACTION_SIZE offsetof(struct ieee80211_mgmt, u.action.u)
struct ieee80211_mmie  __attribute__ ((packed));
struct ieee80211_rts  __attribute__ ((packed));
struct ieee80211_cts  __attribute__ ((packed));
struct ieee80211_pspoll  __attribute__ ((packed));
struct ieee80211_bar  __attribute__((packed));
#define IEEE80211_BAR_CTRL_ACK_POLICY_NORMAL     0x0000
#define IEEE80211_BAR_CTRL_CBMTID_COMPRESSED_BA  0x0004
#define IEEE80211_HT_MCS_MASK_LEN		10
struct ieee80211_mcs_info  __attribute__((packed));
#define IEEE80211_HT_MCS_RX_HIGHEST_MASK	0x3ff
#define IEEE80211_HT_MCS_TX_DEFINED		0x01
#define IEEE80211_HT_MCS_TX_RX_DIFF		0x02
#define IEEE80211_HT_MCS_TX_MAX_STREAMS_MASK	0x0C
#define IEEE80211_HT_MCS_TX_MAX_STREAMS_SHIFT	2
#define		IEEE80211_HT_MCS_TX_MAX_STREAMS	4
#define IEEE80211_HT_MCS_TX_UNEQUAL_MODULATION	0x10
#define IEEE80211_HT_MCS_UNEQUAL_MODULATION_START 33
#define IEEE80211_HT_MCS_UNEQUAL_MODULATION_START_BYTE \
(IEEE80211_HT_MCS_UNEQUAL_MODULATION_START / 8)
struct ieee80211_ht_cap  __attribute__ ((packed));
#define IEEE80211_HT_CAP_LDPC_CODING		0x0001
#define IEEE80211_HT_CAP_SUP_WIDTH_20_40	0x0002
#define IEEE80211_HT_CAP_SM_PS			0x000C
#define		IEEE80211_HT_CAP_SM_PS_SHIFT	2
#define IEEE80211_HT_CAP_GRN_FLD		0x0010
#define IEEE80211_HT_CAP_SGI_20			0x0020
#define IEEE80211_HT_CAP_SGI_40			0x0040
#define IEEE80211_HT_CAP_TX_STBC		0x0080
#define IEEE80211_HT_CAP_RX_STBC		0x0300
#define		IEEE80211_HT_CAP_RX_STBC_SHIFT	8
#define IEEE80211_HT_CAP_DELAY_BA		0x0400
#define IEEE80211_HT_CAP_MAX_AMSDU		0x0800
#define IEEE80211_HT_CAP_DSSSCCK40		0x1000
#define IEEE80211_HT_CAP_RESERVED		0x2000
#define IEEE80211_HT_CAP_40MHZ_INTOLERANT	0x4000
#define IEEE80211_HT_CAP_LSIG_TXOP_PROT		0x8000
#define IEEE80211_HT_EXT_CAP_PCO		0x0001
#define IEEE80211_HT_EXT_CAP_PCO_TIME		0x0006
#define		IEEE80211_HT_EXT_CAP_PCO_TIME_SHIFT	1
#define IEEE80211_HT_EXT_CAP_MCS_FB		0x0300
#define		IEEE80211_HT_EXT_CAP_MCS_FB_SHIFT	8
#define IEEE80211_HT_EXT_CAP_HTC_SUP		0x0400
#define IEEE80211_HT_EXT_CAP_RD_RESPONDER	0x0800
#define IEEE80211_HT_AMPDU_PARM_FACTOR		0x03
#define IEEE80211_HT_AMPDU_PARM_DENSITY		0x1C
#define		IEEE80211_HT_AMPDU_PARM_DENSITY_SHIFT	2
enum ieee80211_max_ampdu_length_exp ;
#define IEEE80211_HT_MAX_AMPDU_FACTOR 13
enum ieee80211_min_mpdu_spacing ;
struct ieee80211_ht_info  __attribute__ ((packed));
#define IEEE80211_HT_PARAM_CHA_SEC_OFFSET		0x03
#define		IEEE80211_HT_PARAM_CHA_SEC_NONE		0x00
#define		IEEE80211_HT_PARAM_CHA_SEC_ABOVE	0x01
#define		IEEE80211_HT_PARAM_CHA_SEC_BELOW	0x03
#define IEEE80211_HT_PARAM_CHAN_WIDTH_ANY		0x04
#define IEEE80211_HT_PARAM_RIFS_MODE			0x08
#define IEEE80211_HT_PARAM_SPSMP_SUPPORT		0x10
#define IEEE80211_HT_PARAM_SERV_INTERVAL_GRAN		0xE0
#define IEEE80211_HT_OP_MODE_PROTECTION			0x0003
#define		IEEE80211_HT_OP_MODE_PROTECTION_NONE		0
#define		IEEE80211_HT_OP_MODE_PROTECTION_NONMEMBER	1
#define		IEEE80211_HT_OP_MODE_PROTECTION_20MHZ		2
#define		IEEE80211_HT_OP_MODE_PROTECTION_NONHT_MIXED	3
#define IEEE80211_HT_OP_MODE_NON_GF_STA_PRSNT		0x0004
#define IEEE80211_HT_OP_MODE_NON_HT_STA_PRSNT		0x0010
#define IEEE80211_HT_STBC_PARAM_DUAL_BEACON		0x0040
#define IEEE80211_HT_STBC_PARAM_DUAL_CTS_PROT		0x0080
#define IEEE80211_HT_STBC_PARAM_STBC_BEACON		0x0100
#define IEEE80211_HT_STBC_PARAM_LSIG_TXOP_FULLPROT	0x0200
#define IEEE80211_HT_STBC_PARAM_PCO_ACTIVE		0x0400
#define IEEE80211_HT_STBC_PARAM_PCO_PHASE		0x0800
#define IEEE80211_ADDBA_PARAM_POLICY_MASK 0x0002
#define IEEE80211_ADDBA_PARAM_TID_MASK 0x003C
#define IEEE80211_ADDBA_PARAM_BUF_SIZE_MASK 0xFFC0
#define IEEE80211_DELBA_PARAM_TID_MASK 0xF000
#define IEEE80211_DELBA_PARAM_INITIATOR_MASK 0x0800
#define IEEE80211_MIN_AMPDU_BUF 0x8
#define IEEE80211_MAX_AMPDU_BUF 0x40
#define WLAN_HT_CAP_SM_PS_STATIC	0
#define WLAN_HT_CAP_SM_PS_DYNAMIC	1
#define WLAN_HT_CAP_SM_PS_INVALID	2
#define WLAN_HT_CAP_SM_PS_DISABLED	3
#define WLAN_HT_SMPS_CONTROL_DISABLED	0
#define WLAN_HT_SMPS_CONTROL_STATIC	1
#define WLAN_HT_SMPS_CONTROL_DYNAMIC	3
#define WLAN_AUTH_OPEN 0
#define WLAN_AUTH_SHARED_KEY 1
#define WLAN_AUTH_FT 2
#define WLAN_AUTH_SAE 3
#define WLAN_AUTH_LEAP 128
#define WLAN_AUTH_CHALLENGE_LEN 128
#define WLAN_CAPABILITY_ESS		(1<<0)
#define WLAN_CAPABILITY_IBSS		(1<<1)
#define WLAN_CAPABILITY_IS_STA_BSS(cap)	\
(!((cap) & (WLAN_CAPABILITY_ESS | WLAN_CAPABILITY_IBSS)))
#define WLAN_CAPABILITY_CF_POLLABLE	(1<<2)
#define WLAN_CAPABILITY_CF_POLL_REQUEST	(1<<3)
#define WLAN_CAPABILITY_PRIVACY		(1<<4)
#define WLAN_CAPABILITY_SHORT_PREAMBLE	(1<<5)
#define WLAN_CAPABILITY_PBCC		(1<<6)
#define WLAN_CAPABILITY_CHANNEL_AGILITY	(1<<7)
#define WLAN_CAPABILITY_SPECTRUM_MGMT	(1<<8)
#define WLAN_CAPABILITY_QOS		(1<<9)
#define WLAN_CAPABILITY_SHORT_SLOT_TIME	(1<<10)
#define WLAN_CAPABILITY_DSSS_OFDM	(1<<13)
#define IEEE80211_SPCT_MSR_RPRT_MODE_LATE	(1<<0)
#define IEEE80211_SPCT_MSR_RPRT_MODE_INCAPABLE	(1<<1)
#define IEEE80211_SPCT_MSR_RPRT_MODE_REFUSED	(1<<2)
#define IEEE80211_SPCT_MSR_RPRT_TYPE_BASIC	0
#define IEEE80211_SPCT_MSR_RPRT_TYPE_CCA	1
#define IEEE80211_SPCT_MSR_RPRT_TYPE_RPI	2
#define WLAN_ERP_NON_ERP_PRESENT (1<<0)
#define WLAN_ERP_USE_PROTECTION (1<<1)
#define WLAN_ERP_BARKER_PREAMBLE (1<<2)
enum ;
enum ieee80211_statuscode ;
enum ieee80211_reasoncode ;
enum ieee80211_eid ;
enum ieee80211_category ;
enum ieee80211_spectrum_mgmt_actioncode ;
enum ieee80211_ht_actioncode ;
enum ieee80211_key_len ;
enum ;
enum ;
#define IEEE80211_COUNTRY_IE_MIN_LEN	6
#define IEEE80211_COUNTRY_STRING_LEN	3
#define IEEE80211_COUNTRY_EXTENSION_ID 201
struct ieee80211_country_ie_triplet  __attribute__ ((packed));
enum ieee80211_timeout_interval_type ;
enum ieee80211_back_actioncode ;
enum ieee80211_back_parties ;
enum ieee80211_sa_query_action ;
#define IEEE80211_QOS_CONTROL_A_MSDU_PRESENT 0x0080
#define WLAN_CIPHER_SUITE_USE_GROUP	0x000FAC00
#define WLAN_CIPHER_SUITE_WEP40		0x000FAC01
#define WLAN_CIPHER_SUITE_TKIP		0x000FAC02
#define WLAN_CIPHER_SUITE_CCMP		0x000FAC04
#define WLAN_CIPHER_SUITE_WEP104	0x000FAC05
#define WLAN_CIPHER_SUITE_AES_CMAC	0x000FAC06
#define WLAN_AKM_SUITE_8021X		0x000FAC01
#define WLAN_AKM_SUITE_PSK		0x000FAC02
#define WLAN_AKM_SUITE_SAE			0x000FAC08
#define WLAN_AKM_SUITE_FT_OVER_SAE	0x000FAC09
#define WLAN_MAX_KEY_LEN		32
#define WLAN_PMKID_LEN			16
static inline u8 *ieee80211_get_qos_ctl(struct ieee80211_hdr *hdr)
static inline u8 *ieee80211_get_SA(struct ieee80211_hdr *hdr)
static inline u8 *ieee80211_get_DA(struct ieee80211_hdr *hdr)
static inline bool ieee80211_is_robust_mgmt_frame(struct ieee80211_hdr *hdr)
static inline int ieee80211_fhss_chan_to_freq(int channel)
static inline int ieee80211_freq_to_fhss_chan(int freq)
static inline int ieee80211_dsss_chan_to_freq(int channel)
static inline int ieee80211_freq_to_dsss_chan(int freq)
#define ieee80211_hr_chan_to_freq(chan) ieee80211_dsss_chan_to_freq(chan)
#define ieee80211_freq_to_hr_chan(freq) ieee80211_freq_to_dsss_chan(freq)
#define ieee80211_erp_chan_to_freq(chan) ieee80211_hr_chan_to_freq(chan)
#define ieee80211_freq_to_erp_chan(freq) ieee80211_freq_to_hr_chan(freq)
static inline int ieee80211_ofdm_chan_to_freq(int s_freq, int channel)
static inline int ieee80211_freq_to_ofdm_chan(int s_freq, int freq)
static inline unsigned long ieee80211_tu_to_usec(unsigned long tu)
static inline bool ieee80211_check_tim(struct ieee80211_tim_ie *tim,
u8 tim_len, u16 aid)
