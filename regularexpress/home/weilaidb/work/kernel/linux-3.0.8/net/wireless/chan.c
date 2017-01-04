struct ieee80211_channel *
rdev_freq_to_chan(struct cfg80211_registered_device *rdev,
int freq, enum nl80211_channel_type channel_type)
static bool can_beacon_sec_chan(struct wiphy *wiphy,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
int cfg80211_set_freq(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev, int freq,
enum nl80211_channel_type channel_type)
