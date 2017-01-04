#define __RTL_WIFI_H__
#define RF_CHANGE_BY_INIT			0
#define RF_CHANGE_BY_IPS			BIT(28)
#define RF_CHANGE_BY_PS				BIT(29)
#define RF_CHANGE_BY_HW				BIT(30)
#define RF_CHANGE_BY_SW				BIT(31)
#define IQK_ADDA_REG_NUM			16
#define IQK_MAC_REG_NUM				4
#define MAX_KEY_LEN				61
#define KEY_BUF_SIZE				5
#define AC0_BE					0
#define AC1_BK					1
#define AC2_VI					2
#define AC3_VO					3
#define AC_MAX					4
#define QOS_QUEUE_NUM				4
#define RTL_MAC80211_NUM_QUEUE			5
#define QBSS_LOAD_SIZE				5
#define MAX_WMMELE_LENGTH			64
#define TOTAL_CAM_ENTRY				32
#define RTL_SLOT_TIME_9				9
#define RTL_SLOT_TIME_20			20
#define ETH_P_PAE		0x888E
#define ETH_P_IP		0x0800
#define ETH_P_ARP		0x0806
#define SNAP_SIZE		6
#define PROTOC_TYPE_SIZE	2
#define MAC80211_3ADDR_LEN			24
#define MAC80211_4ADDR_LEN			30
#define CHANNEL_MAX_NUMBER	(14 + 24 + 21)
#define CHANNEL_GROUP_MAX	(3 + 9)
#define MAX_PG_GROUP			13
#define	CHANNEL_GROUP_MAX_2G		3
#define	CHANNEL_GROUP_IDX_5GL		3
#define	CHANNEL_GROUP_IDX_5GM		6
#define	CHANNEL_GROUP_IDX_5GH		9
#define	CHANNEL_GROUP_MAX_5G		9
#define CHANNEL_MAX_NUMBER_2G		14
#define AVG_THERMAL_NUM			8
#define MAX_TID_COUNT			9
#define FCS_LEN				4
#define EM_HDR_LEN			8
enum intf_type ;
enum radio_path ;
enum rt_eeprom_type ;
enum rtl_status ;
enum hardware_type ;
#define IS_HARDWARE_TYPE_8192SU(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8192SU)
#define IS_HARDWARE_TYPE_8192SE(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8192SE)
#define IS_HARDWARE_TYPE_8192CE(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8192CE)
#define IS_HARDWARE_TYPE_8192CU(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8192CU)
#define IS_HARDWARE_TYPE_8192DE(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8192DE)
#define IS_HARDWARE_TYPE_8192DU(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8192DU)
#define IS_HARDWARE_TYPE_8723E(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8723E)
#define IS_HARDWARE_TYPE_8723U(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8723U)
#define	IS_HARDWARE_TYPE_8192S(rtlhal)			\
(IS_HARDWARE_TYPE_8192SE(rtlhal) || IS_HARDWARE_TYPE_8192SU(rtlhal))
#define	IS_HARDWARE_TYPE_8192C(rtlhal)			\
(IS_HARDWARE_TYPE_8192CE(rtlhal) || IS_HARDWARE_TYPE_8192CU(rtlhal))
#define	IS_HARDWARE_TYPE_8192D(rtlhal)			\
(IS_HARDWARE_TYPE_8192DE(rtlhal) || IS_HARDWARE_TYPE_8192DU(rtlhal))
#define	IS_HARDWARE_TYPE_8723(rtlhal)			\
(IS_HARDWARE_TYPE_8723E(rtlhal) || IS_HARDWARE_TYPE_8723U(rtlhal))
#define IS_HARDWARE_TYPE_8723U(rtlhal)			\
(rtlhal->hw_type == HARDWARE_TYPE_RTL8723U)
enum scan_operation_backup_opt ;
enum rf_pwrstate ;
struct bb_reg_def ;
enum io_type ;
enum hw_variables ;
#define HWSET_MAX_SIZE				128
#define EFUSE_MAX_SECTION			16
enum _RT_MEDIA_STATUS ;
enum rt_oem_id ;
enum hw_descs ;
enum prime_sc ;
enum rf_type ;
enum ht_channel_width ;
enum rt_enc_alg ;
enum rtl_hal_state ;
enum rtl_var_map ;
enum _fw_ps_mode ;
enum rt_psmode ;
enum led_ctl_mode ;
enum rtl_led_pin ;
enum acm_method ;
enum macphy_mode ;
enum band_type ;
union aci_aifsn ;
enum wireless_mode ;
#define IS_WIRELESS_MODE_A(wirelessmode)	\
(wirelessmode == WIRELESS_MODE_A)
#define IS_WIRELESS_MODE_B(wirelessmode)	\
(wirelessmode == WIRELESS_MODE_B)
#define IS_WIRELESS_MODE_G(wirelessmode)	\
(wirelessmode == WIRELESS_MODE_G)
#define IS_WIRELESS_MODE_N_24G(wirelessmode)	\
(wirelessmode == WIRELESS_MODE_N_24G)
#define IS_WIRELESS_MODE_N_5G(wirelessmode)	\
(wirelessmode == WIRELESS_MODE_N_5G)
enum ratr_table_mode ;
enum rtl_link_state ;
enum act_category ;
enum ba_action ;
struct octet_string ;
struct rtl_hdr_3addr  __packed;
struct rtl_info_element  __packed;
struct rtl_probe_rsp  __packed;
struct rtl_led ;
struct rtl_led_ctl ;
struct rtl_qos_parameters  __packed;
struct rt_smooth_data ;
struct false_alarm_statistics ;
struct init_gain ;
struct wireless_stats ;
struct rate_adaptive ;
struct regd_pair_mapping ;
struct rtl_regulatory ;
struct rtl_rfkill ;
#define IQK_MATRIX_REG_NUM	8
#define IQK_MATRIX_SETTINGS_NUM	(1 + 24 + 21)
struct iqk_matrix_regs ;
struct phy_parameters ;
enum hw_param_tab_index ;
struct rtl_phy ;
#define MAX_TID_COUNT				9
#define RTL_AGG_STOP				0
#define RTL_AGG_PROGRESS			1
#define RTL_AGG_START				2
#define RTL_AGG_OPERATIONAL			3
#define RTL_AGG_OFF				0
#define RTL_AGG_ON				1
#define RTL_AGG_EMPTYING_HW_QUEUE_ADDBA		2
#define RTL_AGG_EMPTYING_HW_QUEUE_DELBA		3
struct rtl_ht_agg ;
struct rtl_tid_data ;
struct rtl_sta_info  __packed;
struct rtl_priv;
struct rtl_io ;
struct rtl_mac ;
struct rtl_hal ;
struct rtl_security ;
struct rtl_dm ;
#define	EFUSE_MAX_LOGICAL_SIZE			256
struct rtl_efuse ;
struct rtl_ps_ctl ;
struct rtl_stats ;
struct rt_link_detect ;
struct rtl_tcb_desc ;
struct rtl_hal_ops ;
struct rtl_intf_ops ;
struct rtl_mod_params ;
struct rtl_hal_usbint_cfg ;
struct rtl_hal_cfg ;
struct rtl_locks ;
struct rtl_works ;
struct rtl_debug ;
struct rtl_priv ;
#define rtl_priv(hw)		(((struct rtl_priv *)(hw)->priv))
#define rtl_mac(rtlpriv)	(&((rtlpriv)->mac80211))
#define rtl_hal(rtlpriv)	(&((rtlpriv)->rtlhal))
#define rtl_efuse(rtlpriv)	(&((rtlpriv)->efuse))
#define rtl_psc(rtlpriv)	(&((rtlpriv)->psc))
enum bt_ant_num ;
enum bt_co_type ;
enum bt_cur_state ;
enum bt_service_type ;
enum bt_radio_shared ;
struct bt_coexist_info ;
#define EF1BYTE(_val)		\
((u8)(_val))
#define EF2BYTE(_val)		\
(le16_to_cpu(_val))
#define EF4BYTE(_val)		\
(le32_to_cpu(_val))
#define READEF1BYTE(_ptr)	\
EF1BYTE(*((u8 *)(_ptr)))
#define READEF2BYTE(_ptr)	\
EF2BYTE(*((u16 *)(_ptr)))
#define READEF4BYTE(_ptr)	\
EF4BYTE(*((u32 *)(_ptr)))
#define WRITEEF1BYTE(_ptr, _val)	\
(*((u8 *)(_ptr))) = EF1BYTE(_val)
#define WRITEEF2BYTE(_ptr, _val)	\
(*((u16 *)(_ptr))) = EF2BYTE(_val)
#define WRITEEF4BYTE(_ptr, _val)	\
(*((u16 *)(_ptr))) = EF2BYTE(_val)
#define BIT_LEN_MASK_32(__bitlen)	 \
(0xFFFFFFFF >> (32 - (__bitlen)))
#define BIT_LEN_MASK_16(__bitlen)	 \
(0xFFFF >> (16 - (__bitlen)))
#define BIT_LEN_MASK_8(__bitlen) \
(0xFF >> (8 - (__bitlen)))
#define BIT_OFFSET_LEN_MASK_32(__bitoffset, __bitlen) \
(BIT_LEN_MASK_32(__bitlen) << (__bitoffset))
#define BIT_OFFSET_LEN_MASK_16(__bitoffset, __bitlen) \
(BIT_LEN_MASK_16(__bitlen) << (__bitoffset))
#define BIT_OFFSET_LEN_MASK_8(__bitoffset, __bitlen) \
(BIT_LEN_MASK_8(__bitlen) << (__bitoffset))
#define LE_P4BYTE_TO_HOST_4BYTE(__pstart) \
(EF4BYTE(*((u32 *)(__pstart))))
#define LE_P2BYTE_TO_HOST_2BYTE(__pstart) \
(EF2BYTE(*((u16 *)(__pstart))))
#define LE_P1BYTE_TO_HOST_1BYTE(__pstart) \
(EF1BYTE(*((u8 *)(__pstart))))
#define LE_BITS_TO_4BYTE(__pstart, __bitoffset, __bitlen) \
( \
(LE_P4BYTE_TO_HOST_4BYTE(__pstart) >> (__bitoffset))  & \
BIT_LEN_MASK_32(__bitlen) \
)
#define LE_BITS_TO_2BYTE(__pstart, __bitoffset, __bitlen) \
( \
(LE_P2BYTE_TO_HOST_2BYTE(__pstart) >> (__bitoffset)) & \
BIT_LEN_MASK_16(__bitlen) \
)
#define LE_BITS_TO_1BYTE(__pstart, __bitoffset, __bitlen) \
( \
(LE_P1BYTE_TO_HOST_1BYTE(__pstart) >> (__bitoffset)) & \
BIT_LEN_MASK_8(__bitlen) \
)
#define LE_BITS_CLEARED_TO_4BYTE(__pstart, __bitoffset, __bitlen) \
( \
LE_P4BYTE_TO_HOST_4BYTE(__pstart)  & \
(~BIT_OFFSET_LEN_MASK_32(__bitoffset, __bitlen)) \
)
#define LE_BITS_CLEARED_TO_2BYTE(__pstart, __bitoffset, __bitlen) \
( \
LE_P2BYTE_TO_HOST_2BYTE(__pstart) & \
(~BIT_OFFSET_LEN_MASK_16(__bitoffset, __bitlen)) \
)
#define LE_BITS_CLEARED_TO_1BYTE(__pstart, __bitoffset, __bitlen) \
( \
LE_P1BYTE_TO_HOST_1BYTE(__pstart) & \
(~BIT_OFFSET_LEN_MASK_8(__bitoffset, __bitlen)) \
)
#define SET_BITS_TO_LE_4BYTE(__pstart, __bitoffset, __bitlen, __val) \
*((u32 *)(__pstart)) = EF4BYTE \
( \
LE_BITS_CLEARED_TO_4BYTE(__pstart, __bitoffset, __bitlen) | \
((((u32)__val) & BIT_LEN_MASK_32(__bitlen)) << (__bitoffset)) \
);
#define SET_BITS_TO_LE_2BYTE(__pstart, __bitoffset, __bitlen, __val) \
*((u16 *)(__pstart)) = EF2BYTE \
( \
LE_BITS_CLEARED_TO_2BYTE(__pstart, __bitoffset, __bitlen) | \
((((u16)__val) & BIT_LEN_MASK_16(__bitlen)) << (__bitoffset)) \
);
#define SET_BITS_TO_LE_1BYTE(__pstart, __bitoffset, __bitlen, __val) \
*((u8 *)(__pstart)) = EF1BYTE \
( \
LE_BITS_CLEARED_TO_1BYTE(__pstart, __bitoffset, __bitlen) | \
((((u8)__val) & BIT_LEN_MASK_8(__bitlen)) << (__bitoffset)) \
);
#define	N_BYTE_ALIGMENT(__value, __aligment) ((__aligment == 1) ? \
(__value) : (((__value + __aligment - 1) / __aligment) * __aligment))
#define byte(x, n) ((x >> (8 * n)) & 0xff)
#define packet_get_type(_packet) (EF1BYTE((_packet).octet[0]) & 0xFC)
#define RTL_WATCH_DOG_TIME	2000
#define MSECS(t)		msecs_to_jiffies(t)
#define WLAN_FC_GET_VERS(fc)	(le16_to_cpu(fc) & IEEE80211_FCTL_VERS)
#define WLAN_FC_GET_TYPE(fc)	(le16_to_cpu(fc) & IEEE80211_FCTL_FTYPE)
#define WLAN_FC_GET_STYPE(fc)	(le16_to_cpu(fc) & IEEE80211_FCTL_STYPE)
#define WLAN_FC_MORE_DATA(fc)	(le16_to_cpu(fc) & IEEE80211_FCTL_MOREDATA)
#define SEQ_TO_SN(seq)		(((seq) & IEEE80211_SCTL_SEQ) >> 4)
#define SN_TO_SEQ(ssn)		(((ssn) << 4) & IEEE80211_SCTL_SEQ)
#define MAX_SN			((IEEE80211_SCTL_SEQ) >> 4)
#define	RT_RF_OFF_LEVL_ASPM		BIT(0)
#define	RT_RF_OFF_LEVL_CLK_REQ		BIT(1)
#define	RT_RF_OFF_LEVL_PCI_D3		BIT(2)
#define	RT_RF_OFF_LEVL_HALT_NIC		BIT(3)
#define	RT_RF_OFF_LEVL_FREE_FW		BIT(4)
#define	RT_RF_OFF_LEVL_FW_32K		BIT(5)
#define	RT_RF_PS_LEVEL_ALWAYS_ASPM	BIT(6)
#define	RT_PS_LEVEL_ASPM		BIT(7)
#define	RT_RF_LPS_DISALBE_2R		BIT(30)
#define	RT_RF_LPS_LEVEL_ASPM		BIT(31)
#define	RT_IN_PS_LEVEL(ppsc, _ps_flg)		\
((ppsc->cur_ps_level & _ps_flg) ? true : false)
#define	RT_CLEAR_PS_LEVEL(ppsc, _ps_flg)	\
(ppsc->cur_ps_level &= (~(_ps_flg)))
#define	RT_SET_PS_LEVEL(ppsc, _ps_flg)		\
(ppsc->cur_ps_level |= _ps_flg)
#define container_of_dwork_rtl(x, y, z) \
container_of(container_of(x, struct delayed_work, work), y, z)
#define FILL_OCTET_STRING(_os, _octet, _len)	\
(_os).octet = (u8 *)(_octet);		\
(_os).length = (_len);
#define CP_MACADDR(des, src)	\
((des)[0] = (src)[0], (des)[1] = (src)[1],\
(des)[2] = (src)[2], (des)[3] = (src)[3],\
(des)[4] = (src)[4], (des)[5] = (src)[5])
static inline u8 rtl_read_byte(struct rtl_priv *rtlpriv, u32 addr)
static inline u16 rtl_read_word(struct rtl_priv *rtlpriv, u32 addr)
static inline u32 rtl_read_dword(struct rtl_priv *rtlpriv, u32 addr)
static inline void rtl_write_byte(struct rtl_priv *rtlpriv, u32 addr, u8 val8)
static inline void rtl_write_word(struct rtl_priv *rtlpriv, u32 addr, u16 val16)
static inline void rtl_write_dword(struct rtl_priv *rtlpriv,
u32 addr, u32 val32)
static inline u32 rtl_get_bbreg(struct ieee80211_hw *hw,
u32 regaddr, u32 bitmask)
static inline void rtl_set_bbreg(struct ieee80211_hw *hw, u32 regaddr,
u32 bitmask, u32 data)
static inline u32 rtl_get_rfreg(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 regaddr,
u32 bitmask)
static inline void rtl_set_rfreg(struct ieee80211_hw *hw,
enum radio_path rfpath, u32 regaddr,
u32 bitmask, u32 data)
static inline bool is_hal_stop(struct rtl_hal *rtlhal)
static inline void set_hal_start(struct rtl_hal *rtlhal)
static inline void set_hal_stop(struct rtl_hal *rtlhal)
static inline u8 get_rf_type(struct rtl_phy *rtlphy)
static inline struct ieee80211_hdr *rtl_get_hdr(struct sk_buff *skb)
static inline __le16 rtl_get_fc(struct sk_buff *skb)
static inline u16 rtl_get_tid_h(struct ieee80211_hdr *hdr)
static inline u16 rtl_get_tid(struct sk_buff *skb)
static inline struct ieee80211_sta *get_sta(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
u8 *bssid)
