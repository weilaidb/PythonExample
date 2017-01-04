#define __RTL92C_MAC_H__
#define LLT_LAST_ENTRY_OF_TX_PKT_BUFFER		255
#define DRIVER_EARLY_INT_TIME					0x05
#define BCN_DMA_ATIME_INT_TIME				0x02
void rtl92c_read_chip_version(struct ieee80211_hw *hw);
bool rtl92c_llt_write(struct ieee80211_hw *hw, u32 address, u32 data);
bool rtl92c_init_llt_table(struct ieee80211_hw *hw, u32 boundary);
void rtl92c_set_key(struct ieee80211_hw *hw, u32 key_index,
u8 *p_macaddr, bool is_group, u8 enc_algo,
bool is_wepkey, bool clear_all);
void rtl92c_enable_interrupt(struct ieee80211_hw *hw);
void rtl92c_disable_interrupt(struct ieee80211_hw *hw);
void rtl92c_set_qos(struct ieee80211_hw *hw, int aci);
void rtl92c_set_mac_addr(struct ieee80211_hw *hw, const u8 *addr);
void rtl92c_init_interrupt(struct ieee80211_hw *hw);
void rtl92c_init_driver_info_size(struct ieee80211_hw *hw, u8 size);
int rtl92c_set_network_type(struct ieee80211_hw *hw, enum nl80211_iftype type);
void rtl92c_init_network_type(struct ieee80211_hw *hw);
void rtl92c_init_adaptive_ctrl(struct ieee80211_hw *hw);
void rtl92c_init_rate_fallback(struct ieee80211_hw *hw);
void rtl92c_init_edca_param(struct ieee80211_hw *hw,
u16 queue,
u16 txop,
u8 ecwmax,
u8 ecwmin,
u8 aifs);
void rtl92c_init_edca(struct ieee80211_hw *hw);
void rtl92c_init_ampdu_aggregation(struct ieee80211_hw *hw);
void rtl92c_init_beacon_max_error(struct ieee80211_hw *hw, bool infra_mode);
void rtl92c_init_rdg_setting(struct ieee80211_hw *hw);
void rtl92c_init_retry_function(struct ieee80211_hw *hw);
void rtl92c_init_beacon_parameters(struct ieee80211_hw *hw,
enum version_8192c version);
void rtl92c_disable_fast_edca(struct ieee80211_hw *hw);
void rtl92c_set_min_space(struct ieee80211_hw *hw, bool is2T);
u16 rtl92c_get_mgt_filter(struct ieee80211_hw *hw);
void rtl92c_set_mgt_filter(struct ieee80211_hw *hw, u16 filter);
u16 rtl92c_get_ctrl_filter(struct ieee80211_hw *hw);
void rtl92c_set_ctrl_filter(struct ieee80211_hw *hw, u16 filter);
u16 rtl92c_get_data_filter(struct ieee80211_hw *hw);
void rtl92c_set_data_filter(struct ieee80211_hw *hw, u16 filter);
u32 rtl92c_get_txdma_status(struct ieee80211_hw *hw);
#define RX_HAL_IS_CCK_RATE(_pdesc)\
(GET_RX_DESC_RX_MCS(_pdesc) == DESC92C_RATE1M ||\
GET_RX_DESC_RX_MCS(_pdesc) == DESC92C_RATE2M ||\
GET_RX_DESC_RX_MCS(_pdesc) == DESC92C_RATE5_5M ||\
GET_RX_DESC_RX_MCS(_pdesc) == DESC92C_RATE11M)
struct rx_fwinfo_92c  __packed;
struct rx_desc_92c  __packed;
enum rtl_desc_qsel rtl92c_map_hwqueue_to_fwqueue(u16 fc,
unsigned int
skb_queue);
void rtl92c_translate_rx_signal_stuff(struct ieee80211_hw *hw,
struct sk_buff *skb,
struct rtl_stats *pstats,
struct rx_desc_92c *pdesc,
struct rx_fwinfo_92c *p_drvinfo);
