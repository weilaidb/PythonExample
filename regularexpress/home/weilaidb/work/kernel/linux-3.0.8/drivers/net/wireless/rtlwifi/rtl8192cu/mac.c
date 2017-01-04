#define LINK_Q	ui_link_quality
#define RX_EVM	rx_evm_percentage
#define RX_SIGQ	rx_mimo_signalquality
void rtl92c_read_chip_version(struct ieee80211_hw *hw)
bool rtl92c_llt_write(struct ieee80211_hw *hw, u32 address, u32 data)
bool rtl92c_init_llt_table(struct ieee80211_hw *hw, u32 boundary)
void rtl92c_set_key(struct ieee80211_hw *hw, u32 key_index,
u8 *p_macaddr, bool is_group, u8 enc_algo,
bool is_wepkey, bool clear_all)
u32 rtl92c_get_txdma_status(struct ieee80211_hw *hw)
void rtl92c_enable_interrupt(struct ieee80211_hw *hw)
void rtl92c_init_interrupt(struct ieee80211_hw *hw)
void rtl92c_disable_interrupt(struct ieee80211_hw *hw)
void rtl92c_set_qos(struct ieee80211_hw *hw, int aci)
void rtl92c_set_mac_addr(struct ieee80211_hw *hw, const u8 *addr)
void rtl92c_init_driver_info_size(struct ieee80211_hw *hw, u8 size)
int rtl92c_set_network_type(struct ieee80211_hw *hw, enum nl80211_iftype type)
void rtl92c_init_network_type(struct ieee80211_hw *hw)
void rtl92c_init_adaptive_ctrl(struct ieee80211_hw *hw)
void rtl92c_init_rate_fallback(struct ieee80211_hw *hw)
static void rtl92c_set_cck_sifs(struct ieee80211_hw *hw, u8 trx_sifs,
u8 ctx_sifs)
static void rtl92c_set_ofdm_sifs(struct ieee80211_hw *hw, u8 trx_sifs,
u8 ctx_sifs)
void rtl92c_init_edca_param(struct ieee80211_hw *hw,
u16 queue, u16 txop, u8 cw_min, u8 cw_max, u8 aifs)
void rtl92c_init_edca(struct ieee80211_hw *hw)
void rtl92c_init_ampdu_aggregation(struct ieee80211_hw *hw)
void rtl92c_init_beacon_max_error(struct ieee80211_hw *hw, bool infra_mode)
void rtl92c_init_rdg_setting(struct ieee80211_hw *hw)
void rtl92c_init_retry_function(struct ieee80211_hw *hw)
void rtl92c_init_beacon_parameters(struct ieee80211_hw *hw,
enum version_8192c version)
void rtl92c_disable_fast_edca(struct ieee80211_hw *hw)
void rtl92c_set_min_space(struct ieee80211_hw *hw, bool is2T)
u16 rtl92c_get_mgt_filter(struct ieee80211_hw *hw)
void rtl92c_set_mgt_filter(struct ieee80211_hw *hw, u16 filter)
u16 rtl92c_get_ctrl_filter(struct ieee80211_hw *hw)
void rtl92c_set_ctrl_filter(struct ieee80211_hw *hw, u16 filter)
u16 rtl92c_get_data_filter(struct ieee80211_hw *hw)
void rtl92c_set_data_filter(struct ieee80211_hw *hw, u16 filter)
static u8 _rtl92c_query_rxpwrpercentage(char antpower)
static u8 _rtl92c_evm_db_to_percentage(char value)
static long _rtl92c_translate_todbm(struct ieee80211_hw *hw,
u8 signal_strength_index)
static long _rtl92c_signal_scale_mapping(struct ieee80211_hw *hw,
long currsig)
static void _rtl92c_query_rxphystatus(struct ieee80211_hw *hw,
struct rtl_stats *pstats,
struct rx_desc_92c *pdesc,
struct rx_fwinfo_92c *p_drvinfo,
bool packet_match_bssid,
bool packet_toself,
bool packet_beacon)
static void _rtl92c_process_ui_rssi(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92c_update_rxsignalstatistics(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92c_process_pwdb(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92c_process_LINK_Q(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92c_process_phyinfo(struct ieee80211_hw *hw,
u8 *buffer,
struct rtl_stats *pcurrent_stats)
void rtl92c_translate_rx_signal_stuff(struct ieee80211_hw *hw,
struct sk_buff *skb,
struct rtl_stats *pstats,
struct rx_desc_92c *pdesc,
struct rx_fwinfo_92c *p_drvinfo)
