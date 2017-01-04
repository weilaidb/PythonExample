static u8 _rtl92se_map_hwqueue_to_fwqueue(struct sk_buff *skb,	u8 skb_queue)
static int _rtl92se_rate_mapping(bool isht, u8 desc_rate, bool first_ampdu)
static u8 _rtl92s_query_rxpwrpercentage(char antpower)
static u8 _rtl92s_evm_db_to_percentage(char value)
static long _rtl92se_translate_todbm(struct ieee80211_hw *hw,
u8 signal_strength_index)
static long _rtl92se_signal_scale_mapping(struct ieee80211_hw *hw,
long currsig)
static void _rtl92se_query_rxphystatus(struct ieee80211_hw *hw,
struct rtl_stats *pstats, u8 *pdesc,
struct rx_fwinfo *p_drvinfo,
bool packet_match_bssid,
bool packet_toself,
bool packet_beacon)
static void _rtl92se_process_ui_rssi(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92se_update_rxsignalstatistics(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92se_process_pwdb(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void rtl_92s_process_streams(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92se_process_ui_link_quality(struct ieee80211_hw *hw,
struct rtl_stats *pstats)
static void _rtl92se_process_phyinfo(struct ieee80211_hw *hw,
u8 *buffer,
struct rtl_stats *pcurrent_stats)
static void _rtl92se_translate_rx_signal_stuff(struct ieee80211_hw *hw,
struct sk_buff *skb, struct rtl_stats *pstats,
u8 *pdesc, struct rx_fwinfo *p_drvinfo)
bool rtl92se_rx_query_desc(struct ieee80211_hw *hw, struct rtl_stats *stats,
struct ieee80211_rx_status *rx_status, u8 *pdesc,
struct sk_buff *skb)
void rtl92se_tx_fill_desc(struct ieee80211_hw *hw,
struct ieee80211_hdr *hdr, u8 *pdesc_tx,
struct ieee80211_tx_info *info, struct sk_buff *skb,
u8 hw_queue, struct rtl_tcb_desc *ptcb_desc)
void rtl92se_tx_fill_cmddesc(struct ieee80211_hw *hw, u8 *pdesc,
bool firstseg, bool lastseg, struct sk_buff *skb)
void rtl92se_set_desc(u8 *pdesc, bool istx, u8 desc_name, u8 *val)
u32 rtl92se_get_desc(u8 *desc, bool istx, u8 desc_name)
void rtl92se_tx_polling(struct ieee80211_hw *hw, u8 hw_queue)
