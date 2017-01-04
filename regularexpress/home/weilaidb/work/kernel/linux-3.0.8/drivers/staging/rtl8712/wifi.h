#define _WIFI_H_
#undef BIT
#define BIT(x)	(1 << (x))
#define WLAN_ETHHDR_LEN		14
#define WLAN_ETHADDR_LEN	6
#define WLAN_IEEE_OUI_LEN	3
#define WLAN_ADDR_LEN		6
#define WLAN_CRC_LEN		4
#define WLAN_BSSID_LEN		6
#define WLAN_BSS_TS_LEN		8
#define WLAN_HDR_A3_LEN		24
#define WLAN_HDR_A4_LEN		30
#define WLAN_HDR_A3_QOS_LEN	26
#define WLAN_HDR_A4_QOS_LEN	32
#define WLAN_SSID_MAXLEN	32
#define WLAN_DATA_MAXLEN	2312
#define WLAN_A3_PN_OFFSET	24
#define WLAN_A4_PN_OFFSET	30
#define WLAN_MIN_ETHFRM_LEN	60
#define WLAN_MAX_ETHFRM_LEN	1514
#define WLAN_ETHHDR_LEN		14
#define P80211CAPTURE_VERSION	0x80211001
enum WIFI_FRAME_TYPE ;
enum WIFI_FRAME_SUBTYPE ;
enum WIFI_REASON_CODE	;
enum WIFI_STATUS_CODE ;
enum WIFI_REG_DOMAIN ;
#define _TO_DS_		BIT(8)
#define _FROM_DS_	BIT(9)
#define _MORE_FRAG_	BIT(10)
#define _RETRY_		BIT(11)
#define _PWRMGT_	BIT(12)
#define _MORE_DATA_	BIT(13)
#define _PRIVACY_	BIT(14)
#define _ORDER_		BIT(15)
#define SetToDs(pbuf)	\
do	 while (0)
#define GetToDs(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_TO_DS_)) != 0)
#define ClearToDs(pbuf)	\
do	 while (0)
#define SetFrDs(pbuf)	\
do	 while (0)
#define GetFrDs(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_FROM_DS_)) != 0)
#define ClearFrDs(pbuf)	\
do	 while (0)
#define get_tofr_ds(pframe)	((GetToDs(pframe) << 1) | GetFrDs(pframe))
#define SetMFrag(pbuf)	\
do	 while (0)
#define GetMFrag(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_MORE_FRAG_)) != 0)
#define ClearMFrag(pbuf)	\
do	 while (0)
#define SetRetry(pbuf)	\
do	 while (0)
#define GetRetry(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_RETRY_)) != 0)
#define ClearRetry(pbuf)	\
do	 while (0)
#define SetPwrMgt(pbuf)	\
do	 while (0)
#define GetPwrMgt(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_PWRMGT_)) != 0)
#define ClearPwrMgt(pbuf)	\
do	 while (0)
#define SetMData(pbuf)	\
do	 while (0)
#define GetMData(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_MORE_DATA_)) != 0)
#define ClearMData(pbuf)	\
do	 while (0)
#define SetPrivacy(pbuf)	\
do	 while (0)
#define GetPrivacy(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_PRIVACY_)) != 0)
#define ClearPrivacy(pbuf)	\
do	 while (0)
#define GetOrder(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_ORDER_)) != 0)
#define GetFrameType(pbuf)	(le16_to_cpu(*(unsigned short *)(pbuf)) & \
(BIT(3) | BIT(2)))
#define SetFrameType(pbuf, type)	\
do  while (0)
#define GetFrameSubType(pbuf)	(cpu_to_le16(*(unsigned short *)(pbuf)) & \
(BIT(7) | BIT(6) | BIT(5) | BIT(4) | BIT(3) | \
BIT(2)))
#define SetFrameSubType(pbuf, type) \
do  while (0)
#define GetSequence(pbuf)	(cpu_to_le16(*(unsigned short *)\
((addr_t)(pbuf) + 22)) >> 4)
#define GetFragNum(pbuf)	(cpu_to_le16(*(unsigned short *)((addr_t)\
(pbuf) + 22)) & 0x0f)
#define GetTupleCache(pbuf)	(cpu_to_le16(*(unsigned short *)\
((addr_t)(pbuf) + 22)))
#define SetFragNum(pbuf, num) \
do  while (0)
#define SetSeqNum(pbuf, num) \
do  while (0)
#define SetDuration(pbuf, dur) \
do  while (0)
#define SetPriority(pbuf, tid)	\
do	 while (0)
#define GetPriority(pbuf)	((le16_to_cpu(*(unsigned short *)(pbuf))) & 0xf)
#define SetAckpolicy(pbuf, ack)	\
do	 while (0)
#define GetAckpolicy(pbuf) (((le16_to_cpu(*(unsigned short *)pbuf)) >> 5) & 0x3)
#define GetAMsdu(pbuf) (((le16_to_cpu(*(unsigned short *)pbuf)) >> 7) & 0x1)
#define SetAMsdu(pbuf, amsdu)	\
do	 while (0)
#define GetAid(pbuf)	(cpu_to_le16(*(unsigned short *)((addr_t)(pbuf) + 2)) \
& 0x3fff)
#define GetTid(pbuf)	(cpu_to_le16(*(unsigned short *)((addr_t)(pbuf) + \
(((GetToDs(pbuf) << 1)|GetFrDs(pbuf)) == 3 ? \
30 : 24))) & 0x000f)
#define GetAddr1Ptr(pbuf)	((unsigned char *)((addr_t)(pbuf) + 4))
#define GetAddr2Ptr(pbuf)	((unsigned char *)((addr_t)(pbuf) + 10))
#define GetAddr3Ptr(pbuf)	((unsigned char *)((addr_t)(pbuf) + 16))
#define GetAddr4Ptr(pbuf)	((unsigned char *)((addr_t)(pbuf) + 24))
static inline int IS_MCAST(unsigned char *da)
static inline unsigned char *get_da(unsigned char *pframe)
static inline unsigned char *get_sa(unsigned char *pframe)
static inline unsigned char *get_hdr_bssid(unsigned char *pframe)
#define _RESERVED_FRAME_TYPE_	0
#define _SKB_FRAME_TYPE_	2
#define _PRE_ALLOCMEM_		1
#define _PRE_ALLOCHDR_		3
#define _PRE_ALLOCLLCHDR_	4
#define _PRE_ALLOCICVHDR_	5
#define _PRE_ALLOCMICHDR_	6
#define _SIFSTIME_		((priv->pmib->BssType.net_work_type & \
WIRELESS_11A) ? 16 : 10)
#define _ACKCTSLNG_		14
#define _CRCLNG_		4
#define _ASOCREQ_IE_OFFSET_	4
#define	_ASOCRSP_IE_OFFSET_	6
#define _REASOCREQ_IE_OFFSET_	10
#define _REASOCRSP_IE_OFFSET_	6
#define _PROBEREQ_IE_OFFSET_	0
#define	_PROBERSP_IE_OFFSET_	12
#define _AUTH_IE_OFFSET_	6
#define _DEAUTH_IE_OFFSET_	0
#define _BEACON_IE_OFFSET_	12
#define _FIXED_IE_LENGTH_	_BEACON_IE_OFFSET_
#define _SSID_IE_		0
#define _SUPPORTEDRATES_IE_	1
#define _DSSET_IE_		3
#define _TIM_IE_		5
#define _IBSS_PARA_IE_		6
#define _CHLGETXT_IE_		16
#define _RSN_IE_2_		48`
#define _SSN_IE_1_		221
#define _ERPINFO_IE_		42
#define _EXT_SUPPORTEDRATES_IE_	50
#define _HT_CAPABILITY_IE_	45
#define _HT_EXTRA_INFO_IE_	61
#define _HT_ADD_INFO_IE_	61
#define _VENDOR_SPECIFIC_IE_	221
#define	_RESERVED47_		47
#define _AUTH_ALGM_NUM_			2
#define _AUTH_SEQ_NUM_			2
#define _BEACON_ITERVAL_		2
#define _CAPABILITY_			2
#define _CURRENT_APADDR_		6
#define _LISTEN_INTERVAL_		2
#define _RSON_CODE_				2
#define _ASOC_ID_				2
#define _STATUS_CODE_			2
#define _TIMESTAMP_				8
#define AUTH_ODD_TO				0
#define AUTH_EVEN_TO			1
#define WLAN_ETHCONV_ENCAP		1
#define WLAN_ETHCONV_RFC1042	2
#define WLAN_ETHCONV_8021h		3
#define cap_ESS BIT(0)
#define cap_IBSS BIT(1)
#define cap_CFPollable BIT(2)
#define cap_CFRequest BIT(3)
#define cap_Privacy BIT(4)
#define cap_ShortPremble BIT(5)
#define _IEEE8021X_MGT_			1
#define _IEEE8021X_PSK_			2
#define _WMM_IE_Length_				7
#define _WMM_Para_Element_Length_		24
#define IEEE80211_ADDBA_PARAM_POLICY_MASK 0x0002
#define IEEE80211_ADDBA_PARAM_TID_MASK 0x003C
#define IEEE80211_ADDBA_PARAM_BUF_SIZE_MASK 0xFFA0
#define IEEE80211_DELBA_PARAM_TID_MASK 0xF000
#define IEEE80211_DELBA_PARAM_INITIATOR_MASK 0x0800
#define SetOrderBit(pbuf)	\
do	 while (0)
#define GetOrderBit(pbuf)	(((*(unsigned short *)(pbuf)) & \
le16_to_cpu(_ORDER_)) != 0)
struct ieee80211_bar  __attribute__((packed));
#define IEEE80211_BAR_CTRL_ACK_POLICY_NORMAL     0x0000
#define IEEE80211_BAR_CTRL_CBMTID_COMPRESSED_BA  0x0004
struct ieee80211_ht_cap  __attribute__ ((packed));
struct ieee80211_ht_addt_info  __attribute__ ((packed));
#define IEEE80211_HT_CAP_SUP_WIDTH		0x0002
#define IEEE80211_HT_CAP_SM_PS			0x000C
#define IEEE80211_HT_CAP_GRN_FLD		0x0010
#define IEEE80211_HT_CAP_SGI_20			0x0020
#define IEEE80211_HT_CAP_SGI_40			0x0040
#define IEEE80211_HT_CAP_TX_STBC			0x0080
#define IEEE80211_HT_CAP_DELAY_BA		0x0400
#define IEEE80211_HT_CAP_MAX_AMSDU		0x0800
#define IEEE80211_HT_CAP_DSSSCCK40		0x1000
#define IEEE80211_HT_CAP_AMPDU_FACTOR		0x03
#define IEEE80211_HT_CAP_AMPDU_DENSITY		0x1C
#define IEEE80211_SUPP_MCS_SET_UEQM		4
#define IEEE80211_HT_CAP_MAX_STREAMS		4
#define IEEE80211_SUPP_MCS_SET_LEN		10
#define IEEE80211_HT_CAP_MCS_TX_DEFINED		0x01
#define IEEE80211_HT_CAP_MCS_TX_RX_DIFF		0x02
#define IEEE80211_HT_CAP_MCS_TX_STREAMS		0x0C
#define IEEE80211_HT_CAP_MCS_TX_UEQM		0x10
#define IEEE80211_HT_IE_CHA_SEC_OFFSET		0x03
#define IEEE80211_HT_IE_CHA_SEC_NONE		0x00
#define IEEE80211_HT_IE_CHA_SEC_ABOVE		0x01
#define IEEE80211_HT_IE_CHA_SEC_BELOW		0x03
#define IEEE80211_HT_IE_CHA_WIDTH		0x04
#define IEEE80211_HT_IE_HT_PROTECTION		0x0003
#define IEEE80211_HT_IE_NON_GF_STA_PRSNT	0x0004
#define IEEE80211_HT_IE_NON_HT_STA_PRSNT	0x0010
#define IEEE80211_ADDBA_PARAM_POLICY_MASK 0x0002
#define IEEE80211_ADDBA_PARAM_TID_MASK 0x003C
#define IEEE80211_ADDBA_PARAM_BUF_SIZE_MASK 0xFFA0
#define IEEE80211_DELBA_PARAM_TID_MASK 0xF000
#define IEEE80211_DELBA_PARAM_INITIATOR_MASK 0x0800
#define IEEE80211_MIN_AMPDU_BUF 0x8
#define IEEE80211_MAX_AMPDU_BUF 0x40
#define WLAN_HT_CAP_SM_PS_STATIC		0
#define WLAN_HT_CAP_SM_PS_DYNAMIC	1
#define WLAN_HT_CAP_SM_PS_INVALID	2
#define WLAN_HT_CAP_SM_PS_DISABLED	3
