static void ieee80211_send_refuse_measurement_request(struct ieee80211_sub_if_data *sdata,
struct ieee80211_msrment_ie *request_ie,
const u8 *da, const u8 *bssid,
u8 dialog_token)
void ieee80211_process_measurement_req(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len)
