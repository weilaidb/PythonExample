void cfg80211_send_rx_auth(struct net_device *dev, const u8 *buf, size_t len)
EXPORT_SYMBOL(cfg80211_send_rx_auth);
void cfg80211_send_rx_assoc(struct net_device *dev, const u8 *buf, size_t len)
EXPORT_SYMBOL(cfg80211_send_rx_assoc);
void __cfg80211_send_deauth(struct net_device *dev,
const u8 *buf, size_t len)
EXPORT_SYMBOL(__cfg80211_send_deauth);
void cfg80211_send_deauth(struct net_device *dev, const u8 *buf, size_t len)
EXPORT_SYMBOL(cfg80211_send_deauth);
void __cfg80211_send_disassoc(struct net_device *dev,
const u8 *buf, size_t len)
EXPORT_SYMBOL(__cfg80211_send_disassoc);
void cfg80211_send_disassoc(struct net_device *dev, const u8 *buf, size_t len)
EXPORT_SYMBOL(cfg80211_send_disassoc);
void cfg80211_send_unprot_deauth(struct net_device *dev, const u8 *buf,
size_t len)
EXPORT_SYMBOL(cfg80211_send_unprot_deauth);
void cfg80211_send_unprot_disassoc(struct net_device *dev, const u8 *buf,
size_t len)
EXPORT_SYMBOL(cfg80211_send_unprot_disassoc);
static void __cfg80211_auth_remove(struct wireless_dev *wdev, const u8 *addr)
void __cfg80211_auth_canceled(struct net_device *dev, const u8 *addr)
EXPORT_SYMBOL(__cfg80211_auth_canceled);
void cfg80211_send_auth_timeout(struct net_device *dev, const u8 *addr)
EXPORT_SYMBOL(cfg80211_send_auth_timeout);
void cfg80211_send_assoc_timeout(struct net_device *dev, const u8 *addr)
EXPORT_SYMBOL(cfg80211_send_assoc_timeout);
void cfg80211_michael_mic_failure(struct net_device *dev, const u8 *addr,
enum nl80211_key_type key_type, int key_id,
const u8 *tsc, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_michael_mic_failure);
int __cfg80211_mlme_auth(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan,
enum nl80211_auth_type auth_type,
const u8 *bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len,
const u8 *key, int key_len, int key_idx,
bool local_state_change)
int cfg80211_mlme_auth(struct cfg80211_registered_device *rdev,
struct net_device *dev, struct ieee80211_channel *chan,
enum nl80211_auth_type auth_type, const u8 *bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len,
const u8 *key, int key_len, int key_idx,
bool local_state_change)
int __cfg80211_mlme_assoc(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan,
const u8 *bssid, const u8 *prev_bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len, bool use_mfp,
struct cfg80211_crypto_settings *crypt)
int cfg80211_mlme_assoc(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan,
const u8 *bssid, const u8 *prev_bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len, bool use_mfp,
struct cfg80211_crypto_settings *crypt)
int __cfg80211_mlme_deauth(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change)
int cfg80211_mlme_deauth(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change)
static int __cfg80211_mlme_disassoc(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change)
int cfg80211_mlme_disassoc(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change)
void cfg80211_mlme_down(struct cfg80211_registered_device *rdev,
struct net_device *dev)
void cfg80211_ready_on_channel(struct net_device *dev, u64 cookie,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_ready_on_channel);
void cfg80211_remain_on_channel_expired(struct net_device *dev,
u64 cookie,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
gfp_t gfp)
EXPORT_SYMBOL(cfg80211_remain_on_channel_expired);
void cfg80211_new_sta(struct net_device *dev, const u8 *mac_addr,
struct station_info *sinfo, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_new_sta);
void cfg80211_del_sta(struct net_device *dev, const u8 *mac_addr, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_del_sta);
struct cfg80211_mgmt_registration ;
int cfg80211_mlme_register_mgmt(struct wireless_dev *wdev, u32 snd_pid,
u16 frame_type, const u8 *match_data,
int match_len)
void cfg80211_mlme_unregister_socket(struct wireless_dev *wdev, u32 nlpid)
void cfg80211_mlme_purge_registrations(struct wireless_dev *wdev)
int cfg80211_mlme_mgmt_tx(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan, bool offchan,
enum nl80211_channel_type channel_type,
bool channel_type_valid, unsigned int wait,
const u8 *buf, size_t len, u64 *cookie)
bool cfg80211_rx_mgmt(struct net_device *dev, int freq, const u8 *buf,
size_t len, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_rx_mgmt);
void cfg80211_mgmt_tx_status(struct net_device *dev, u64 cookie,
const u8 *buf, size_t len, bool ack, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_mgmt_tx_status);
void cfg80211_cqm_rssi_notify(struct net_device *dev,
enum nl80211_cqm_rssi_threshold_event rssi_event,
gfp_t gfp)
EXPORT_SYMBOL(cfg80211_cqm_rssi_notify);
void cfg80211_cqm_pktloss_notify(struct net_device *dev,
const u8 *peer, u32 num_packets, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_cqm_pktloss_notify);
