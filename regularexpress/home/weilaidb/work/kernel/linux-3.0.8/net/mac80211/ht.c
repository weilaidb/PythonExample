void ieee80211_ht_cap_ie_to_sta_ht_cap(struct ieee80211_supported_band *sband,
struct ieee80211_ht_cap *ht_cap_ie,
struct ieee80211_sta_ht_cap *ht_cap)
void ieee80211_sta_tear_down_BA_sessions(struct sta_info *sta, bool tx)
void ieee80211_ba_session_work(struct work_struct *work)
void ieee80211_send_delba(struct ieee80211_sub_if_data *sdata,
const u8 *da, u16 tid,
u16 initiator, u16 reason_code)
void ieee80211_process_delba(struct ieee80211_sub_if_data *sdata,
struct sta_info *sta,
struct ieee80211_mgmt *mgmt, size_t len)
int ieee80211_send_smps_action(struct ieee80211_sub_if_data *sdata,
enum ieee80211_smps_mode smps, const u8 *da,
const u8 *bssid)
void ieee80211_request_smps_work(struct work_struct *work)
void ieee80211_request_smps(struct ieee80211_vif *vif,
enum ieee80211_smps_mode smps_mode)
EXPORT_SYMBOL_GPL(ieee80211_request_smps);
