static void ieee80211_offchannel_ps_enable(struct ieee80211_sub_if_data *sdata,
bool tell_ap)
static void ieee80211_offchannel_ps_disable(struct ieee80211_sub_if_data *sdata)
void ieee80211_offchannel_stop_vifs(struct ieee80211_local *local,
bool offchannel_ps_enable)
void ieee80211_offchannel_enable_all_ps(struct ieee80211_local *local,
bool tell_ap)
void ieee80211_offchannel_return(struct ieee80211_local *local,
bool enable_beaconing,
bool offchannel_ps_disable)
static void ieee80211_hw_roc_start(struct work_struct *work)
void ieee80211_ready_on_channel(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(ieee80211_ready_on_channel);
static void ieee80211_hw_roc_done(struct work_struct *work)
void ieee80211_remain_on_channel_expired(struct ieee80211_hw *hw)
EXPORT_SYMBOL_GPL(ieee80211_remain_on_channel_expired);
void ieee80211_hw_roc_setup(struct ieee80211_local *local)
