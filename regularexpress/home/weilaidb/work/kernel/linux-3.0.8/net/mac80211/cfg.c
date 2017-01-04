static struct net_device *ieee80211_add_iface(struct wiphy *wiphy, char *name,
enum nl80211_iftype type,
u32 *flags,
struct vif_params *params)
static int ieee80211_del_iface(struct wiphy *wiphy, struct net_device *dev)
static int ieee80211_change_iface(struct wiphy *wiphy,
struct net_device *dev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static int ieee80211_add_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static int ieee80211_del_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr)
static int ieee80211_get_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr,
void *cookie,
void (*callback)(void *cookie,
struct key_params *params))
static int ieee80211_config_default_key(struct wiphy *wiphy,
struct net_device *dev,
u8 key_idx, bool uni,
bool multi)
static int ieee80211_config_default_mgmt_key(struct wiphy *wiphy,
struct net_device *dev,
u8 key_idx)
static void rate_idx_to_bitrate(struct rate_info *rate, struct sta_info *sta, int idx)
static void sta_set_sinfo(struct sta_info *sta, struct station_info *sinfo)
static int ieee80211_dump_station(struct wiphy *wiphy, struct net_device *dev,
int idx, u8 *mac, struct station_info *sinfo)
static int ieee80211_dump_survey(struct wiphy *wiphy, struct net_device *dev,
int idx, struct survey_info *survey)
static int ieee80211_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
static int ieee80211_config_beacon(struct ieee80211_sub_if_data *sdata,
struct beacon_parameters *params)
static int ieee80211_add_beacon(struct wiphy *wiphy, struct net_device *dev,
struct beacon_parameters *params)
static int ieee80211_set_beacon(struct wiphy *wiphy, struct net_device *dev,
struct beacon_parameters *params)
static int ieee80211_del_beacon(struct wiphy *wiphy, struct net_device *dev)
struct iapp_layer2_update  __packed;
static void ieee80211_send_layer2_update(struct sta_info *sta)
static void sta_apply_parameters(struct ieee80211_local *local,
struct sta_info *sta,
struct station_parameters *params)
static int ieee80211_add_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_parameters *params)
static int ieee80211_del_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac)
static int ieee80211_change_station(struct wiphy *wiphy,
struct net_device *dev,
u8 *mac,
struct station_parameters *params)
static int ieee80211_add_mpath(struct wiphy *wiphy, struct net_device *dev,
u8 *dst, u8 *next_hop)
static int ieee80211_del_mpath(struct wiphy *wiphy, struct net_device *dev,
u8 *dst)
static int ieee80211_change_mpath(struct wiphy *wiphy,
struct net_device *dev,
u8 *dst, u8 *next_hop)
static void mpath_set_pinfo(struct mesh_path *mpath, u8 *next_hop,
struct mpath_info *pinfo)
static int ieee80211_get_mpath(struct wiphy *wiphy, struct net_device *dev,
u8 *dst, u8 *next_hop, struct mpath_info *pinfo)
static int ieee80211_dump_mpath(struct wiphy *wiphy, struct net_device *dev,
int idx, u8 *dst, u8 *next_hop,
struct mpath_info *pinfo)
static int ieee80211_get_mesh_config(struct wiphy *wiphy,
struct net_device *dev,
struct mesh_config *conf)
static inline bool _chg_mesh_attr(enum nl80211_meshconf_params parm, u32 mask)
static int copy_mesh_setup(struct ieee80211_if_mesh *ifmsh,
const struct mesh_setup *setup)
static int ieee80211_update_mesh_config(struct wiphy *wiphy,
struct net_device *dev, u32 mask,
const struct mesh_config *nconf)
static int ieee80211_join_mesh(struct wiphy *wiphy, struct net_device *dev,
const struct mesh_config *conf,
const struct mesh_setup *setup)
static int ieee80211_leave_mesh(struct wiphy *wiphy, struct net_device *dev)
static int ieee80211_change_bss(struct wiphy *wiphy,
struct net_device *dev,
struct bss_parameters *params)
static int ieee80211_set_txq_params(struct wiphy *wiphy,
struct ieee80211_txq_params *params)
static int ieee80211_set_channel(struct wiphy *wiphy,
struct net_device *netdev,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type)
static int ieee80211_suspend(struct wiphy *wiphy,
struct cfg80211_wowlan *wowlan)
static int ieee80211_resume(struct wiphy *wiphy)
#define ieee80211_suspend NULL
#define ieee80211_resume NULL
static int ieee80211_scan(struct wiphy *wiphy,
struct net_device *dev,
struct cfg80211_scan_request *req)
static int
ieee80211_sched_scan_start(struct wiphy *wiphy,
struct net_device *dev,
struct cfg80211_sched_scan_request *req)
static int
ieee80211_sched_scan_stop(struct wiphy *wiphy, struct net_device *dev)
static int ieee80211_auth(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_auth_request *req)
static int ieee80211_assoc(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_assoc_request *req)
static int ieee80211_deauth(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_deauth_request *req,
void *cookie)
static int ieee80211_disassoc(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_disassoc_request *req,
void *cookie)
static int ieee80211_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
static int ieee80211_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static int ieee80211_set_wiphy_params(struct wiphy *wiphy, u32 changed)
static int ieee80211_set_tx_power(struct wiphy *wiphy,
enum nl80211_tx_power_setting type, int mbm)
static int ieee80211_get_tx_power(struct wiphy *wiphy, int *dbm)
static int ieee80211_set_wds_peer(struct wiphy *wiphy, struct net_device *dev,
const u8 *addr)
static void ieee80211_rfkill_poll(struct wiphy *wiphy)
static int ieee80211_testmode_cmd(struct wiphy *wiphy, void *data, int len)
int __ieee80211_request_smps(struct ieee80211_sub_if_data *sdata,
enum ieee80211_smps_mode smps_mode)
static int ieee80211_set_power_mgmt(struct wiphy *wiphy, struct net_device *dev,
bool enabled, int timeout)
static int ieee80211_set_cqm_rssi_config(struct wiphy *wiphy,
struct net_device *dev,
s32 rssi_thold, u32 rssi_hyst)
static int ieee80211_set_bitrate_mask(struct wiphy *wiphy,
struct net_device *dev,
const u8 *addr,
const struct cfg80211_bitrate_mask *mask)
static int ieee80211_remain_on_channel_hw(struct ieee80211_local *local,
struct net_device *dev,
struct ieee80211_channel *chan,
enum nl80211_channel_type chantype,
unsigned int duration, u64 *cookie)
static int ieee80211_remain_on_channel(struct wiphy *wiphy,
struct net_device *dev,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration,
u64 *cookie)
static int ieee80211_cancel_remain_on_channel_hw(struct ieee80211_local *local,
u64 cookie)
static int ieee80211_cancel_remain_on_channel(struct wiphy *wiphy,
struct net_device *dev,
u64 cookie)
static enum work_done_result
ieee80211_offchan_tx_done(struct ieee80211_work *wk, struct sk_buff *skb)
static int ieee80211_mgmt_tx(struct wiphy *wiphy, struct net_device *dev,
struct ieee80211_channel *chan, bool offchan,
enum nl80211_channel_type channel_type,
bool channel_type_valid, unsigned int wait,
const u8 *buf, size_t len, u64 *cookie)
static int ieee80211_mgmt_tx_cancel_wait(struct wiphy *wiphy,
struct net_device *dev,
u64 cookie)
static void ieee80211_mgmt_frame_register(struct wiphy *wiphy,
struct net_device *dev,
u16 frame_type, bool reg)
static int ieee80211_set_antenna(struct wiphy *wiphy, u32 tx_ant, u32 rx_ant)
static int ieee80211_get_antenna(struct wiphy *wiphy, u32 *tx_ant, u32 *rx_ant)
static int ieee80211_set_ringparam(struct wiphy *wiphy, u32 tx, u32 rx)
static void ieee80211_get_ringparam(struct wiphy *wiphy,
u32 *tx, u32 *tx_max, u32 *rx, u32 *rx_max)
struct cfg80211_ops mac80211_config_ops = ;
