void sdioh_sdio_set_host_pm_flags(int flag);
static struct sdio_func *cfg80211_sdio_func;
static struct wl_dev *wl_cfg80211_dev;
static const u8 ether_bcast[ETH_ALEN] = ;
u32 wl_dbg_level = WL_DBG_ERR;
#define WL_4329_FW_FILE "brcm/bcm4329-fullmac-4.bin"
#define WL_4329_NVRAM_FILE "brcm/bcm4329-fullmac-4.txt"
static s32 wl_cfg80211_change_iface(struct wiphy *wiphy,
struct net_device *ndev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params);
static s32 __wl_cfg80211_scan(struct wiphy *wiphy, struct net_device *ndev,
struct cfg80211_scan_request *request,
struct cfg80211_ssid *this_ssid);
static s32 wl_cfg80211_scan(struct wiphy *wiphy, struct net_device *ndev,
struct cfg80211_scan_request *request);
static s32 wl_cfg80211_set_wiphy_params(struct wiphy *wiphy, u32 changed);
static s32 wl_cfg80211_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params);
static s32 wl_cfg80211_leave_ibss(struct wiphy *wiphy,
struct net_device *dev);
static s32 wl_cfg80211_get_station(struct wiphy *wiphy,
struct net_device *dev, u8 *mac,
struct station_info *sinfo);
static s32 wl_cfg80211_set_power_mgmt(struct wiphy *wiphy,
struct net_device *dev, bool enabled,
s32 timeout);
static s32 wl_cfg80211_set_bitrate_mask(struct wiphy *wiphy,
struct net_device *dev,
const u8 *addr,
const struct cfg80211_bitrate_mask
*mask);
static int wl_cfg80211_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme);
static s32 wl_cfg80211_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code);
static s32 wl_cfg80211_set_tx_power(struct wiphy *wiphy,
enum nl80211_tx_power_setting type,
s32 dbm);
static s32 wl_cfg80211_get_tx_power(struct wiphy *wiphy, s32 *dbm);
static s32 wl_cfg80211_config_default_key(struct wiphy *wiphy,
struct net_device *dev, u8 key_idx,
bool unicast, bool multicast);
static s32 wl_cfg80211_add_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr,
struct key_params *params);
static s32 wl_cfg80211_del_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr);
static s32 wl_cfg80211_get_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr,
void *cookie, void (*callback) (void *cookie,
struct
key_params *
params));
static s32 wl_cfg80211_config_default_mgmt_key(struct wiphy *wiphy,
struct net_device *dev,
u8 key_idx);
static s32 wl_cfg80211_resume(struct wiphy *wiphy);
static s32 wl_cfg80211_suspend(struct wiphy *wiphy);
static s32 wl_cfg80211_set_pmksa(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_pmksa *pmksa);
static s32 wl_cfg80211_del_pmksa(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_pmksa *pmksa);
static s32 wl_cfg80211_flush_pmksa(struct wiphy *wiphy,
struct net_device *dev);
static s32 wl_create_event_handler(struct wl_priv *wl);
static void wl_destroy_event_handler(struct wl_priv *wl);
static s32 wl_event_handler(void *data);
static void wl_init_eq(struct wl_priv *wl);
static void wl_flush_eq(struct wl_priv *wl);
static void wl_lock_eq(struct wl_priv *wl);
static void wl_unlock_eq(struct wl_priv *wl);
static void wl_init_eq_lock(struct wl_priv *wl);
static void wl_init_eloop_handler(struct wl_event_loop *el);
static struct wl_event_q *wl_deq_event(struct wl_priv *wl);
static s32 wl_enq_event(struct wl_priv *wl, u32 type,
const wl_event_msg_t *msg, void *data);
static void wl_put_event(struct wl_event_q *e);
static void wl_wakeup_event(struct wl_priv *wl);
static s32 wl_notify_connect_status(struct wl_priv *wl,
struct net_device *ndev,
const wl_event_msg_t *e, void *data);
static s32 wl_notify_roaming_status(struct wl_priv *wl,
struct net_device *ndev,
const wl_event_msg_t *e, void *data);
static s32 wl_notify_scan_status(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data);
static s32 wl_bss_connect_done(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data,
bool completed);
static s32 wl_bss_roaming_done(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data);
static s32 wl_notify_mic_status(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data);
struct sdio_func *wl_cfg80211_get_sdio_func(void);
static void wl_clear_sdio_func(void);
static s32 wl_dev_bufvar_get(struct net_device *dev, s8 *name, s8 *buf,
s32 buf_len);
static __used s32 wl_dev_bufvar_set(struct net_device *dev, s8 *name,
s8 *buf, s32 len);
static s32 wl_dev_intvar_set(struct net_device *dev, s8 *name, s32 val);
static s32 wl_dev_intvar_get(struct net_device *dev, s8 *name,
s32 *retval);
static s32 wl_dev_ioctl(struct net_device *dev, u32 cmd, void *arg,
u32 len);
static s32 wl_set_frag(struct net_device *dev, u32 frag_threshold);
static s32 wl_set_rts(struct net_device *dev, u32 frag_threshold);
static s32 wl_set_retry(struct net_device *dev, u32 retry, bool l);
static s32 wl_update_prof(struct wl_priv *wl, const wl_event_msg_t *e,
void *data, s32 item);
static void *wl_read_prof(struct wl_priv *wl, s32 item);
static void wl_init_prof(struct wl_profile *prof);
static s32 wl_set_wpa_version(struct net_device *dev,
struct cfg80211_connect_params *sme);
static s32 wl_set_auth_type(struct net_device *dev,
struct cfg80211_connect_params *sme);
static s32 wl_set_set_cipher(struct net_device *dev,
struct cfg80211_connect_params *sme);
static s32 wl_set_key_mgmt(struct net_device *dev,
struct cfg80211_connect_params *sme);
static s32 wl_set_set_sharedkey(struct net_device *dev,
struct cfg80211_connect_params *sme);
static s32 wl_get_assoc_ies(struct wl_priv *wl);
static void wl_clear_assoc_ies(struct wl_priv *wl);
static void wl_ch_to_chanspec(int ch,
struct wl_join_params *join_params, size_t *join_params_size);
static __used s32 wl_add_ie(struct wl_priv *wl, u8 t, u8 l, u8 *v);
static s32 wl_mode_to_nl80211_iftype(s32 mode);
static struct wireless_dev *wl_alloc_wdev(s32 sizeof_iface,
struct device *dev);
static void wl_free_wdev(struct wl_priv *wl);
static s32 wl_inform_bss(struct wl_priv *wl);
static s32 wl_inform_single_bss(struct wl_priv *wl, struct wl_bss_info *bi);
static s32 wl_update_bss_info(struct wl_priv *wl);
static s32 wl_add_keyext(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, const u8 *mac_addr,
struct key_params *params);
static void swap_key_from_BE(struct wl_wsec_key *key);
static void swap_key_to_BE(struct wl_wsec_key *key);
static s32 wl_init_priv_mem(struct wl_priv *wl);
static void wl_deinit_priv_mem(struct wl_priv *wl);
static void wl_delay(u32 ms);
static void wl_set_drvdata(struct wl_dev *dev, void *data);
static void *wl_get_drvdata(struct wl_dev *dev);
static bool wl_is_ibssmode(struct wl_priv *wl);
static bool wl_is_linkdown(struct wl_priv *wl, const wl_event_msg_t *e);
static bool wl_is_linkup(struct wl_priv *wl, const wl_event_msg_t *e);
static bool wl_is_nonetwork(struct wl_priv *wl, const wl_event_msg_t *e);
static void wl_link_down(struct wl_priv *wl);
static s32 wl_dongle_mode(struct net_device *ndev, s32 iftype);
static s32 __wl_cfg80211_up(struct wl_priv *wl);
static s32 __wl_cfg80211_down(struct wl_priv *wl);
static s32 wl_dongle_probecap(struct wl_priv *wl);
static void wl_init_conf(struct wl_conf *conf);
static s32 wl_dongle_mode(struct net_device *ndev, s32 iftype);
static s32 wl_dongle_country(struct net_device *ndev, u8 ccode);
static s32 wl_dongle_up(struct net_device *ndev, u32 up);
static s32 wl_dongle_power(struct net_device *ndev, u32 power_mode);
static s32 wl_dongle_glom(struct net_device *ndev, u32 glom,
u32 dongle_align);
static s32 wl_dongle_offload(struct net_device *ndev, s32 arpoe,
s32 arp_ol);
static s32 wl_pattern_atoh(s8 *src, s8 *dst);
static s32 wl_dongle_filter(struct net_device *ndev, u32 filter_mode);
static s32 wl_update_wiphybands(struct wl_priv *wl);
static s32 wl_dongle_eventmsg(struct net_device *ndev);
static s32 wl_dongle_scantime(struct net_device *ndev, s32 scan_assoc_time,
s32 scan_unassoc_time, s32 scan_passive_time);
static s32 wl_config_dongle(struct wl_priv *wl, bool need_lock);
static s32 wl_dongle_roam(struct net_device *ndev, u32 roamvar,
u32 bcn_timeout);
static void wl_iscan_timer(unsigned long data);
static void wl_term_iscan(struct wl_priv *wl);
static s32 wl_init_iscan(struct wl_priv *wl);
static s32 wl_iscan_thread(void *data);
static s32 wl_dev_iovar_setbuf(struct net_device *dev, s8 *iovar,
void *param, s32 paramlen, void *bufptr,
s32 buflen);
static s32 wl_dev_iovar_getbuf(struct net_device *dev, s8 *iovar,
void *param, s32 paramlen, void *bufptr,
s32 buflen);
static s32 wl_run_iscan(struct wl_iscan_ctrl *iscan, struct wlc_ssid *ssid,
u16 action);
static s32 wl_do_iscan(struct wl_priv *wl);
static s32 wl_wakeup_iscan(struct wl_iscan_ctrl *iscan);
static s32 wl_invoke_iscan(struct wl_priv *wl);
static s32 wl_get_iscan_results(struct wl_iscan_ctrl *iscan, u32 *status,
struct wl_scan_results **bss_list);
static void wl_notify_iscan_complete(struct wl_iscan_ctrl *iscan, bool aborted);
static void wl_init_iscan_eloop(struct wl_iscan_eloop *el);
static s32 wl_iscan_done(struct wl_priv *wl);
static s32 wl_iscan_pending(struct wl_priv *wl);
static s32 wl_iscan_inprogress(struct wl_priv *wl);
static s32 wl_iscan_aborted(struct wl_priv *wl);
static void wl_init_fw(struct wl_fw_ctrl *fw);
static __used u32 wl_find_msb(u16 bit16);
static __used s32 wl_update_pmklist(struct net_device *dev,
struct wl_pmk_list *pmk_list, s32 err);
static void wl_set_mpc(struct net_device *ndev, int mpc);
static int wl_debugfs_add_netdev_params(struct wl_priv *wl);
static void wl_debugfs_remove_netdev(struct wl_priv *wl);
#define WL_PRIV_GET() 							\
()
#define CHECK_SYS_UP()							\
do  while (0)
extern int dhd_wait_pend8021x(struct net_device *dev);
#define CHAN2G(_channel, _freq, _flags)
#define CHAN5G(_channel, _flags)
#define RATE_TO_BASE100KBPS(rate)   (((rate) * 10) / 2)
#define RATETAB_ENT(_rateid, _flags) \
static struct ieee80211_rate __wl_rates[] = ;
#define wl_a_rates		(__wl_rates + 4)
#define wl_a_rates_size	8
#define wl_g_rates		(__wl_rates + 0)
#define wl_g_rates_size	12
static struct ieee80211_channel __wl_2ghz_channels[] = ;
static struct ieee80211_channel __wl_5ghz_a_channels[] = ;
static struct ieee80211_channel __wl_5ghz_n_channels[] = ;
static struct ieee80211_supported_band __wl_band_2ghz = ;
static struct ieee80211_supported_band __wl_band_5ghz_a = ;
static struct ieee80211_supported_band __wl_band_5ghz_n = ;
static const u32 __wl_cipher_suites[] = ;
static void swap_key_from_BE(struct wl_wsec_key *key)
static void swap_key_to_BE(struct wl_wsec_key *key)
static s32
wl_dev_ioctl(struct net_device *dev, u32 cmd, void *arg, u32 len)
static s32
wl_cfg80211_change_iface(struct wiphy *wiphy, struct net_device *ndev,
enum nl80211_iftype type, u32 *flags,
struct vif_params *params)
static void wl_iscan_prep(struct wl_scan_params *params, struct wlc_ssid *ssid)
static s32
wl_dev_iovar_setbuf(struct net_device *dev, s8 * iovar, void *param,
s32 paramlen, void *bufptr, s32 buflen)
static s32
wl_dev_iovar_getbuf(struct net_device *dev, s8 * iovar, void *param,
s32 paramlen, void *bufptr, s32 buflen)
static s32
wl_run_iscan(struct wl_iscan_ctrl *iscan, struct wlc_ssid *ssid, u16 action)
static s32 wl_do_iscan(struct wl_priv *wl)
static s32
__wl_cfg80211_scan(struct wiphy *wiphy, struct net_device *ndev,
struct cfg80211_scan_request *request,
struct cfg80211_ssid *this_ssid)
static s32
wl_cfg80211_scan(struct wiphy *wiphy, struct net_device *ndev,
struct cfg80211_scan_request *request)
static s32 wl_dev_intvar_set(struct net_device *dev, s8 *name, s32 val)
static s32
wl_dev_intvar_get(struct net_device *dev, s8 *name, s32 *retval)
static s32 wl_set_rts(struct net_device *dev, u32 rts_threshold)
static s32 wl_set_frag(struct net_device *dev, u32 frag_threshold)
static s32 wl_set_retry(struct net_device *dev, u32 retry, bool l)
static s32 wl_cfg80211_set_wiphy_params(struct wiphy *wiphy, u32 changed)
static s32
wl_cfg80211_join_ibss(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_ibss_params *params)
static s32 wl_cfg80211_leave_ibss(struct wiphy *wiphy, struct net_device *dev)
static s32
wl_set_wpa_version(struct net_device *dev, struct cfg80211_connect_params *sme)
static s32
wl_set_auth_type(struct net_device *dev, struct cfg80211_connect_params *sme)
static s32
wl_set_set_cipher(struct net_device *dev, struct cfg80211_connect_params *sme)
static s32
wl_set_key_mgmt(struct net_device *dev, struct cfg80211_connect_params *sme)
static s32
wl_set_set_sharedkey(struct net_device *dev,
struct cfg80211_connect_params *sme)
static s32
wl_cfg80211_connect(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_connect_params *sme)
static s32
wl_cfg80211_disconnect(struct wiphy *wiphy, struct net_device *dev,
u16 reason_code)
static s32
wl_cfg80211_set_tx_power(struct wiphy *wiphy,
enum nl80211_tx_power_setting type, s32 dbm)
static s32 wl_cfg80211_get_tx_power(struct wiphy *wiphy, s32 *dbm)
static s32
wl_cfg80211_config_default_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool unicast, bool multicast)
static s32
wl_add_keyext(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, const u8 *mac_addr, struct key_params *params)
static s32
wl_cfg80211_add_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr,
struct key_params *params)
static s32
wl_cfg80211_del_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr)
static s32
wl_cfg80211_get_key(struct wiphy *wiphy, struct net_device *dev,
u8 key_idx, bool pairwise, const u8 *mac_addr, void *cookie,
void (*callback) (void *cookie, struct key_params * params))
static s32
wl_cfg80211_config_default_mgmt_key(struct wiphy *wiphy,
struct net_device *dev, u8 key_idx)
static s32
wl_cfg80211_get_station(struct wiphy *wiphy, struct net_device *dev,
u8 *mac, struct station_info *sinfo)
static s32
wl_cfg80211_set_power_mgmt(struct wiphy *wiphy, struct net_device *dev,
bool enabled, s32 timeout)
static __used u32 wl_find_msb(u16 bit16)
static s32
wl_cfg80211_set_bitrate_mask(struct wiphy *wiphy, struct net_device *dev,
const u8 *addr,
const struct cfg80211_bitrate_mask *mask)
static s32 wl_cfg80211_resume(struct wiphy *wiphy)
static s32 wl_cfg80211_suspend(struct wiphy *wiphy)
static __used s32
wl_update_pmklist(struct net_device *dev, struct wl_pmk_list *pmk_list,
s32 err)
static s32
wl_cfg80211_set_pmksa(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_pmksa *pmksa)
static s32
wl_cfg80211_del_pmksa(struct wiphy *wiphy, struct net_device *dev,
struct cfg80211_pmksa *pmksa)
static s32
wl_cfg80211_flush_pmksa(struct wiphy *wiphy, struct net_device *dev)
static struct cfg80211_ops wl_cfg80211_ops = ;
static s32 wl_mode_to_nl80211_iftype(s32 mode)
static struct wireless_dev *wl_alloc_wdev(s32 sizeof_iface,
struct device *dev)
static void wl_free_wdev(struct wl_priv *wl)
static s32 wl_inform_bss(struct wl_priv *wl)
static s32 wl_inform_single_bss(struct wl_priv *wl, struct wl_bss_info *bi)
static s32
wl_inform_ibss(struct wl_priv *wl, struct net_device *dev, const u8 *bssid)
static bool wl_is_linkup(struct wl_priv *wl, const wl_event_msg_t *e)
static bool wl_is_linkdown(struct wl_priv *wl, const wl_event_msg_t *e)
static bool wl_is_nonetwork(struct wl_priv *wl, const wl_event_msg_t *e)
static s32
wl_notify_connect_status(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data)
static s32
wl_notify_roaming_status(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data)
static __used s32
wl_dev_bufvar_set(struct net_device *dev, s8 *name, s8 *buf, s32 len)
static s32
wl_dev_bufvar_get(struct net_device *dev, s8 *name, s8 *buf,
s32 buf_len)
static s32 wl_get_assoc_ies(struct wl_priv *wl)
static void wl_clear_assoc_ies(struct wl_priv *wl)
static void wl_ch_to_chanspec(int ch, struct wl_join_params *join_params,
size_t *join_params_size)
static s32 wl_update_bss_info(struct wl_priv *wl)
static s32
wl_bss_roaming_done(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data)
static s32
wl_bss_connect_done(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data, bool completed)
static s32
wl_notify_mic_status(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data)
static s32
wl_notify_scan_status(struct wl_priv *wl, struct net_device *ndev,
const wl_event_msg_t *e, void *data)
static void wl_init_conf(struct wl_conf *conf)
static void wl_init_prof(struct wl_profile *prof)
static void wl_init_eloop_handler(struct wl_event_loop *el)
static s32 wl_init_priv_mem(struct wl_priv *wl)
static void wl_deinit_priv_mem(struct wl_priv *wl)
static s32 wl_create_event_handler(struct wl_priv *wl)
static void wl_destroy_event_handler(struct wl_priv *wl)
static void wl_term_iscan(struct wl_priv *wl)
static void wl_notify_iscan_complete(struct wl_iscan_ctrl *iscan, bool aborted)
static s32 wl_wakeup_iscan(struct wl_iscan_ctrl *iscan)
static s32
wl_get_iscan_results(struct wl_iscan_ctrl *iscan, u32 *status,
struct wl_scan_results **bss_list)
static s32 wl_iscan_done(struct wl_priv *wl)
static s32 wl_iscan_pending(struct wl_priv *wl)
static s32 wl_iscan_inprogress(struct wl_priv *wl)
static s32 wl_iscan_aborted(struct wl_priv *wl)
static s32 wl_iscan_thread(void *data)
static void wl_iscan_timer(unsigned long data)
static s32 wl_invoke_iscan(struct wl_priv *wl)
static void wl_init_iscan_eloop(struct wl_iscan_eloop *el)
static s32 wl_init_iscan(struct wl_priv *wl)
static void wl_init_fw(struct wl_fw_ctrl *fw)
static s32 wl_init_priv(struct wl_priv *wl)
static void wl_deinit_priv(struct wl_priv *wl)
s32 wl_cfg80211_attach(struct net_device *ndev, void *data)
void wl_cfg80211_detach(void)
static void wl_wakeup_event(struct wl_priv *wl)
static s32 wl_event_handler(void *data)
void
wl_cfg80211_event(struct net_device *ndev, const wl_event_msg_t * e, void *data)
static void wl_init_eq(struct wl_priv *wl)
static void wl_flush_eq(struct wl_priv *wl)
static struct wl_event_q *wl_deq_event(struct wl_priv *wl)
static s32
wl_enq_event(struct wl_priv *wl, u32 event, const wl_event_msg_t *msg,
void *data)
static void wl_put_event(struct wl_event_q *e)
void wl_cfg80211_sdio_func(void *func)
static void wl_clear_sdio_func(void)
struct sdio_func *wl_cfg80211_get_sdio_func(void)
static s32 wl_dongle_mode(struct net_device *ndev, s32 iftype)
static s32 wl_dongle_country(struct net_device *ndev, u8 ccode)
static s32 wl_dongle_up(struct net_device *ndev, u32 up)
static s32 wl_dongle_power(struct net_device *ndev, u32 power_mode)
static s32
wl_dongle_glom(struct net_device *ndev, u32 glom, u32 dongle_align)
static s32
wl_dongle_offload(struct net_device *ndev, s32 arpoe, s32 arp_ol)
static s32 wl_pattern_atoh(s8 *src, s8 *dst)
static s32 wl_dongle_filter(struct net_device *ndev, u32 filter_mode)
static s32 wl_dongle_eventmsg(struct net_device *ndev)
static s32
wl_dongle_roam(struct net_device *ndev, u32 roamvar, u32 bcn_timeout)
static s32
wl_dongle_scantime(struct net_device *ndev, s32 scan_assoc_time,
s32 scan_unassoc_time, s32 scan_passive_time)
s32 wl_config_dongle(struct wl_priv *wl, bool need_lock)
static s32 wl_update_wiphybands(struct wl_priv *wl)
static s32 __wl_cfg80211_up(struct wl_priv *wl)
static s32 __wl_cfg80211_down(struct wl_priv *wl)
s32 wl_cfg80211_up(void)
s32 wl_cfg80211_down(void)
static s32 wl_dongle_probecap(struct wl_priv *wl)
static void *wl_read_prof(struct wl_priv *wl, s32 item)
static s32
wl_update_prof(struct wl_priv *wl, const wl_event_msg_t *e, void *data,
s32 item)
static bool wl_is_ibssmode(struct wl_priv *wl)
static __used s32 wl_add_ie(struct wl_priv *wl, u8 t, u8 l, u8 *v)
static void wl_link_down(struct wl_priv *wl)
static void wl_lock_eq(struct wl_priv *wl)
static void wl_unlock_eq(struct wl_priv *wl)
static void wl_init_eq_lock(struct wl_priv *wl)
static void wl_delay(u32 ms)
static void wl_set_drvdata(struct wl_dev *dev, void *data)
static void *wl_get_drvdata(struct wl_dev *dev)
s32 wl_cfg80211_read_fw(s8 *buf, u32 size)
void wl_cfg80211_release_fw(void)
void *wl_cfg80211_request_fw(s8 *file_name)
s8 *wl_cfg80211_get_fwname(void)
s8 *wl_cfg80211_get_nvramname(void)
static void wl_set_mpc(struct net_device *ndev, int mpc)
static int wl_debugfs_add_netdev_params(struct wl_priv *wl)
static void wl_debugfs_remove_netdev(struct wl_priv *wl)
