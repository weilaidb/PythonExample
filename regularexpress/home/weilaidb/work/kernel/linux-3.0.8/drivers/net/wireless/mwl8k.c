#define MWL8K_DESC	"Marvell TOPDOG(R) 802.11 Wireless Network Driver"
#define MWL8K_NAME	KBUILD_MODNAME
#define MWL8K_VERSION	"0.12"
static unsigned ap_mode_default;
module_param(ap_mode_default, bool, 0);
MODULE_PARM_DESC(ap_mode_default,
"Set to 1 to make ap mode the default instead of sta mode");
#define MWL8K_HIU_GEN_PTR			0x00000c10
#define  MWL8K_MODE_STA				 0x0000005a
#define  MWL8K_MODE_AP				 0x000000a5
#define MWL8K_HIU_INT_CODE			0x00000c14
#define  MWL8K_FWSTA_READY			 0xf0f1f2f4
#define  MWL8K_FWAP_READY			 0xf1f2f4a5
#define  MWL8K_INT_CODE_CMD_FINISHED		 0x00000005
#define MWL8K_HIU_SCRATCH			0x00000c40
#define MWL8K_HIU_H2A_INTERRUPT_EVENTS		0x00000c18
#define MWL8K_HIU_H2A_INTERRUPT_STATUS		0x00000c1c
#define MWL8K_HIU_H2A_INTERRUPT_MASK		0x00000c20
#define MWL8K_HIU_H2A_INTERRUPT_CLEAR_SEL	0x00000c24
#define MWL8K_HIU_H2A_INTERRUPT_STATUS_MASK	0x00000c28
#define  MWL8K_H2A_INT_DUMMY			 (1 << 20)
#define  MWL8K_H2A_INT_RESET			 (1 << 15)
#define  MWL8K_H2A_INT_DOORBELL			 (1 << 1)
#define  MWL8K_H2A_INT_PPA_READY		 (1 << 0)
#define MWL8K_HIU_A2H_INTERRUPT_EVENTS		0x00000c2c
#define MWL8K_HIU_A2H_INTERRUPT_STATUS		0x00000c30
#define MWL8K_HIU_A2H_INTERRUPT_MASK		0x00000c34
#define MWL8K_HIU_A2H_INTERRUPT_CLEAR_SEL	0x00000c38
#define MWL8K_HIU_A2H_INTERRUPT_STATUS_MASK	0x00000c3c
#define  MWL8K_A2H_INT_DUMMY			 (1 << 20)
#define  MWL8K_A2H_INT_BA_WATCHDOG		 (1 << 14)
#define  MWL8K_A2H_INT_CHNL_SWITCHED		 (1 << 11)
#define  MWL8K_A2H_INT_QUEUE_EMPTY		 (1 << 10)
#define  MWL8K_A2H_INT_RADAR_DETECT		 (1 << 7)
#define  MWL8K_A2H_INT_RADIO_ON			 (1 << 6)
#define  MWL8K_A2H_INT_RADIO_OFF		 (1 << 5)
#define  MWL8K_A2H_INT_MAC_EVENT		 (1 << 3)
#define  MWL8K_A2H_INT_OPC_DONE			 (1 << 2)
#define  MWL8K_A2H_INT_RX_READY			 (1 << 1)
#define  MWL8K_A2H_INT_TX_DONE			 (1 << 0)
#define	MWL8K_HW_TIMER_REGISTER			0x0000a600
#define MWL8K_A2H_EVENTS	(MWL8K_A2H_INT_DUMMY | \
MWL8K_A2H_INT_CHNL_SWITCHED | \
MWL8K_A2H_INT_QUEUE_EMPTY | \
MWL8K_A2H_INT_RADAR_DETECT | \
MWL8K_A2H_INT_RADIO_ON | \
MWL8K_A2H_INT_RADIO_OFF | \
MWL8K_A2H_INT_MAC_EVENT | \
MWL8K_A2H_INT_OPC_DONE | \
MWL8K_A2H_INT_RX_READY | \
MWL8K_A2H_INT_TX_DONE | \
MWL8K_A2H_INT_BA_WATCHDOG)
#define MWL8K_RX_QUEUES		1
#define MWL8K_TX_WMM_QUEUES	4
#define MWL8K_MAX_AMPDU_QUEUES	8
#define MWL8K_MAX_TX_QUEUES	(MWL8K_TX_WMM_QUEUES + MWL8K_MAX_AMPDU_QUEUES)
#define mwl8k_tx_queues(priv)	(MWL8K_TX_WMM_QUEUES + (priv)->num_ampdu_queues)
struct rxd_ops ;
struct mwl8k_device_info ;
struct mwl8k_rx_queue ;
struct mwl8k_tx_queue ;
enum ;
struct mwl8k_ampdu_stream ;
struct mwl8k_priv ;
#define MAX_WEP_KEY_LEN         13
#define NUM_WEP_KEYS            4
struct mwl8k_vif ;
#define MWL8K_VIF(_vif) ((struct mwl8k_vif *)&((_vif)->drv_priv))
#define IEEE80211_KEY_CONF(_u8) ((struct ieee80211_key_conf *)(_u8))
struct tx_traffic_info ;
#define MWL8K_MAX_TID 8
struct mwl8k_sta ;
#define MWL8K_STA(_sta) ((struct mwl8k_sta *)&((_sta)->drv_priv))
static const struct ieee80211_channel mwl8k_channels_24[] = ;
static const struct ieee80211_rate mwl8k_rates_24[] = ;
static const struct ieee80211_channel mwl8k_channels_50[] = ;
static const struct ieee80211_rate mwl8k_rates_50[] = ;
#define MWL8K_CMD_GET			0x0000
#define MWL8K_CMD_SET			0x0001
#define MWL8K_CMD_SET_LIST		0x0002
#define MWL8K_CMD_CODE_DNLD		0x0001
#define MWL8K_CMD_GET_HW_SPEC		0x0003
#define MWL8K_CMD_SET_HW_SPEC		0x0004
#define MWL8K_CMD_MAC_MULTICAST_ADR	0x0010
#define MWL8K_CMD_GET_STAT		0x0014
#define MWL8K_CMD_RADIO_CONTROL		0x001c
#define MWL8K_CMD_RF_TX_POWER		0x001e
#define MWL8K_CMD_TX_POWER		0x001f
#define MWL8K_CMD_RF_ANTENNA		0x0020
#define MWL8K_CMD_SET_BEACON		0x0100
#define MWL8K_CMD_SET_PRE_SCAN		0x0107
#define MWL8K_CMD_SET_POST_SCAN		0x0108
#define MWL8K_CMD_SET_RF_CHANNEL	0x010a
#define MWL8K_CMD_SET_AID		0x010d
#define MWL8K_CMD_SET_RATE		0x0110
#define MWL8K_CMD_SET_FINALIZE_JOIN	0x0111
#define MWL8K_CMD_RTS_THRESHOLD		0x0113
#define MWL8K_CMD_SET_SLOT		0x0114
#define MWL8K_CMD_SET_EDCA_PARAMS	0x0115
#define MWL8K_CMD_SET_WMM_MODE		0x0123
#define MWL8K_CMD_MIMO_CONFIG		0x0125
#define MWL8K_CMD_USE_FIXED_RATE	0x0126
#define MWL8K_CMD_ENABLE_SNIFFER	0x0150
#define MWL8K_CMD_SET_MAC_ADDR		0x0202
#define MWL8K_CMD_SET_RATEADAPT_MODE	0x0203
#define MWL8K_CMD_GET_WATCHDOG_BITMAP	0x0205
#define MWL8K_CMD_BSS_START		0x1100
#define MWL8K_CMD_SET_NEW_STN		0x1111
#define MWL8K_CMD_UPDATE_ENCRYPTION	0x1122
#define MWL8K_CMD_UPDATE_STADB		0x1123
#define MWL8K_CMD_BASTREAM		0x1125
static const char *mwl8k_cmd_name(__le16 cmd, char *buf, int bufsize)
static void mwl8k_hw_reset(struct mwl8k_priv *priv)
static void mwl8k_release_fw(const struct firmware **fw)
static void mwl8k_release_firmware(struct mwl8k_priv *priv)
static void mwl8k_fw_state_machine(const struct firmware *fw, void *context);
enum ;
static int mwl8k_request_fw(struct mwl8k_priv *priv,
const char *fname, const struct firmware **fw,
bool nowait)
static int mwl8k_request_firmware(struct mwl8k_priv *priv, char *fw_image,
bool nowait)
struct mwl8k_cmd_pkt  __packed;
static int
mwl8k_send_fw_load_cmd(struct mwl8k_priv *priv, void *data, int length)
static int mwl8k_load_fw_image(struct mwl8k_priv *priv,
const u8 *data, size_t length)
static int mwl8k_feed_fw_image(struct mwl8k_priv *priv,
const u8 *data, size_t length)
static int mwl8k_load_firmware(struct ieee80211_hw *hw)
struct mwl8k_dma_data  __packed;
static inline void mwl8k_remove_dma_header(struct sk_buff *skb, __le16 qos)
#define REDUCED_TX_HEADROOM	8
static void
mwl8k_add_dma_header(struct mwl8k_priv *priv, struct sk_buff *skb,
int head_pad, int tail_pad)
static void mwl8k_encapsulate_tx_frame(struct mwl8k_priv *priv,
struct sk_buff *skb)
struct mwl8k_rxd_8366_ap  __packed;
#define MWL8K_8366_AP_RATE_INFO_MCS_FORMAT	0x80
#define MWL8K_8366_AP_RATE_INFO_40MHZ		0x40
#define MWL8K_8366_AP_RATE_INFO_RATEID(x)	((x) & 0x3f)
#define MWL8K_8366_AP_RX_CTRL_OWNED_BY_HOST	0x80
#define MWL8K_8366_AP_RXSTAT_DECRYPT_ERR_MASK		0x80
#define MWL8K_8366_AP_RXSTAT_GENERAL_DECRYPT_ERR	0xFF
#define MWL8K_8366_AP_RXSTAT_TKIP_DECRYPT_MIC_ERR	0x02
#define MWL8K_8366_AP_RXSTAT_WEP_DECRYPT_ICV_ERR	0x04
#define MWL8K_8366_AP_RXSTAT_TKIP_DECRYPT_ICV_ERR	0x08
static void mwl8k_rxd_8366_ap_init(void *_rxd, dma_addr_t next_dma_addr)
static void mwl8k_rxd_8366_ap_refill(void *_rxd, dma_addr_t addr, int len)
static int
mwl8k_rxd_8366_ap_process(void *_rxd, struct ieee80211_rx_status *status,
__le16 *qos, s8 *noise)
static struct rxd_ops rxd_8366_ap_ops = ;
struct mwl8k_rxd_sta  __packed;
#define MWL8K_STA_RATE_INFO_SHORTPRE		0x8000
#define MWL8K_STA_RATE_INFO_ANTSELECT(x)	(((x) >> 11) & 0x3)
#define MWL8K_STA_RATE_INFO_RATEID(x)		(((x) >> 3) & 0x3f)
#define MWL8K_STA_RATE_INFO_40MHZ		0x0004
#define MWL8K_STA_RATE_INFO_SHORTGI		0x0002
#define MWL8K_STA_RATE_INFO_MCS_FORMAT		0x0001
#define MWL8K_STA_RX_CTRL_OWNED_BY_HOST		0x02
#define MWL8K_STA_RX_CTRL_DECRYPT_ERROR		0x04
#define MWL8K_STA_RX_CTRL_DEC_ERR_TYPE		0x08
#define MWL8K_STA_RX_CTRL_KEY_INDEX			0x30
static void mwl8k_rxd_sta_init(void *_rxd, dma_addr_t next_dma_addr)
static void mwl8k_rxd_sta_refill(void *_rxd, dma_addr_t addr, int len)
static int
mwl8k_rxd_sta_process(void *_rxd, struct ieee80211_rx_status *status,
__le16 *qos, s8 *noise)
static struct rxd_ops rxd_sta_ops = ;
#define MWL8K_RX_DESCS		256
#define MWL8K_RX_MAXSZ		3800
static int mwl8k_rxq_init(struct ieee80211_hw *hw, int index)
static int rxq_refill(struct ieee80211_hw *hw, int index, int limit)
static void mwl8k_rxq_deinit(struct ieee80211_hw *hw, int index)
static inline int
mwl8k_capture_bssid(struct mwl8k_priv *priv, struct ieee80211_hdr *wh)
static inline void mwl8k_save_beacon(struct ieee80211_hw *hw,
struct sk_buff *skb)
static inline struct mwl8k_vif *mwl8k_find_vif_bss(struct list_head *vif_list,
u8 *bssid)
static int rxq_process(struct ieee80211_hw *hw, int index, int limit)
#define MWL8K_TXD_STATUS_OK			0x00000001
#define MWL8K_TXD_STATUS_OK_RETRY		0x00000002
#define MWL8K_TXD_STATUS_OK_MORE_RETRY		0x00000004
#define MWL8K_TXD_STATUS_MULTICAST_TX		0x00000008
#define MWL8K_TXD_STATUS_FW_OWNED		0x80000000
#define MWL8K_QOS_QLEN_UNSPEC			0xff00
#define MWL8K_QOS_ACK_POLICY_MASK		0x0060
#define MWL8K_QOS_ACK_POLICY_NORMAL		0x0000
#define MWL8K_QOS_ACK_POLICY_BLOCKACK		0x0060
#define MWL8K_QOS_EOSP				0x0010
struct mwl8k_tx_desc  __packed;
#define MWL8K_TX_DESCS		128
static int mwl8k_txq_init(struct ieee80211_hw *hw, int index)
static inline void mwl8k_tx_start(struct mwl8k_priv *priv)
static void mwl8k_dump_tx_rings(struct ieee80211_hw *hw)
#define MWL8K_TX_WAIT_TIMEOUT_MS	5000
static int mwl8k_tx_wait_empty(struct ieee80211_hw *hw)
#define MWL8K_TXD_SUCCESS(status)				\
((status) & (MWL8K_TXD_STATUS_OK |			\
MWL8K_TXD_STATUS_OK_RETRY |		\
MWL8K_TXD_STATUS_OK_MORE_RETRY))
static int mwl8k_tid_queue_mapping(u8 tid)
#define RI_FORMAT(a)		  (a & 0x0001)
#define RI_RATE_ID_MCS(a)	 ((a & 0x01f8) >> 3)
static int
mwl8k_txq_reclaim(struct ieee80211_hw *hw, int index, int limit, int force)
static void mwl8k_txq_deinit(struct ieee80211_hw *hw, int index)
static struct mwl8k_ampdu_stream *
mwl8k_add_stream(struct ieee80211_hw *hw, struct ieee80211_sta *sta, u8 tid)
static int
mwl8k_start_stream(struct ieee80211_hw *hw, struct mwl8k_ampdu_stream *stream)
static void
mwl8k_remove_stream(struct ieee80211_hw *hw, struct mwl8k_ampdu_stream *stream)
static struct mwl8k_ampdu_stream *
mwl8k_lookup_stream(struct ieee80211_hw *hw, u8 *addr, u8 tid)
#define MWL8K_AMPDU_PACKET_THRESHOLD 64
static inline bool mwl8k_ampdu_allowed(struct ieee80211_sta *sta, u8 tid)
static inline void mwl8k_tx_count_packet(struct ieee80211_sta *sta, u8 tid)
static void
mwl8k_txq_xmit(struct ieee80211_hw *hw, int index, struct sk_buff *skb)
static int mwl8k_fw_lock(struct ieee80211_hw *hw)
static void mwl8k_fw_unlock(struct ieee80211_hw *hw)
#define MWL8K_CMD_TIMEOUT_MS	10000
static int mwl8k_post_cmd(struct ieee80211_hw *hw, struct mwl8k_cmd_pkt *cmd)
static int mwl8k_post_pervif_cmd(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct mwl8k_cmd_pkt *cmd)
static void mwl8k_setup_2ghz_band(struct ieee80211_hw *hw)
static void mwl8k_setup_5ghz_band(struct ieee80211_hw *hw)
struct mwl8k_cmd_get_hw_spec_sta  __packed;
#define MWL8K_CAP_MAX_AMSDU		0x20000000
#define MWL8K_CAP_GREENFIELD		0x08000000
#define MWL8K_CAP_AMPDU			0x04000000
#define MWL8K_CAP_RX_STBC		0x01000000
#define MWL8K_CAP_TX_STBC		0x00800000
#define MWL8K_CAP_SHORTGI_40MHZ		0x00400000
#define MWL8K_CAP_SHORTGI_20MHZ		0x00200000
#define MWL8K_CAP_RX_ANTENNA_MASK	0x000e0000
#define MWL8K_CAP_TX_ANTENNA_MASK	0x0001c000
#define MWL8K_CAP_DELAY_BA		0x00003000
#define MWL8K_CAP_MIMO			0x00000200
#define MWL8K_CAP_40MHZ			0x00000100
#define MWL8K_CAP_BAND_MASK		0x00000007
#define MWL8K_CAP_5GHZ			0x00000004
#define MWL8K_CAP_2GHZ4			0x00000001
static void
mwl8k_set_ht_caps(struct ieee80211_hw *hw,
struct ieee80211_supported_band *band, u32 cap)
static void
mwl8k_set_caps(struct ieee80211_hw *hw, u32 caps)
static int mwl8k_cmd_get_hw_spec_sta(struct ieee80211_hw *hw)
struct mwl8k_cmd_get_hw_spec_ap  __packed;
static int mwl8k_cmd_get_hw_spec_ap(struct ieee80211_hw *hw)
struct mwl8k_cmd_set_hw_spec  __packed;
#define MWL8K_SET_HW_SPEC_FLAG_ENABLE_LIFE_TIME_EXPIRY	0x00000400
#define MWL8K_SET_HW_SPEC_FLAG_GENERATE_CCMP_HDR	0x00000200
#define MWL8K_SET_HW_SPEC_FLAG_HOST_DECR_MGMT		0x00000080
#define MWL8K_SET_HW_SPEC_FLAG_HOSTFORM_PROBERESP	0x00000020
#define MWL8K_SET_HW_SPEC_FLAG_HOSTFORM_BEACON		0x00000010
static int mwl8k_cmd_set_hw_spec(struct ieee80211_hw *hw)
struct mwl8k_cmd_mac_multicast_adr ;
#define MWL8K_ENABLE_RX_DIRECTED	0x0001
#define MWL8K_ENABLE_RX_MULTICAST	0x0002
#define MWL8K_ENABLE_RX_ALL_MULTICAST	0x0004
#define MWL8K_ENABLE_RX_BROADCAST	0x0008
static struct mwl8k_cmd_pkt *
__mwl8k_cmd_mac_multicast_adr(struct ieee80211_hw *hw, int allmulti,
struct netdev_hw_addr_list *mc_list)
struct mwl8k_cmd_get_stat  __packed;
#define MWL8K_STAT_ACK_FAILURE	9
#define MWL8K_STAT_RTS_FAILURE	12
#define MWL8K_STAT_FCS_ERROR	24
#define MWL8K_STAT_RTS_SUCCESS	11
static int mwl8k_cmd_get_stat(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
struct mwl8k_cmd_radio_control  __packed;
static int
mwl8k_cmd_radio_control(struct ieee80211_hw *hw, bool enable, bool force)
static int mwl8k_cmd_radio_disable(struct ieee80211_hw *hw)
static int mwl8k_cmd_radio_enable(struct ieee80211_hw *hw)
static int
mwl8k_set_radio_preamble(struct ieee80211_hw *hw, bool short_preamble)
#define MWL8K_RF_TX_POWER_LEVEL_TOTAL	8
struct mwl8k_cmd_rf_tx_power  __packed;
static int mwl8k_cmd_rf_tx_power(struct ieee80211_hw *hw, int dBm)
#define MWL8K_TX_POWER_LEVEL_TOTAL      12
struct mwl8k_cmd_tx_power  __packed;
static int mwl8k_cmd_tx_power(struct ieee80211_hw *hw,
struct ieee80211_conf *conf,
unsigned short pwr)
struct mwl8k_cmd_rf_antenna  __packed;
#define MWL8K_RF_ANTENNA_RX		1
#define MWL8K_RF_ANTENNA_TX		2
static int
mwl8k_cmd_rf_antenna(struct ieee80211_hw *hw, int antenna, int mask)
struct mwl8k_cmd_set_beacon ;
static int mwl8k_cmd_set_beacon(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, u8 *beacon, int len)
struct mwl8k_cmd_set_pre_scan  __packed;
static int mwl8k_cmd_set_pre_scan(struct ieee80211_hw *hw)
struct mwl8k_cmd_set_post_scan  __packed;
static int
mwl8k_cmd_set_post_scan(struct ieee80211_hw *hw, const __u8 *mac)
struct mwl8k_cmd_set_rf_channel  __packed;
static int mwl8k_cmd_set_rf_channel(struct ieee80211_hw *hw,
struct ieee80211_conf *conf)
#define MWL8K_FRAME_PROT_DISABLED			0x00
#define MWL8K_FRAME_PROT_11G				0x07
#define MWL8K_FRAME_PROT_11N_HT_40MHZ_ONLY		0x02
#define MWL8K_FRAME_PROT_11N_HT_ALL			0x06
struct mwl8k_cmd_update_set_aid  __packed;
static void legacy_rate_mask_to_array(u8 *rates, u32 mask)
static int
mwl8k_cmd_set_aid(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, u32 legacy_rate_mask)
struct mwl8k_cmd_set_rate  __packed;
static int
mwl8k_cmd_set_rate(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
u32 legacy_rate_mask, u8 *mcs_rates)
#define MWL8K_FJ_BEACON_MAXLEN	128
struct mwl8k_cmd_finalize_join  __packed;
static int mwl8k_cmd_finalize_join(struct ieee80211_hw *hw, void *frame,
int framelen, int dtim)
struct mwl8k_cmd_set_rts_threshold  __packed;
static int
mwl8k_cmd_set_rts_threshold(struct ieee80211_hw *hw, int rts_thresh)
struct mwl8k_cmd_set_slot  __packed;
static int mwl8k_cmd_set_slot(struct ieee80211_hw *hw, bool short_slot_time)
struct mwl8k_cmd_set_edca_params  __packed;
#define MWL8K_SET_EDCA_CW	0x01
#define MWL8K_SET_EDCA_TXOP	0x02
#define MWL8K_SET_EDCA_AIFS	0x04
#define MWL8K_SET_EDCA_ALL	(MWL8K_SET_EDCA_CW | \
MWL8K_SET_EDCA_TXOP | \
MWL8K_SET_EDCA_AIFS)
static int
mwl8k_cmd_set_edca_params(struct ieee80211_hw *hw, __u8 qnum,
__u16 cw_min, __u16 cw_max,
__u8 aifs, __u16 txop)
struct mwl8k_cmd_set_wmm_mode  __packed;
static int mwl8k_cmd_set_wmm_mode(struct ieee80211_hw *hw, bool enable)
struct mwl8k_cmd_mimo_config  __packed;
static int mwl8k_cmd_mimo_config(struct ieee80211_hw *hw, __u8 rx, __u8 tx)
struct mwl8k_cmd_use_fixed_rate_sta  __packed;
#define MWL8K_USE_AUTO_RATE	0x0002
#define MWL8K_UCAST_RATE	0
static int mwl8k_cmd_use_fixed_rate_sta(struct ieee80211_hw *hw)
struct mwl8k_cmd_use_fixed_rate_ap  __packed;
static int
mwl8k_cmd_use_fixed_rate_ap(struct ieee80211_hw *hw, int mcast, int mgmt)
struct mwl8k_cmd_enable_sniffer  __packed;
static int mwl8k_cmd_enable_sniffer(struct ieee80211_hw *hw, bool enable)
struct mwl8k_cmd_set_mac_addr  __packed;
#define MWL8K_MAC_TYPE_PRIMARY_CLIENT		0
#define MWL8K_MAC_TYPE_SECONDARY_CLIENT		1
#define MWL8K_MAC_TYPE_PRIMARY_AP		2
#define MWL8K_MAC_TYPE_SECONDARY_AP		3
static int mwl8k_cmd_set_mac_addr(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, u8 *mac)
struct mwl8k_cmd_set_rate_adapt_mode  __packed;
static int mwl8k_cmd_set_rateadapt_mode(struct ieee80211_hw *hw, __u16 mode)
struct mwl8k_cmd_get_watchdog_bitmap  __packed;
static int mwl8k_cmd_get_watchdog_bitmap(struct ieee80211_hw *hw, u8 *bitmap)
#define INVALID_BA	0xAA
static void mwl8k_watchdog_ba_events(struct work_struct *work)
struct mwl8k_cmd_bss_start  __packed;
static int mwl8k_cmd_bss_start(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, int enable)
#define BASTREAM_FLAG_DIRECTION_UPSTREAM	0x00
#define BASTREAM_FLAG_IMMEDIATE_TYPE		0x01
enum ba_stream_action_type ;
struct mwl8k_create_ba_stream  __packed;
struct mwl8k_destroy_ba_stream  __packed;
struct mwl8k_cmd_bastream  __packed;
static int
mwl8k_check_ba(struct ieee80211_hw *hw, struct mwl8k_ampdu_stream *stream)
static int
mwl8k_create_ba(struct ieee80211_hw *hw, struct mwl8k_ampdu_stream *stream,
u8 buf_size)
static void mwl8k_destroy_ba(struct ieee80211_hw *hw,
struct mwl8k_ampdu_stream *stream)
struct mwl8k_cmd_set_new_stn  __packed;
#define MWL8K_STA_ACTION_ADD		0
#define MWL8K_STA_ACTION_REMOVE		2
static int mwl8k_cmd_set_new_stn_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int mwl8k_cmd_set_new_stn_add_self(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int mwl8k_cmd_set_new_stn_del(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, u8 *addr)
#define MAX_ENCR_KEY_LENGTH	16
#define MIC_KEY_LENGTH		8
struct mwl8k_cmd_update_encryption  __packed;
struct mwl8k_cmd_set_key  __packed;
enum ;
#define MWL8K_UPDATE_ENCRYPTION_TYPE_WEP	0
#define MWL8K_UPDATE_ENCRYPTION_TYPE_DISABLE	1
#define MWL8K_UPDATE_ENCRYPTION_TYPE_TKIP	4
#define MWL8K_UPDATE_ENCRYPTION_TYPE_MIXED	7
#define MWL8K_UPDATE_ENCRYPTION_TYPE_AES	8
enum ;
#define MWL8K_KEY_FLAG_TXGROUPKEY	0x00000004
#define MWL8K_KEY_FLAG_PAIRWISE		0x00000008
#define MWL8K_KEY_FLAG_TSC_VALID	0x00000040
#define MWL8K_KEY_FLAG_WEP_TXKEY	0x01000000
#define MWL8K_KEY_FLAG_MICKEY_VALID	0x02000000
static int mwl8k_cmd_update_encryption_enable(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
u8 *addr,
u8 encr_type)
static int mwl8k_encryption_set_cmd_info(struct mwl8k_cmd_set_key *cmd,
u8 *addr,
struct ieee80211_key_conf *key)
static int mwl8k_cmd_encryption_set_key(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
u8 *addr,
struct ieee80211_key_conf *key)
static int mwl8k_cmd_encryption_remove_key(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
u8 *addr,
struct ieee80211_key_conf *key)
static int mwl8k_set_key(struct ieee80211_hw *hw,
enum set_key_cmd cmd_param,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta,
struct ieee80211_key_conf *key)
struct ewc_ht_info  __packed;
struct peer_capability_info  __packed;
struct mwl8k_cmd_update_stadb  __packed;
#define MWL8K_STA_DB_MODIFY_ENTRY	1
#define MWL8K_STA_DB_DEL_ENTRY		2
#define MWL8K_PEER_TYPE_ACCESSPOINT	2
static int mwl8k_cmd_update_stadb_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int mwl8k_cmd_update_stadb_del(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, u8 *addr)
static irqreturn_t mwl8k_interrupt(int irq, void *dev_id)
static void mwl8k_tx_poll(unsigned long data)
static void mwl8k_rx_poll(unsigned long data)
static void mwl8k_tx(struct ieee80211_hw *hw, struct sk_buff *skb)
static int mwl8k_start(struct ieee80211_hw *hw)
static void mwl8k_stop(struct ieee80211_hw *hw)
static int mwl8k_reload_firmware(struct ieee80211_hw *hw, char *fw_image);
static int mwl8k_add_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static void mwl8k_remove_interface(struct ieee80211_hw *hw,
struct ieee80211_vif *vif)
static int mwl8k_config(struct ieee80211_hw *hw, u32 changed)
static void
mwl8k_bss_info_changed_sta(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info, u32 changed)
static void
mwl8k_bss_info_changed_ap(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info, u32 changed)
static void
mwl8k_bss_info_changed(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
struct ieee80211_bss_conf *info, u32 changed)
static u64 mwl8k_prepare_multicast(struct ieee80211_hw *hw,
struct netdev_hw_addr_list *mc_list)
static int
mwl8k_configure_filter_sniffer(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags)
static struct mwl8k_vif *mwl8k_first_vif(struct mwl8k_priv *priv)
static void mwl8k_configure_filter(struct ieee80211_hw *hw,
unsigned int changed_flags,
unsigned int *total_flags,
u64 multicast)
static int mwl8k_set_rts_threshold(struct ieee80211_hw *hw, u32 value)
static int mwl8k_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int mwl8k_sta_add(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
static int mwl8k_conf_tx(struct ieee80211_hw *hw, u16 queue,
const struct ieee80211_tx_queue_params *params)
static int mwl8k_get_stats(struct ieee80211_hw *hw,
struct ieee80211_low_level_stats *stats)
static int mwl8k_get_survey(struct ieee80211_hw *hw, int idx,
struct survey_info *survey)
#define MAX_AMPDU_ATTEMPTS 5
static int
mwl8k_ampdu_action(struct ieee80211_hw *hw, struct ieee80211_vif *vif,
enum ieee80211_ampdu_mlme_action action,
struct ieee80211_sta *sta, u16 tid, u16 *ssn,
u8 buf_size)
static const struct ieee80211_ops mwl8k_ops = ;
static void mwl8k_finalize_join_worker(struct work_struct *work)
enum ;
#define MWL8K_8366_AP_FW_API 2
#define _MWL8K_8366_AP_FW(api) "mwl8k/fmimage_8366_ap-" #api ".fw"
#define MWL8K_8366_AP_FW(api) _MWL8K_8366_AP_FW(api)
static struct mwl8k_device_info mwl8k_info_tbl[] __devinitdata = ;
MODULE_FIRMWARE("mwl8k/helper_8363.fw");
MODULE_FIRMWARE("mwl8k/fmimage_8363.fw");
MODULE_FIRMWARE("mwl8k/helper_8687.fw");
MODULE_FIRMWARE("mwl8k/fmimage_8687.fw");
MODULE_FIRMWARE("mwl8k/helper_8366.fw");
MODULE_FIRMWARE("mwl8k/fmimage_8366.fw");
MODULE_FIRMWARE(MWL8K_8366_AP_FW(MWL8K_8366_AP_FW_API));
static DEFINE_PCI_DEVICE_TABLE(mwl8k_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, mwl8k_pci_id_table);
static int mwl8k_request_alt_fw(struct mwl8k_priv *priv)
static int mwl8k_firmware_load_success(struct mwl8k_priv *priv);
static void mwl8k_fw_state_machine(const struct firmware *fw, void *context)
static int mwl8k_init_firmware(struct ieee80211_hw *hw, char *fw_image,
bool nowait)
static int mwl8k_init_txqs(struct ieee80211_hw *hw)
static int mwl8k_probe_hw(struct ieee80211_hw *hw)
static int mwl8k_reload_firmware(struct ieee80211_hw *hw, char *fw_image)
static int mwl8k_firmware_load_success(struct mwl8k_priv *priv)
static int __devinit mwl8k_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit mwl8k_shutdown(struct pci_dev *pdev)
static void __devexit mwl8k_remove(struct pci_dev *pdev)
static struct pci_driver mwl8k_driver = ;
static int __init mwl8k_init(void)
static void __exit mwl8k_exit(void)
module_init(mwl8k_init);
module_exit(mwl8k_exit);
MODULE_DESCRIPTION(MWL8K_DESC);
MODULE_VERSION(MWL8K_VERSION);
MODULE_AUTHOR("Lennert Buytenhek <buytenh@marvell.com>");
MODULE_LICENSE("GPL");
