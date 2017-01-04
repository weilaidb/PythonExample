const int ieee802_1d_to_ac[8] = ;
static int wme_downgrade_ac(struct sk_buff *skb)
u16 ieee80211_select_queue(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb)
u16 ieee80211_downgrade_queue(struct ieee80211_local *local,
struct sk_buff *skb)
void ieee80211_set_qos_hdr(struct ieee80211_local *local, struct sk_buff *skb)
