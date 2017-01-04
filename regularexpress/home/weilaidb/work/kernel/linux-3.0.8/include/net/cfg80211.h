#define __NET_CFG80211_H
enum ieee80211_band ;
enum ieee80211_channel_flags ;
#define IEEE80211_CHAN_NO_HT40 \
(IEEE80211_CHAN_NO_HT40PLUS | IEEE80211_CHAN_NO_HT40MINUS)
struct ieee80211_channel ;
enum ieee80211_rate_flags ;
struct ieee80211_rate ;
struct ieee80211_sta_ht_cap ;
struct ieee80211_supported_band ;
struct vif_params ;
struct key_params ;
enum survey_info_flags ;
struct survey_info ;
struct beacon_parameters ;
enum plink_actions ;
struct station_parameters ;
enum station_info_flags ;
enum rate_info_flags ;
struct rate_info ;
enum bss_param_flags ;
struct sta_bss_parameters ;
struct station_info ;
enum monitor_flags ;
enum mpath_info_flags ;
struct mpath_info ;
struct bss_parameters ;
struct mesh_config ;
struct mesh_setup ;
struct ieee80211_txq_params ;
struct wiphy;
struct cfg80211_ssid ;
struct cfg80211_scan_request ;
struct cfg80211_sched_scan_request ;
enum cfg80211_signal_type ;
struct cfg80211_bss ;
const u8 *ieee80211_bss_get_ie(struct cfg80211_bss *bss, u8 ie);
struct cfg80211_crypto_settings ;
struct cfg80211_auth_request ;
struct cfg80211_assoc_request ;
struct cfg80211_deauth_request ;
struct cfg80211_disassoc_request ;
struct cfg80211_ibss_params ;
struct cfg80211_connect_params ;
enum wiphy_params_flags ;
struct cfg80211_bitrate_mask ;
struct cfg80211_pmksa ;
struct cfg80211_wowlan_trig_pkt_pattern ;
struct cfg80211_wowlan ;
struct cfg80211_ops ;
enum wiphy_flags ;
struct ieee80211_iface_limit ;
struct ieee80211_iface_combination ;
struct mac_address ;
struct ieee80211_txrx_stypes ;
enum wiphy_wowlan_support_flags ;
struct wiphy_wowlan_support ;
struct wiphy ;
static inline struct net *wiphy_net(struct wiphy *wiphy)
static inline void wiphy_net_set(struct wiphy *wiphy, struct net *net)
static inline void *wiphy_priv(struct wiphy *wiphy)
static inline struct wiphy *priv_to_wiphy(void *priv)
static inline void set_wiphy_dev(struct wiphy *wiphy, struct device *dev)
static inline struct device *wiphy_dev(struct wiphy *wiphy)
static inline const char *wiphy_name(const struct wiphy *wiphy)
struct wiphy *wiphy_new(const struct cfg80211_ops *ops, int sizeof_priv);
extern int wiphy_register(struct wiphy *wiphy);
extern void wiphy_unregister(struct wiphy *wiphy);
extern void wiphy_free(struct wiphy *wiphy);
struct cfg80211_conn;
struct cfg80211_internal_bss;
struct cfg80211_cached_keys;
#define MAX_AUTH_BSSES		4
struct wireless_dev ;
static inline void *wdev_priv(struct wireless_dev *wdev)
extern int ieee80211_channel_to_frequency(int chan, enum ieee80211_band band);
extern int ieee80211_frequency_to_channel(int freq);
extern struct ieee80211_channel *__ieee80211_get_channel(struct wiphy *wiphy,
int freq);
static inline struct ieee80211_channel *
ieee80211_get_channel(struct wiphy *wiphy, int freq)
struct ieee80211_rate *
ieee80211_get_response_rate(struct ieee80211_supported_band *sband,
u32 basic_rates, int bitrate);
struct radiotap_align_size ;
struct ieee80211_radiotap_namespace ;
struct ieee80211_radiotap_vendor_namespaces ;
struct ieee80211_radiotap_iterator ;
extern int ieee80211_radiotap_iterator_init(
struct ieee80211_radiotap_iterator *iterator,
struct ieee80211_radiotap_header *radiotap_header,
int max_length, const struct ieee80211_radiotap_vendor_namespaces *vns);
extern int ieee80211_radiotap_iterator_next(
struct ieee80211_radiotap_iterator *iterator);
extern const unsigned char rfc1042_header[6];
extern const unsigned char bridge_tunnel_header[6];
unsigned int ieee80211_get_hdrlen_from_skb(const struct sk_buff *skb);
unsigned int __attribute_const__ ieee80211_hdrlen(__le16 fc);
int ieee80211_data_to_8023(struct sk_buff *skb, const u8 *addr,
enum nl80211_iftype iftype);
int ieee80211_data_from_8023(struct sk_buff *skb, const u8 *addr,
enum nl80211_iftype iftype, u8 *bssid, bool qos);
void ieee80211_amsdu_to_8023s(struct sk_buff *skb, struct sk_buff_head *list,
const u8 *addr, enum nl80211_iftype iftype,
const unsigned int extra_headroom,
bool has_80211_header);
unsigned int cfg80211_classify8021d(struct sk_buff *skb);
const u8 *cfg80211_find_ie(u8 eid, const u8 *ies, int len);
extern int regulatory_hint(struct wiphy *wiphy, const char *alpha2);
extern void wiphy_apply_custom_regulatory(
struct wiphy *wiphy,
const struct ieee80211_regdomain *regd);
extern int freq_reg_info(struct wiphy *wiphy,
u32 center_freq,
u32 desired_bw_khz,
const struct ieee80211_reg_rule **reg_rule);
int cfg80211_wext_giwname(struct net_device *dev,
struct iw_request_info *info,
char *name, char *extra);
int cfg80211_wext_siwmode(struct net_device *dev, struct iw_request_info *info,
u32 *mode, char *extra);
int cfg80211_wext_giwmode(struct net_device *dev, struct iw_request_info *info,
u32 *mode, char *extra);
int cfg80211_wext_siwscan(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra);
int cfg80211_wext_giwscan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra);
int cfg80211_wext_siwmlme(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra);
int cfg80211_wext_giwrange(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra);
int cfg80211_wext_siwgenie(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra);
int cfg80211_wext_siwauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra);
int cfg80211_wext_giwauth(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *data, char *extra);
int cfg80211_wext_siwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra);
int cfg80211_wext_giwfreq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *freq, char *extra);
int cfg80211_wext_siwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid);
int cfg80211_wext_giwessid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *ssid);
int cfg80211_wext_siwrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rate, char *extra);
int cfg80211_wext_giwrate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rate, char *extra);
int cfg80211_wext_siwrts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra);
int cfg80211_wext_giwrts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *rts, char *extra);
int cfg80211_wext_siwfrag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *frag, char *extra);
int cfg80211_wext_giwfrag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *frag, char *extra);
int cfg80211_wext_siwretry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *retry, char *extra);
int cfg80211_wext_giwretry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *retry, char *extra);
int cfg80211_wext_siwencodeext(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *extra);
int cfg80211_wext_siwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *keybuf);
int cfg80211_wext_giwencode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *erq, char *keybuf);
int cfg80211_wext_siwtxpower(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *data, char *keybuf);
int cfg80211_wext_giwtxpower(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *data, char *keybuf);
struct iw_statistics *cfg80211_wireless_stats(struct net_device *dev);
int cfg80211_wext_siwpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *wrq, char *extra);
int cfg80211_wext_giwpower(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *wrq, char *extra);
int cfg80211_wext_siwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra);
int cfg80211_wext_giwap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *ap_addr, char *extra);
int cfg80211_wext_siwpmksa(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *data, char *extra);
void cfg80211_scan_done(struct cfg80211_scan_request *request, bool aborted);
void cfg80211_sched_scan_results(struct wiphy *wiphy);
void cfg80211_sched_scan_stopped(struct wiphy *wiphy);
struct cfg80211_bss*
cfg80211_inform_bss_frame(struct wiphy *wiphy,
struct ieee80211_channel *channel,
struct ieee80211_mgmt *mgmt, size_t len,
s32 signal, gfp_t gfp);
struct cfg80211_bss*
cfg80211_inform_bss(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *bssid,
u64 timestamp, u16 capability, u16 beacon_interval,
const u8 *ie, size_t ielen,
s32 signal, gfp_t gfp);
struct cfg80211_bss *cfg80211_get_bss(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *bssid,
const u8 *ssid, size_t ssid_len,
u16 capa_mask, u16 capa_val);
static inline struct cfg80211_bss *
cfg80211_get_ibss(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *ssid, size_t ssid_len)
struct cfg80211_bss *cfg80211_get_mesh(struct wiphy *wiphy,
struct ieee80211_channel *channel,
const u8 *meshid, size_t meshidlen,
const u8 *meshcfg);
void cfg80211_put_bss(struct cfg80211_bss *bss);
void cfg80211_unlink_bss(struct wiphy *wiphy, struct cfg80211_bss *bss);
void cfg80211_send_rx_auth(struct net_device *dev, const u8 *buf, size_t len);
void cfg80211_send_auth_timeout(struct net_device *dev, const u8 *addr);
void __cfg80211_auth_canceled(struct net_device *dev, const u8 *addr);
void cfg80211_send_rx_assoc(struct net_device *dev, const u8 *buf, size_t len);
void cfg80211_send_assoc_timeout(struct net_device *dev, const u8 *addr);
void cfg80211_send_deauth(struct net_device *dev, const u8 *buf, size_t len);
void __cfg80211_send_deauth(struct net_device *dev, const u8 *buf, size_t len);
void cfg80211_send_disassoc(struct net_device *dev, const u8 *buf, size_t len);
void __cfg80211_send_disassoc(struct net_device *dev, const u8 *buf,
size_t len);
void cfg80211_send_unprot_deauth(struct net_device *dev, const u8 *buf,
size_t len);
void cfg80211_send_unprot_disassoc(struct net_device *dev, const u8 *buf,
size_t len);
void cfg80211_michael_mic_failure(struct net_device *dev, const u8 *addr,
enum nl80211_key_type key_type, int key_id,
const u8 *tsc, gfp_t gfp);
void cfg80211_ibss_joined(struct net_device *dev, const u8 *bssid, gfp_t gfp);
void cfg80211_notify_new_peer_candidate(struct net_device *dev,
const u8 *macaddr, const u8 *ie, u8 ie_len, gfp_t gfp);
void wiphy_rfkill_set_hw_state(struct wiphy *wiphy, bool blocked);
void wiphy_rfkill_start_polling(struct wiphy *wiphy);
void wiphy_rfkill_stop_polling(struct wiphy *wiphy);
struct sk_buff *cfg80211_testmode_alloc_reply_skb(struct wiphy *wiphy,
int approxlen);
int cfg80211_testmode_reply(struct sk_buff *skb);
struct sk_buff *cfg80211_testmode_alloc_event_skb(struct wiphy *wiphy,
int approxlen, gfp_t gfp);
void cfg80211_testmode_event(struct sk_buff *skb, gfp_t gfp);
#define CFG80211_TESTMODE_CMD(cmd)	.testmode_cmd = (cmd),
#define CFG80211_TESTMODE_CMD(cmd)
void cfg80211_connect_result(struct net_device *dev, const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len,
u16 status, gfp_t gfp);
void cfg80211_roamed(struct net_device *dev,
struct ieee80211_channel *channel,
const u8 *bssid,
const u8 *req_ie, size_t req_ie_len,
const u8 *resp_ie, size_t resp_ie_len, gfp_t gfp);
void cfg80211_disconnected(struct net_device *dev, u16 reason,
u8 *ie, size_t ie_len, gfp_t gfp);
void cfg80211_ready_on_channel(struct net_device *dev, u64 cookie,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration, gfp_t gfp);
void cfg80211_remain_on_channel_expired(struct net_device *dev,
u64 cookie,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
gfp_t gfp);
void cfg80211_new_sta(struct net_device *dev, const u8 *mac_addr,
struct station_info *sinfo, gfp_t gfp);
void cfg80211_del_sta(struct net_device *dev, const u8 *mac_addr, gfp_t gfp);
bool cfg80211_rx_mgmt(struct net_device *dev, int freq, const u8 *buf,
size_t len, gfp_t gfp);
void cfg80211_mgmt_tx_status(struct net_device *dev, u64 cookie,
const u8 *buf, size_t len, bool ack, gfp_t gfp);
void cfg80211_cqm_rssi_notify(struct net_device *dev,
enum nl80211_cqm_rssi_threshold_event rssi_event,
gfp_t gfp);
void cfg80211_cqm_pktloss_notify(struct net_device *dev,
const u8 *peer, u32 num_packets, gfp_t gfp);
#define wiphy_printk(level, wiphy, format, args...)		\
dev_printk(level, &(wiphy)->dev, format, ##args)
#define wiphy_emerg(wiphy, format, args...)			\
dev_emerg(&(wiphy)->dev, format, ##args)
#define wiphy_alert(wiphy, format, args...)			\
dev_alert(&(wiphy)->dev, format, ##args)
#define wiphy_crit(wiphy, format, args...)			\
dev_crit(&(wiphy)->dev, format, ##args)
#define wiphy_err(wiphy, format, args...)			\
dev_err(&(wiphy)->dev, format, ##args)
#define wiphy_warn(wiphy, format, args...)			\
dev_warn(&(wiphy)->dev, format, ##args)
#define wiphy_notice(wiphy, format, args...)			\
dev_notice(&(wiphy)->dev, format, ##args)
#define wiphy_info(wiphy, format, args...)			\
dev_info(&(wiphy)->dev, format, ##args)
#define wiphy_debug(wiphy, format, args...)			\
wiphy_printk(KERN_DEBUG, wiphy, format, ##args)
#define wiphy_dbg(wiphy, format, args...)			\
dev_dbg(&(wiphy)->dev, format, ##args)
#if defined(VERBOSE_DEBUG)
#define wiphy_vdbg	wiphy_dbg
#define wiphy_vdbg(wiphy, format, args...)				\
()
#define wiphy_WARN(wiphy, format, args...)			\
WARN(1, "wiphy: %s\n" format, wiphy_name(wiphy), ##args);
