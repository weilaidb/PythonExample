static int _ConfigVerTOutEP(struct ieee80211_hw *hw)
static int _ConfigVerNOutEP(struct ieee80211_hw *hw)
static void _TwoOutEpMapping(struct ieee80211_hw *hw, bool bIsChipB,
bool  bwificfg, struct rtl_ep_map *ep_map)
static void _ThreeOutEpMapping(struct ieee80211_hw *hw, bool  bwificfg,
struct rtl_ep_map *ep_map)
static void _OneOutEpMapping(struct ieee80211_hw *hw, struct rtl_ep_map *ep_map)
static int _out_ep_mapping(struct ieee80211_hw *hw)
int  rtl8192cu_endpoint_mapping(struct ieee80211_hw *hw)
u16 rtl8192cu_mq_to_hwq(__le16 fc, u16 mac80211_queue_index)
static enum rtl_desc_qsel _rtl8192cu_mq_to_descq(struct ieee80211_hw *hw,
__le16 fc, u16 mac80211_queue_index)
bool rtl92cu_rx_query_desc(struct ieee80211_hw *hw,
struct rtl_stats *stats,
struct ieee80211_rx_status *rx_status,
u8 *p_desc, struct sk_buff *skb)
#define RTL_RX_DRV_INFO_UNIT		8
static void _rtl_rx_process(struct ieee80211_hw *hw, struct sk_buff *skb)
void  rtl8192cu_rx_hdl(struct ieee80211_hw *hw, struct sk_buff * skb)
void rtl8192c_rx_segregate_hdl(
struct ieee80211_hw *hw,
struct sk_buff *skb,
struct sk_buff_head *skb_list)
void rtl8192c_tx_cleanup(struct ieee80211_hw *hw, struct sk_buff  *skb)
int rtl8192c_tx_post_hdl(struct ieee80211_hw *hw, struct urb *urb,
struct sk_buff *skb)
struct sk_buff *rtl8192c_tx_aggregate_hdl(struct ieee80211_hw *hw,
struct sk_buff_head *list)
static void _rtl_fill_usb_tx_desc(u8 *txdesc)
static void _rtl_tx_desc_checksum(u8 *txdesc)
void rtl92cu_tx_fill_desc(struct ieee80211_hw *hw,
struct ieee80211_hdr *hdr, u8 *pdesc_tx,
struct ieee80211_tx_info *info, struct sk_buff *skb,
u8 queue_index,
struct rtl_tcb_desc *tcb_desc)
void rtl92cu_fill_fake_txdesc(struct ieee80211_hw *hw, u8 * pDesc,
u32 buffer_len, bool bIsPsPoll)
void rtl92cu_tx_fill_cmddesc(struct ieee80211_hw *hw,
u8 *pdesc, bool firstseg,
bool lastseg, struct sk_buff *skb)
bool rtl92cu_cmd_send_packet(struct ieee80211_hw *hw, struct sk_buff *skb)
