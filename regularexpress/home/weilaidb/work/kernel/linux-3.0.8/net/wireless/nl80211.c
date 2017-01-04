static int nl80211_pre_doit(struct genl_ops *ops, struct sk_buff *skb,
struct genl_info *info);
static void nl80211_post_doit(struct genl_ops *ops, struct sk_buff *skb,
struct genl_info *info);
static struct genl_family nl80211_fam = ;
static int get_rdev_dev_by_info_ifindex(struct genl_info *info,
struct cfg80211_registered_device **rdev,
struct net_device **dev)
static const struct nla_policy nl80211_policy[NL80211_ATTR_MAX+1] = ;
static const struct nla_policy nl80211_key_policy[NL80211_KEY_MAX + 1] = ;
static const struct nla_policy
nl80211_key_default_policy[NUM_NL80211_KEY_DEFAULT_TYPES] = ;
static const struct nla_policy
nl80211_wowlan_policy[NUM_NL80211_WOWLAN_TRIG] = ;
static int nl80211_get_ifidx(struct netlink_callback *cb)
static int nl80211_prepare_netdev_dump(struct sk_buff *skb,
struct netlink_callback *cb,
struct cfg80211_registered_device **rdev,
struct net_device **dev)
static void nl80211_finish_netdev_dump(struct cfg80211_registered_device *rdev)
static bool is_valid_ie_attr(const struct nlattr *attr)
static inline void *nl80211hdr_put(struct sk_buff *skb, u32 pid, u32 seq,
int flags, u8 cmd)
static int nl80211_msg_put_channel(struct sk_buff *msg,
struct ieee80211_channel *chan)
struct key_parse ;
static int nl80211_parse_key_new(struct nlattr *key, struct key_parse *k)
static int nl80211_parse_key_old(struct genl_info *info, struct key_parse *k)
static int nl80211_parse_key(struct genl_info *info, struct key_parse *k)
static struct cfg80211_cached_keys *
nl80211_parse_connkeys(struct cfg80211_registered_device *rdev,
struct nlattr *keys)
static int nl80211_key_allowed(struct wireless_dev *wdev)
static int nl80211_put_iftypes(struct sk_buff *msg, u32 attr, u16 ifmodes)
static int nl80211_put_iface_combinations(struct wiphy *wiphy,
struct sk_buff *msg)
static int nl80211_send_wiphy(struct sk_buff *msg, u32 pid, u32 seq, int flags,
struct cfg80211_registered_device *dev)
static int nl80211_dump_wiphy(struct sk_buff *skb, struct netlink_callback *cb)
static int nl80211_get_wiphy(struct sk_buff *skb, struct genl_info *info)
static const struct nla_policy txq_params_policy[NL80211_TXQ_ATTR_MAX + 1] = ;
static int parse_txq_params(struct nlattr *tb[],
struct ieee80211_txq_params *txq_params)
static bool nl80211_can_set_dev_channel(struct wireless_dev *wdev)
static int __nl80211_set_channel(struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev,
struct genl_info *info)
static int nl80211_set_channel(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_wds_peer(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_wiphy(struct sk_buff *skb, struct genl_info *info)
static int nl80211_send_iface(struct sk_buff *msg, u32 pid, u32 seq, int flags,
struct cfg80211_registered_device *rdev,
struct net_device *dev)
static int nl80211_dump_interface(struct sk_buff *skb, struct netlink_callback *cb)
static int nl80211_get_interface(struct sk_buff *skb, struct genl_info *info)
static const struct nla_policy mntr_flags_policy[NL80211_MNTR_FLAG_MAX + 1] = ;
static int parse_monitor_flags(struct nlattr *nla, u32 *mntrflags)
static int nl80211_valid_4addr(struct cfg80211_registered_device *rdev,
struct net_device *netdev, u8 use_4addr,
enum nl80211_iftype iftype)
static int nl80211_set_interface(struct sk_buff *skb, struct genl_info *info)
static int nl80211_new_interface(struct sk_buff *skb, struct genl_info *info)
static int nl80211_del_interface(struct sk_buff *skb, struct genl_info *info)
struct get_key_cookie ;
static void get_key_callback(void *c, struct key_params *params)
static int nl80211_get_key(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_key(struct sk_buff *skb, struct genl_info *info)
static int nl80211_new_key(struct sk_buff *skb, struct genl_info *info)
static int nl80211_del_key(struct sk_buff *skb, struct genl_info *info)
static int nl80211_addset_beacon(struct sk_buff *skb, struct genl_info *info)
static int nl80211_del_beacon(struct sk_buff *skb, struct genl_info *info)
static const struct nla_policy sta_flags_policy[NL80211_STA_FLAG_MAX + 1] = ;
static int parse_station_flags(struct genl_info *info,
struct station_parameters *params)
static bool nl80211_put_sta_rate(struct sk_buff *msg, struct rate_info *info,
int attr)
static int nl80211_send_station(struct sk_buff *msg, u32 pid, u32 seq,
int flags, struct net_device *dev,
const u8 *mac_addr, struct station_info *sinfo)
static int nl80211_dump_station(struct sk_buff *skb,
struct netlink_callback *cb)
static int nl80211_get_station(struct sk_buff *skb, struct genl_info *info)
static int get_vlan(struct genl_info *info,
struct cfg80211_registered_device *rdev,
struct net_device **vlan)
static int nl80211_set_station(struct sk_buff *skb, struct genl_info *info)
static int nl80211_new_station(struct sk_buff *skb, struct genl_info *info)
static int nl80211_del_station(struct sk_buff *skb, struct genl_info *info)
static int nl80211_send_mpath(struct sk_buff *msg, u32 pid, u32 seq,
int flags, struct net_device *dev,
u8 *dst, u8 *next_hop,
struct mpath_info *pinfo)
static int nl80211_dump_mpath(struct sk_buff *skb,
struct netlink_callback *cb)
static int nl80211_get_mpath(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_mpath(struct sk_buff *skb, struct genl_info *info)
static int nl80211_new_mpath(struct sk_buff *skb, struct genl_info *info)
static int nl80211_del_mpath(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_bss(struct sk_buff *skb, struct genl_info *info)
static const struct nla_policy reg_rule_policy[NL80211_REG_RULE_ATTR_MAX + 1] = ;
static int parse_reg_rule(struct nlattr *tb[],
struct ieee80211_reg_rule *reg_rule)
static int nl80211_req_set_reg(struct sk_buff *skb, struct genl_info *info)
static int nl80211_get_mesh_config(struct sk_buff *skb,
struct genl_info *info)
static const struct nla_policy nl80211_meshconf_params_policy[NL80211_MESHCONF_ATTR_MAX+1] = ;
static const struct nla_policy
nl80211_mesh_setup_params_policy[NL80211_MESH_SETUP_ATTR_MAX+1] = ;
static int nl80211_parse_mesh_config(struct genl_info *info,
struct mesh_config *cfg,
u32 *mask_out)
static int nl80211_parse_mesh_setup(struct genl_info *info,
struct mesh_setup *setup)
static int nl80211_update_mesh_config(struct sk_buff *skb,
struct genl_info *info)
static int nl80211_get_reg(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_reg(struct sk_buff *skb, struct genl_info *info)
static int validate_scan_freqs(struct nlattr *freqs)
static int nl80211_trigger_scan(struct sk_buff *skb, struct genl_info *info)
static int nl80211_start_sched_scan(struct sk_buff *skb,
struct genl_info *info)
static int nl80211_stop_sched_scan(struct sk_buff *skb,
struct genl_info *info)
static int nl80211_send_bss(struct sk_buff *msg, u32 pid, u32 seq, int flags,
struct cfg80211_registered_device *rdev,
struct wireless_dev *wdev,
struct cfg80211_internal_bss *intbss)
static int nl80211_dump_scan(struct sk_buff *skb,
struct netlink_callback *cb)
static int nl80211_send_survey(struct sk_buff *msg, u32 pid, u32 seq,
int flags, struct net_device *dev,
struct survey_info *survey)
static int nl80211_dump_survey(struct sk_buff *skb,
struct netlink_callback *cb)
static bool nl80211_valid_auth_type(enum nl80211_auth_type auth_type)
static bool nl80211_valid_wpa_versions(u32 wpa_versions)
static bool nl80211_valid_akm_suite(u32 akm)
static bool nl80211_valid_cipher_suite(u32 cipher)
static int nl80211_authenticate(struct sk_buff *skb, struct genl_info *info)
static int nl80211_crypto_settings(struct cfg80211_registered_device *rdev,
struct genl_info *info,
struct cfg80211_crypto_settings *settings,
int cipher_limit)
static int nl80211_associate(struct sk_buff *skb, struct genl_info *info)
static int nl80211_deauthenticate(struct sk_buff *skb, struct genl_info *info)
static int nl80211_disassociate(struct sk_buff *skb, struct genl_info *info)
static bool
nl80211_parse_mcast_rate(struct cfg80211_registered_device *rdev,
int mcast_rate[IEEE80211_NUM_BANDS],
int rateval)
static int nl80211_join_ibss(struct sk_buff *skb, struct genl_info *info)
static int nl80211_leave_ibss(struct sk_buff *skb, struct genl_info *info)
static struct genl_multicast_group nl80211_testmode_mcgrp = ;
static int nl80211_testmode_do(struct sk_buff *skb, struct genl_info *info)
static struct sk_buff *
__cfg80211_testmode_alloc_skb(struct cfg80211_registered_device *rdev,
int approxlen, u32 pid, u32 seq, gfp_t gfp)
struct sk_buff *cfg80211_testmode_alloc_reply_skb(struct wiphy *wiphy,
int approxlen)
EXPORT_SYMBOL(cfg80211_testmode_alloc_reply_skb);
int cfg80211_testmode_reply(struct sk_buff *skb)
EXPORT_SYMBOL(cfg80211_testmode_reply);
struct sk_buff *cfg80211_testmode_alloc_event_skb(struct wiphy *wiphy,
int approxlen, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_testmode_alloc_event_skb);
void cfg80211_testmode_event(struct sk_buff *skb, gfp_t gfp)
EXPORT_SYMBOL(cfg80211_testmode_event);
static int nl80211_connect(struct sk_buff *skb, struct genl_info *info)
static int nl80211_disconnect(struct sk_buff *skb, struct genl_info *info)
static int nl80211_wiphy_netns(struct sk_buff *skb, struct genl_info *info)
static int nl80211_setdel_pmksa(struct sk_buff *skb, struct genl_info *info)
static int nl80211_flush_pmksa(struct sk_buff *skb, struct genl_info *info)
static int nl80211_remain_on_channel(struct sk_buff *skb,
struct genl_info *info)
static int nl80211_cancel_remain_on_channel(struct sk_buff *skb,
struct genl_info *info)
static u32 rateset_to_mask(struct ieee80211_supported_band *sband,
u8 *rates, u8 rates_len)
static const struct nla_policy nl80211_txattr_policy[NL80211_TXRATE_MAX + 1] = ;
static int nl80211_set_tx_bitrate_mask(struct sk_buff *skb,
struct genl_info *info)
static int nl80211_register_mgmt(struct sk_buff *skb, struct genl_info *info)
static int nl80211_tx_mgmt(struct sk_buff *skb, struct genl_info *info)
static int nl80211_tx_mgmt_cancel_wait(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_power_save(struct sk_buff *skb, struct genl_info *info)
static int nl80211_get_power_save(struct sk_buff *skb, struct genl_info *info)
static struct nla_policy
nl80211_attr_cqm_policy[NL80211_ATTR_CQM_MAX + 1] __read_mostly = ;
static int nl80211_set_cqm_rssi(struct genl_info *info,
s32 threshold, u32 hysteresis)
static int nl80211_set_cqm(struct sk_buff *skb, struct genl_info *info)
static int nl80211_join_mesh(struct sk_buff *skb, struct genl_info *info)
static int nl80211_leave_mesh(struct sk_buff *skb, struct genl_info *info)
static int nl80211_get_wowlan(struct sk_buff *skb, struct genl_info *info)
static int nl80211_set_wowlan(struct sk_buff *skb, struct genl_info *info)
#define NL80211_FLAG_NEED_WIPHY		0x01
#define NL80211_FLAG_NEED_NETDEV	0x02
#define NL80211_FLAG_NEED_RTNL		0x04
#define NL80211_FLAG_CHECK_NETDEV_UP	0x08
#define NL80211_FLAG_NEED_NETDEV_UP	(NL80211_FLAG_NEED_NETDEV |\
NL80211_FLAG_CHECK_NETDEV_UP)
static int nl80211_pre_doit(struct genl_ops *ops, struct sk_buff *skb,
struct genl_info *info)
static void nl80211_post_doit(struct genl_ops *ops, struct sk_buff *skb,
struct genl_info *info)
static struct genl_ops nl80211_ops[] = ;
static struct genl_multicast_group nl80211_mlme_mcgrp = ;
static struct genl_multicast_group nl80211_config_mcgrp = ;
static struct genl_multicast_group nl80211_scan_mcgrp = ;
static struct genl_multicast_group nl80211_regulatory_mcgrp = ;
void nl80211_notify_dev_rename(struct cfg80211_registered_device *rdev)
static int nl80211_add_scan_req(struct sk_buff *msg,
struct cfg80211_registered_device *rdev)
static int nl80211_send_scan_msg(struct sk_buff *msg,
struct cfg80211_registered_device *rdev,
struct net_device *netdev,
u32 pid, u32 seq, int flags,
u32 cmd)
static int
nl80211_send_sched_scan_msg(struct sk_buff *msg,
struct cfg80211_registered_device *rdev,
struct net_device *netdev,
u32 pid, u32 seq, int flags, u32 cmd)
void nl80211_send_scan_start(struct cfg80211_registered_device *rdev,
struct net_device *netdev)
void nl80211_send_scan_done(struct cfg80211_registered_device *rdev,
struct net_device *netdev)
void nl80211_send_scan_aborted(struct cfg80211_registered_device *rdev,
struct net_device *netdev)
void nl80211_send_sched_scan_results(struct cfg80211_registered_device *rdev,
struct net_device *netdev)
void nl80211_send_sched_scan(struct cfg80211_registered_device *rdev,
struct net_device *netdev, u32 cmd)
void nl80211_send_reg_change_event(struct regulatory_request *request)
static void nl80211_send_mlme_event(struct cfg80211_registered_device *rdev,
struct net_device *netdev,
const u8 *buf, size_t len,
enum nl80211_commands cmd, gfp_t gfp)
void nl80211_send_rx_auth(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *buf,
size_t len, gfp_t gfp)
void nl80211_send_rx_assoc(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *buf,
size_t len, gfp_t gfp)
void nl80211_send_deauth(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *buf,
size_t len, gfp_t gfp)
void nl80211_send_disassoc(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *buf,
size_t len, gfp_t gfp)
void nl80211_send_unprot_deauth(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *buf,
size_t len, gfp_t gfp)
void nl80211_send_unprot_disassoc(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *buf,
size_t len, gfp_t gfp)
static void nl80211_send_mlme_timeout(struct cfg80211_registered_device *rdev,
struct net_device *netdev, int cmd,
const u8 *addr, gfp_t gfp)
void nl80211_send_auth_timeout(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *addr,
gfp_t gfp)
void nl80211_send_assoc_timeout(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *addr,
gfp_t gfp)
void nl80211_send_connect_result(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len,
u16 status, gfp_t gfp)
void nl80211_send_roamed(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len, gfp_t gfp)
void nl80211_send_disconnected(struct cfg80211_registered_device *rdev,
struct net_device *netdev, u16 reason,
const u8 *ie, size_t ie_len, bool from_ap)
void nl80211_send_ibss_bssid(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *bssid,
gfp_t gfp)
void nl80211_send_new_peer_candidate(struct cfg80211_registered_device *rdev,
struct net_device *netdev,
const u8 *macaddr, const u8* ie, u8 ie_len,
gfp_t gfp)
void nl80211_michael_mic_failure(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *addr,
enum nl80211_key_type key_type, int key_id,
const u8 *tsc, gfp_t gfp)
void nl80211_send_beacon_hint_event(struct wiphy *wiphy,
struct ieee80211_channel *channel_before,
struct ieee80211_channel *channel_after)
static void nl80211_send_remain_on_chan_event(
int cmd, struct cfg80211_registered_device *rdev,
struct net_device *netdev, u64 cookie,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration, gfp_t gfp)
void nl80211_send_remain_on_channel(struct cfg80211_registered_device *rdev,
struct net_device *netdev, u64 cookie,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration, gfp_t gfp)
void nl80211_send_remain_on_channel_cancel(
struct cfg80211_registered_device *rdev, struct net_device *netdev,
u64 cookie, struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type, gfp_t gfp)
void nl80211_send_sta_event(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *mac_addr,
struct station_info *sinfo, gfp_t gfp)
void nl80211_send_sta_del_event(struct cfg80211_registered_device *rdev,
struct net_device *dev, const u8 *mac_addr,
gfp_t gfp)
int nl80211_send_mgmt(struct cfg80211_registered_device *rdev,
struct net_device *netdev, u32 nlpid,
int freq, const u8 *buf, size_t len, gfp_t gfp)
void nl80211_send_mgmt_tx_status(struct cfg80211_registered_device *rdev,
struct net_device *netdev, u64 cookie,
const u8 *buf, size_t len, bool ack,
gfp_t gfp)
void
nl80211_send_cqm_rssi_notify(struct cfg80211_registered_device *rdev,
struct net_device *netdev,
enum nl80211_cqm_rssi_threshold_event rssi_event,
gfp_t gfp)
void
nl80211_send_cqm_pktloss_notify(struct cfg80211_registered_device *rdev,
struct net_device *netdev, const u8 *peer,
u32 num_packets, gfp_t gfp)
static int nl80211_netlink_notify(struct notifier_block * nb,
unsigned long state,
void *_notify)
static struct notifier_block nl80211_netlink_notifier = ;
int nl80211_init(void)
void nl80211_exit(void)
