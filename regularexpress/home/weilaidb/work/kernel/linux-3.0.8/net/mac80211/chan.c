static enum ieee80211_chan_mode
__ieee80211_get_channel_mode(struct ieee80211_local *local,
struct ieee80211_sub_if_data *ignore)
enum ieee80211_chan_mode
ieee80211_get_channel_mode(struct ieee80211_local *local,
struct ieee80211_sub_if_data *ignore)
bool ieee80211_set_channel_type(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
enum nl80211_channel_type chantype)
