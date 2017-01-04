#define IEEE80211_I_H
struct ieee80211_local;
#define AP_MAX_BC_BUFFER 128
#define TOTAL_MAX_TX_BUFFER 512
#define IEEE80211_ENCRYPT_HEADROOM 8
#define IEEE80211_ENCRYPT_TAILROOM 18
#define IEEE80211_FRAGMENT_MAX 4
#define TU_TO_EXP_TIME(x)	(jiffies + usecs_to_jiffies((x) * 1024))
#define IEEE80211_DEFAULT_UAPSD_QUEUES \
(IEEE80211_WMM_IE_STA_QOSINFO_AC_BK |	\
IEEE80211_WMM_IE_STA_QOSINFO_AC_BE |	\
IEEE80211_WMM_IE_STA_QOSINFO_AC_VI |	\
IEEE80211_WMM_IE_STA_QOSINFO_AC_VO)
#define IEEE80211_DEFAULT_MAX_SP_LEN		\
IEEE80211_WMM_IE_STA_QOSINFO_SP_ALL
struct ieee80211_fragment_entry ;
struct ieee80211_bss ;
static inline u8 *bss_mesh_cfg(struct ieee80211_bss *bss)
static inline u8 *bss_mesh_id(struct ieee80211_bss *bss)
static inline u8 bss_mesh_id_len(struct ieee80211_bss *bss)
typedef unsigned __bitwise__ ieee80211_tx_result;
#define TX_CONTINUE	((__force ieee80211_tx_result) 0u)
#define TX_DROP		((__force ieee80211_tx_result) 1u)
#define TX_QUEUED	((__force ieee80211_tx_result) 2u)
#define IEEE80211_TX_FRAGMENTED		BIT(0)
#define IEEE80211_TX_UNICAST		BIT(1)
#define IEEE80211_TX_PS_BUFFERED	BIT(2)
struct ieee80211_tx_data ;
typedef unsigned __bitwise__ ieee80211_rx_result;
#define RX_CONTINUE		((__force ieee80211_rx_result) 0u)
#define RX_DROP_UNUSABLE	((__force ieee80211_rx_result) 1u)
#define RX_DROP_MONITOR		((__force ieee80211_rx_result) 2u)
#define RX_QUEUED		((__force ieee80211_rx_result) 3u)
enum ieee80211_packet_rx_flags ;
enum ieee80211_rx_flags ;
struct ieee80211_rx_data ;
struct beacon_data ;
struct ieee80211_if_ap ;
struct ieee80211_if_wds ;
struct ieee80211_if_vlan ;
struct mesh_stats ;
#define PREQ_Q_F_START		0x1
#define PREQ_Q_F_REFRESH	0x2
struct mesh_preq_queue ;
enum ieee80211_work_type ;
enum work_done_result ;
struct ieee80211_work ;
enum ieee80211_sta_flags ;
struct ieee80211_if_managed ;
struct ieee80211_if_ibss ;
struct ieee80211_if_mesh ;
#define IEEE80211_IFSTA_MESH_CTR_INC(msh, name)	\
do  while (0)
#define IEEE80211_IFSTA_MESH_CTR_INC(msh, name) \
do  while (0)
enum ieee80211_sub_if_data_flags ;
enum ieee80211_sdata_state_bits ;
struct ieee80211_sub_if_data ;
static inline
struct ieee80211_sub_if_data *vif_to_sdata(struct ieee80211_vif *p)
enum sdata_queue_type ;
enum ;
enum queue_stop_reason ;
struct tpt_led_trigger ;
enum ;
enum mac80211_scan_state ;
struct ieee80211_local ;
static inline struct ieee80211_sub_if_data *
IEEE80211_DEV_TO_SUB_IF(struct net_device *dev)
struct ieee80211_ra_tid ;
struct ieee802_11_elems ;
static inline struct ieee80211_local *hw_to_local(
struct ieee80211_hw *hw)
static inline struct ieee80211_hw *local_to_hw(
struct ieee80211_local *local)
static inline int ieee80211_bssid_match(const u8 *raddr, const u8 *addr)
int ieee80211_hw_config(struct ieee80211_local *local, u32 changed);
void ieee80211_tx_set_protected(struct ieee80211_tx_data *tx);
void ieee80211_bss_info_change_notify(struct ieee80211_sub_if_data *sdata,
u32 changed);
void ieee80211_configure_filter(struct ieee80211_local *local);
u32 ieee80211_reset_erp_info(struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_setup_sdata(struct ieee80211_sub_if_data *sdata);
int ieee80211_mgd_auth(struct ieee80211_sub_if_data *sdata,
struct cfg80211_auth_request *req);
int ieee80211_mgd_assoc(struct ieee80211_sub_if_data *sdata,
struct cfg80211_assoc_request *req);
int ieee80211_mgd_deauth(struct ieee80211_sub_if_data *sdata,
struct cfg80211_deauth_request *req,
void *cookie);
int ieee80211_mgd_disassoc(struct ieee80211_sub_if_data *sdata,
struct cfg80211_disassoc_request *req,
void *cookie);
void ieee80211_send_pspoll(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata);
void ieee80211_recalc_ps(struct ieee80211_local *local, s32 latency);
int ieee80211_max_network_latency(struct notifier_block *nb,
unsigned long data, void *dummy);
int ieee80211_set_arp_filter(struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_process_chanswitch(struct ieee80211_sub_if_data *sdata,
struct ieee80211_channel_sw_ie *sw_elem,
struct ieee80211_bss *bss,
u64 timestamp);
void ieee80211_sta_quiesce(struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_restart(struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_work(struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_rx_queued_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb);
void ieee80211_sta_reset_beacon_monitor(struct ieee80211_sub_if_data *sdata);
void ieee80211_sta_reset_conn_monitor(struct ieee80211_sub_if_data *sdata);
void ieee80211_ibss_notify_scan_completed(struct ieee80211_local *local);
void ieee80211_ibss_setup_sdata(struct ieee80211_sub_if_data *sdata);
struct sta_info *ieee80211_ibss_add_sta(struct ieee80211_sub_if_data *sdata,
u8 *bssid, u8 *addr, u32 supp_rates,
gfp_t gfp);
int ieee80211_ibss_join(struct ieee80211_sub_if_data *sdata,
struct cfg80211_ibss_params *params);
int ieee80211_ibss_leave(struct ieee80211_sub_if_data *sdata);
void ieee80211_ibss_quiesce(struct ieee80211_sub_if_data *sdata);
void ieee80211_ibss_restart(struct ieee80211_sub_if_data *sdata);
void ieee80211_ibss_work(struct ieee80211_sub_if_data *sdata);
void ieee80211_ibss_rx_queued_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb);
void ieee80211_mesh_work(struct ieee80211_sub_if_data *sdata);
void ieee80211_mesh_rx_queued_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb);
void ieee80211_scan_work(struct work_struct *work);
int ieee80211_request_internal_scan(struct ieee80211_sub_if_data *sdata,
const u8 *ssid, u8 ssid_len,
struct ieee80211_channel *chan);
int ieee80211_request_scan(struct ieee80211_sub_if_data *sdata,
struct cfg80211_scan_request *req);
void ieee80211_scan_cancel(struct ieee80211_local *local);
ieee80211_rx_result
ieee80211_scan_rx(struct ieee80211_sub_if_data *sdata, struct sk_buff *skb);
void ieee80211_mlme_notify_scan_completed(struct ieee80211_local *local);
struct ieee80211_bss *
ieee80211_bss_info_update(struct ieee80211_local *local,
struct ieee80211_rx_status *rx_status,
struct ieee80211_mgmt *mgmt,
size_t len,
struct ieee802_11_elems *elems,
struct ieee80211_channel *channel,
bool beacon);
struct ieee80211_bss *
ieee80211_rx_bss_get(struct ieee80211_local *local, u8 *bssid, int freq,
u8 *ssid, u8 ssid_len);
void ieee80211_rx_bss_put(struct ieee80211_local *local,
struct ieee80211_bss *bss);
int ieee80211_request_sched_scan_start(struct ieee80211_sub_if_data *sdata,
struct cfg80211_sched_scan_request *req);
int ieee80211_request_sched_scan_stop(struct ieee80211_sub_if_data *sdata);
void ieee80211_sched_scan_stopped_work(struct work_struct *work);
bool ieee80211_cfg_on_oper_channel(struct ieee80211_local *local);
void ieee80211_offchannel_enable_all_ps(struct ieee80211_local *local,
bool tell_ap);
void ieee80211_offchannel_stop_vifs(struct ieee80211_local *local,
bool offchannel_ps_enable);
void ieee80211_offchannel_return(struct ieee80211_local *local,
bool enable_beaconing,
bool offchannel_ps_disable);
void ieee80211_hw_roc_setup(struct ieee80211_local *local);
int ieee80211_iface_init(void);
void ieee80211_iface_exit(void);
int ieee80211_if_add(struct ieee80211_local *local, const char *name,
struct net_device **new_dev, enum nl80211_iftype type,
struct vif_params *params);
int ieee80211_if_change_type(struct ieee80211_sub_if_data *sdata,
enum nl80211_iftype type);
void ieee80211_if_remove(struct ieee80211_sub_if_data *sdata);
void ieee80211_remove_interfaces(struct ieee80211_local *local);
u32 __ieee80211_recalc_idle(struct ieee80211_local *local);
void ieee80211_recalc_idle(struct ieee80211_local *local);
void ieee80211_adjust_monitor_flags(struct ieee80211_sub_if_data *sdata,
const int offset);
static inline bool ieee80211_sdata_running(struct ieee80211_sub_if_data *sdata)
void ieee80211_clear_tx_pending(struct ieee80211_local *local);
void ieee80211_tx_pending(unsigned long data);
netdev_tx_t ieee80211_monitor_start_xmit(struct sk_buff *skb,
struct net_device *dev);
netdev_tx_t ieee80211_subif_start_xmit(struct sk_buff *skb,
struct net_device *dev);
struct ieee80211_tx_status_rtap_hdr  __packed;
void ieee80211_ht_cap_ie_to_sta_ht_cap(struct ieee80211_supported_band *sband,
struct ieee80211_ht_cap *ht_cap_ie,
struct ieee80211_sta_ht_cap *ht_cap);
void ieee80211_send_bar(struct ieee80211_sub_if_data *sdata, u8 *ra, u16 tid, u16 ssn);
void ieee80211_send_delba(struct ieee80211_sub_if_data *sdata,
const u8 *da, u16 tid,
u16 initiator, u16 reason_code);
int ieee80211_send_smps_action(struct ieee80211_sub_if_data *sdata,
enum ieee80211_smps_mode smps, const u8 *da,
const u8 *bssid);
void ieee80211_request_smps_work(struct work_struct *work);
void ___ieee80211_stop_rx_ba_session(struct sta_info *sta, u16 tid,
u16 initiator, u16 reason, bool stop);
void __ieee80211_stop_rx_ba_session(struct sta_info *sta, u16 tid,
u16 initiator, u16 reason, bool stop);
void ieee80211_sta_tear_down_BA_sessions(struct sta_info *sta, bool tx);
void ieee80211_process_delba(struct ieee80211_sub_if_data *sdata,
struct sta_info *sta,
struct ieee80211_mgmt *mgmt, size_t len);
void ieee80211_process_addba_resp(struct ieee80211_local *local,
struct sta_info *sta,
struct ieee80211_mgmt *mgmt,
size_t len);
void ieee80211_process_addba_request(struct ieee80211_local *local,
struct sta_info *sta,
struct ieee80211_mgmt *mgmt,
size_t len);
int __ieee80211_stop_tx_ba_session(struct sta_info *sta, u16 tid,
enum ieee80211_back_parties initiator,
bool tx);
int ___ieee80211_stop_tx_ba_session(struct sta_info *sta, u16 tid,
enum ieee80211_back_parties initiator,
bool tx);
void ieee80211_start_tx_ba_cb(struct ieee80211_vif *vif, u8 *ra, u16 tid);
void ieee80211_stop_tx_ba_cb(struct ieee80211_vif *vif, u8 *ra, u8 tid);
void ieee80211_ba_session_work(struct work_struct *work);
void ieee80211_tx_ba_session_handle_start(struct sta_info *sta, int tid);
void ieee80211_release_reorder_timeout(struct sta_info *sta, int tid);
void ieee80211_process_measurement_req(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len);
int ieee80211_reconfig(struct ieee80211_local *local);
void ieee80211_stop_device(struct ieee80211_local *local);
int __ieee80211_suspend(struct ieee80211_hw *hw,
struct cfg80211_wowlan *wowlan);
static inline int __ieee80211_resume(struct ieee80211_hw *hw)
static inline int __ieee80211_suspend(struct ieee80211_hw *hw,
struct cfg80211_wowlan *wowlan)
static inline int __ieee80211_resume(struct ieee80211_hw *hw)
extern void *mac80211_wiphy_privid;
u8 *ieee80211_get_bssid(struct ieee80211_hdr *hdr, size_t len,
enum nl80211_iftype type);
int ieee80211_frame_duration(struct ieee80211_local *local, size_t len,
int rate, int erp, int short_preamble);
void mac80211_ev_michael_mic_failure(struct ieee80211_sub_if_data *sdata, int keyidx,
struct ieee80211_hdr *hdr, const u8 *tsc,
gfp_t gfp);
void ieee80211_set_wmm_default(struct ieee80211_sub_if_data *sdata);
void ieee80211_tx_skb(struct ieee80211_sub_if_data *sdata, struct sk_buff *skb);
void ieee802_11_parse_elems(u8 *start, size_t len,
struct ieee802_11_elems *elems);
u32 ieee802_11_parse_elems_crc(u8 *start, size_t len,
struct ieee802_11_elems *elems,
u64 filter, u32 crc);
u32 ieee80211_mandatory_rates(struct ieee80211_local *local,
enum ieee80211_band band);
void ieee80211_dynamic_ps_enable_work(struct work_struct *work);
void ieee80211_dynamic_ps_disable_work(struct work_struct *work);
void ieee80211_dynamic_ps_timer(unsigned long data);
void ieee80211_send_nullfunc(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
int powersave);
void ieee80211_sta_rx_notify(struct ieee80211_sub_if_data *sdata,
struct ieee80211_hdr *hdr);
void ieee80211_sta_tx_notify(struct ieee80211_sub_if_data *sdata,
struct ieee80211_hdr *hdr, bool ack);
void ieee80211_beacon_connection_loss_work(struct work_struct *work);
void ieee80211_wake_queues_by_reason(struct ieee80211_hw *hw,
enum queue_stop_reason reason);
void ieee80211_stop_queues_by_reason(struct ieee80211_hw *hw,
enum queue_stop_reason reason);
void ieee80211_wake_queue_by_reason(struct ieee80211_hw *hw, int queue,
enum queue_stop_reason reason);
void ieee80211_stop_queue_by_reason(struct ieee80211_hw *hw, int queue,
enum queue_stop_reason reason);
void ieee80211_add_pending_skb(struct ieee80211_local *local,
struct sk_buff *skb);
int ieee80211_add_pending_skbs(struct ieee80211_local *local,
struct sk_buff_head *skbs);
int ieee80211_add_pending_skbs_fn(struct ieee80211_local *local,
struct sk_buff_head *skbs,
void (*fn)(void *data), void *data);
void ieee80211_send_auth(struct ieee80211_sub_if_data *sdata,
u16 transaction, u16 auth_alg,
u8 *extra, size_t extra_len, const u8 *bssid,
const u8 *key, u8 key_len, u8 key_idx);
int ieee80211_build_preq_ies(struct ieee80211_local *local, u8 *buffer,
const u8 *ie, size_t ie_len,
enum ieee80211_band band, u32 rate_mask,
u8 channel);
struct sk_buff *ieee80211_build_probe_req(struct ieee80211_sub_if_data *sdata,
u8 *dst,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len);
void ieee80211_send_probe_req(struct ieee80211_sub_if_data *sdata, u8 *dst,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len);
void ieee80211_sta_def_wmm_params(struct ieee80211_sub_if_data *sdata,
const size_t supp_rates_len,
const u8 *supp_rates);
u32 ieee80211_sta_get_rates(struct ieee80211_local *local,
struct ieee802_11_elems *elems,
enum ieee80211_band band);
int __ieee80211_request_smps(struct ieee80211_sub_if_data *sdata,
enum ieee80211_smps_mode smps_mode);
void ieee80211_recalc_smps(struct ieee80211_local *local);
size_t ieee80211_ie_split(const u8 *ies, size_t ielen,
const u8 *ids, int n_ids, size_t offset);
size_t ieee80211_ie_split_vendor(const u8 *ies, size_t ielen, size_t offset);
void ieee80211_work_init(struct ieee80211_local *local);
void ieee80211_add_work(struct ieee80211_work *wk);
void free_work(struct ieee80211_work *wk);
void ieee80211_work_purge(struct ieee80211_sub_if_data *sdata);
ieee80211_rx_result ieee80211_work_rx_mgmt(struct ieee80211_sub_if_data *sdata,
struct sk_buff *skb);
int ieee80211_wk_remain_on_channel(struct ieee80211_sub_if_data *sdata,
struct ieee80211_channel *chan,
enum nl80211_channel_type channel_type,
unsigned int duration, u64 *cookie);
int ieee80211_wk_cancel_remain_on_channel(
struct ieee80211_sub_if_data *sdata, u64 cookie);
enum ieee80211_chan_mode ;
enum ieee80211_chan_mode
ieee80211_get_channel_mode(struct ieee80211_local *local,
struct ieee80211_sub_if_data *ignore);
bool ieee80211_set_channel_type(struct ieee80211_local *local,
struct ieee80211_sub_if_data *sdata,
enum nl80211_channel_type chantype);
#define debug_noinline noinline
#define debug_noinline
