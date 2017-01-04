#define __NET_WIRELESS_CORE_H
struct cfg80211_registered_device ;
static inline
struct cfg80211_registered_device *wiphy_to_dev(struct wiphy *wiphy)
static inline
bool wiphy_idx_valid(int wiphy_idx)
static inline void
cfg80211_rdev_free_wowlan(struct cfg80211_registered_device *rdev)
extern struct workqueue_struct *cfg80211_wq;
extern struct mutex cfg80211_mutex;
extern struct list_head cfg80211_rdev_list;
extern int cfg80211_rdev_list_generation;
static inline void assert_cfg80211_lock(void)
#define WIPHY_IDX_STALE -1
struct cfg80211_internal_bss ;
static inline struct cfg80211_internal_bss *bss_from_pub(struct cfg80211_bss *pub)
static inline void cfg80211_ref_bss(struct cfg80211_internal_bss *bss)
static inline void cfg80211_hold_bss(struct cfg80211_internal_bss *bss)
static inline void cfg80211_unhold_bss(struct cfg80211_internal_bss *bss)
struct cfg80211_registered_device *cfg80211_rdev_by_wiphy_idx(int wiphy_idx);
int get_wiphy_idx(struct wiphy *wiphy);
struct cfg80211_registered_device *
__cfg80211_rdev_from_info(struct genl_info *info);
extern struct cfg80211_registered_device *
cfg80211_get_dev_from_info(struct genl_info *info);
struct wiphy *wiphy_idx_to_wiphy(int wiphy_idx);
extern struct cfg80211_registered_device *
cfg80211_get_dev_from_ifindex(struct net *net, int ifindex);
int cfg80211_switch_netns(struct cfg80211_registered_device *rdev,
struct net *net);
static inline void cfg80211_lock_rdev(struct cfg80211_registered_device *rdev)
static inline void cfg80211_unlock_rdev(struct cfg80211_registered_device *rdev)
static inline void wdev_lock(struct wireless_dev *wdev)
__acquires(wdev)
static inline void wdev_unlock(struct wireless_dev *wdev)
__releases(wdev)
#define ASSERT_RDEV_LOCK(rdev) lockdep_assert_held(&(rdev)->mtx)
#define ASSERT_WDEV_LOCK(wdev) lockdep_assert_held(&(wdev)->mtx)
enum cfg80211_event_type ;
struct cfg80211_event ;
struct cfg80211_cached_keys ;
extern void cfg80211_dev_free(struct cfg80211_registered_device *rdev);
extern int cfg80211_dev_rename(struct cfg80211_registered_device *rdev,
char *newname);
void ieee80211_set_bitrate_flags(struct wiphy *wiphy);
void wiphy_update_regulatory(struct wiphy *wiphy,
enum nl80211_reg_initiator setby);
void cfg80211_bss_expire(struct cfg80211_registered_device *dev);
void cfg80211_bss_age(struct cfg80211_registered_device *dev,
unsigned long age_secs);
int __cfg80211_join_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_ibss_params *params,
struct cfg80211_cached_keys *connkeys);
int cfg80211_join_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_ibss_params *params,
struct cfg80211_cached_keys *connkeys);
void cfg80211_clear_ibss(struct net_device *dev, bool nowext);
int __cfg80211_leave_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev, bool nowext);
int cfg80211_leave_ibss(struct cfg80211_registered_device *rdev,
struct net_device *dev, bool nowext);
void __cfg80211_ibss_joined(struct net_device *dev, const u8 *bssid);
int cfg80211_ibss_wext_join(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev);
extern const struct mesh_config default_mesh_config;
extern const struct mesh_setup default_mesh_setup;
int __cfg80211_join_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev,
const struct mesh_setup *setup,
const struct mesh_config *conf);
int cfg80211_join_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev,
const struct mesh_setup *setup,
const struct mesh_config *conf);
int cfg80211_leave_mesh(struct cfg80211_registered_device *rdev,
struct net_device *dev);
int __cfg80211_mlme_auth(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan,
enum nl80211_auth_type auth_type,
const u8 *bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len,
const u8 *key, int key_len, int key_idx,
bool local_state_change);
int cfg80211_mlme_auth(struct cfg80211_registered_device *rdev,
struct net_device *dev, struct ieee80211_channel *chan,
enum nl80211_auth_type auth_type, const u8 *bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len,
const u8 *key, int key_len, int key_idx,
bool local_state_change);
int __cfg80211_mlme_assoc(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan,
const u8 *bssid, const u8 *prev_bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len, bool use_mfp,
struct cfg80211_crypto_settings *crypt);
int cfg80211_mlme_assoc(struct cfg80211_registered_device *rdev,
struct net_device *dev, struct ieee80211_channel *chan,
const u8 *bssid, const u8 *prev_bssid,
const u8 *ssid, int ssid_len,
const u8 *ie, int ie_len, bool use_mfp,
struct cfg80211_crypto_settings *crypt);
int __cfg80211_mlme_deauth(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change);
int cfg80211_mlme_deauth(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change);
int cfg80211_mlme_disassoc(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *bssid,
const u8 *ie, int ie_len, u16 reason,
bool local_state_change);
void cfg80211_mlme_down(struct cfg80211_registered_device *rdev,
struct net_device *dev);
void __cfg80211_connect_result(struct net_device *dev, const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len,
u16 status, bool wextev,
struct cfg80211_bss *bss);
int cfg80211_mlme_register_mgmt(struct wireless_dev *wdev, u32 snd_pid,
u16 frame_type, const u8 *match_data,
int match_len);
void cfg80211_mlme_unregister_socket(struct wireless_dev *wdev, u32 nlpid);
void cfg80211_mlme_purge_registrations(struct wireless_dev *wdev);
int cfg80211_mlme_mgmt_tx(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct ieee80211_channel *chan, bool offchan,
enum nl80211_channel_type channel_type,
bool channel_type_valid, unsigned int wait,
const u8 *buf, size_t len, u64 *cookie);
int __cfg80211_connect(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_connect_params *connect,
struct cfg80211_cached_keys *connkeys,
const u8 *prev_bssid);
int cfg80211_connect(struct cfg80211_registered_device *rdev,
struct net_device *dev,
struct cfg80211_connect_params *connect,
struct cfg80211_cached_keys *connkeys);
int __cfg80211_disconnect(struct cfg80211_registered_device *rdev,
struct net_device *dev, u16 reason,
bool wextev);
int cfg80211_disconnect(struct cfg80211_registered_device *rdev,
struct net_device *dev, u16 reason,
bool wextev);
void __cfg80211_roamed(struct wireless_dev *wdev,
struct ieee80211_channel *channel,
const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len);
int cfg80211_mgd_wext_connect(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev);
void cfg80211_conn_work(struct work_struct *work);
void cfg80211_sme_failed_assoc(struct wireless_dev *wdev);
bool cfg80211_sme_failed_reassoc(struct wireless_dev *wdev);
int cfg80211_validate_key_settings(struct cfg80211_registered_device *rdev,
struct key_params *params, int key_idx,
bool pairwise, const u8 *mac_addr);
void __cfg80211_disconnected(struct net_device *dev, const u8 *ie,
size_t ie_len, u16 reason, bool from_ap);
void cfg80211_sme_scan_done(struct net_device *dev);
void cfg80211_sme_rx_auth(struct net_device *dev, const u8 *buf, size_t len);
void cfg80211_sme_disassoc(struct net_device *dev, int idx);
void __cfg80211_scan_done(struct work_struct *wk);
void ___cfg80211_scan_done(struct cfg80211_registered_device *rdev, bool leak);
void __cfg80211_sched_scan_results(struct work_struct *wk);
int __cfg80211_stop_sched_scan(struct cfg80211_registered_device *rdev,
bool driver_initiated);
void cfg80211_upload_connect_keys(struct wireless_dev *wdev);
int cfg80211_change_iface(struct cfg80211_registered_device *rdev,
struct net_device *dev, enum nl80211_iftype ntype,
u32 *flags, struct vif_params *params);
void cfg80211_process_rdev_events(struct cfg80211_registered_device *rdev);
int cfg80211_can_change_interface(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev,
enum nl80211_iftype iftype);
static inline int
cfg80211_can_add_interface(struct cfg80211_registered_device *rdev,
enum nl80211_iftype iftype)
struct ieee80211_channel *
rdev_freq_to_chan(struct cfg80211_registered_device *rdev,
int freq, enum nl80211_channel_type channel_type);
int cfg80211_set_freq(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev, int freq,
enum nl80211_channel_type channel_type);
u16 cfg80211_calculate_bitrate(struct rate_info *rate);
int cfg80211_validate_beacon_int(struct cfg80211_registered_device *rdev,
u32 beacon_int);
#define CFG80211_DEV_WARN_ON(cond)	WARN_ON(cond)
#define CFG80211_DEV_WARN_ON(cond)	()
