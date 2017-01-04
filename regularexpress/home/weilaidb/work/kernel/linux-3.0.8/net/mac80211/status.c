void ieee80211_tx_status_irqsafe(struct ieee80211_hw *hw,
struct sk_buff *skb)
EXPORT_SYMBOL(ieee80211_tx_status_irqsafe);
static void ieee80211_handle_filtered_frame(struct ieee80211_local *local,
struct sta_info *sta,
struct sk_buff *skb)
static void ieee80211_frame_acked(struct sta_info *sta, struct sk_buff *skb)
#define STA_LOST_PKT_THRESHOLD	50
void ieee80211_tx_status(struct ieee80211_hw *hw, struct sk_buff *skb)
EXPORT_SYMBOL(ieee80211_tx_status);
void ieee80211_report_low_ack(struct ieee80211_sta *pubsta, u32 num_packets)
EXPORT_SYMBOL(ieee80211_report_low_ack);
