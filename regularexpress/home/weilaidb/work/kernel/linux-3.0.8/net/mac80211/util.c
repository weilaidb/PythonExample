void *mac80211_wiphy_privid = &mac80211_wiphy_privid;
struct ieee80211_hw *wiphy_to_ieee80211_hw(struct wiphy *wiphy)
EXPORT_SYMBOL(wiphy_to_ieee80211_hw);
u8 *ieee80211_get_bssid(struct ieee80211_hdr *hdr, size_t len,
enum nl80211_iftype type)
void ieee80211_tx_set_protected(struct ieee80211_tx_data *tx)
int ieee80211_frame_duration(struct ieee80211_local *local, size_t len,
int rate, int erp, int short_preamble)
__le16 ieee80211_generic_frame_duration(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
size_t frame_len,
struct ieee80211_rate *rate)
EXPORT_SYMBOL(ieee80211_generic_frame_duration);
__le16 ieee80211_rts_duration(struct ieee80211_hw *hw,
struct ieee80211_vif *vif, size_t frame_len,
const struct ieee80211_tx_info *frame_txctl)
EXPORT_SYMBOL(ieee80211_rts_duration);
__le16 ieee80211_ctstoself_duration(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
size_t frame_len,
const struct ieee80211_tx_info *frame_txctl)
EXPORT_SYMBOL(ieee80211_ctstoself_duration);
static void __ieee80211_wake_queue(struct ieee80211_hw *hw, int queue,
enum queue_stop_reason reason)
void ieee80211_wake_queue_by_reason(struct ieee80211_hw *hw, int queue,
enum queue_stop_reason reason)
void ieee80211_wake_queue(struct ieee80211_hw *hw, int queue)
EXPORT_SYMBOL(ieee80211_wake_queue);
static void __ieee80211_stop_queue(struct ieee80211_hw *hw, int queue,
enum queue_stop_reason reason)
void ieee80211_stop_queue_by_reason(struct ieee80211_hw *hw, int queue,
enum queue_stop_reason reason)
void ieee80211_stop_queue(struct ieee80211_hw *hw, int queue)
EXPORT_SYMBOL(ieee80211_stop_queue);
void ieee80211_add_pending_skb(struct ieee80211_local *local,
struct sk_buff *skb)
int ieee80211_add_pending_skbs_fn(struct ieee80211_local *local,
struct sk_buff_head *skbs,
void (*fn)(void *data), void *data)
int ieee80211_add_pending_skbs(struct ieee80211_local *local,
struct sk_buff_head *skbs)
void ieee80211_stop_queues_by_reason(struct ieee80211_hw *hw,
enum queue_stop_reason reason)
void ieee80211_stop_queues(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_stop_queues);
int ieee80211_queue_stopped(struct ieee80211_hw *hw, int queue)
EXPORT_SYMBOL(ieee80211_queue_stopped);
void ieee80211_wake_queues_by_reason(struct ieee80211_hw *hw,
enum queue_stop_reason reason)
void ieee80211_wake_queues(struct ieee80211_hw *hw)
EXPORT_SYMBOL(ieee80211_wake_queues);
void ieee80211_iterate_active_interfaces(
struct ieee80211_hw *hw,
void (*iterator)(void *data, u8 *mac,
struct ieee80211_vif *vif),
void *data)
EXPORT_SYMBOL_GPL(ieee80211_iterate_active_interfaces);
void ieee80211_iterate_active_interfaces_atomic(
struct ieee80211_hw *hw,
void (*iterator)(void *data, u8 *mac,
struct ieee80211_vif *vif),
void *data)
EXPORT_SYMBOL_GPL(ieee80211_iterate_active_interfaces_atomic);
static bool ieee80211_can_queue_work(struct ieee80211_local *local)
void ieee80211_queue_work(struct ieee80211_hw *hw, struct work_struct *work)
EXPORT_SYMBOL(ieee80211_queue_work);
void ieee80211_queue_delayed_work(struct ieee80211_hw *hw,
struct delayed_work *dwork,
unsigned long delay)
EXPORT_SYMBOL(ieee80211_queue_delayed_work);
void ieee802_11_parse_elems(u8 *start, size_t len,
struct ieee802_11_elems *elems)
u32 ieee802_11_parse_elems_crc(u8 *start, size_t len,
struct ieee802_11_elems *elems,
u64 filter, u32 crc)
void ieee80211_set_wmm_default(struct ieee80211_sub_if_data *sdata)
void ieee80211_sta_def_wmm_params(struct ieee80211_sub_if_data *sdata,
const size_t supp_rates_len,
const u8 *supp_rates)
u32 ieee80211_mandatory_rates(struct ieee80211_local *local,
enum ieee80211_band band)
void ieee80211_send_auth(struct ieee80211_sub_if_data *sdata,
u16 transaction, u16 auth_alg,
u8 *extra, size_t extra_len, const u8 *bssid,
const u8 *key, u8 key_len, u8 key_idx)
int ieee80211_build_preq_ies(struct ieee80211_local *local, u8 *buffer,
const u8 *ie, size_t ie_len,
enum ieee80211_band band, u32 rate_mask,
u8 channel)
struct sk_buff *ieee80211_build_probe_req(struct ieee80211_sub_if_data *sdata,
u8 *dst,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len)
void ieee80211_send_probe_req(struct ieee80211_sub_if_data *sdata, u8 *dst,
const u8 *ssid, size_t ssid_len,
const u8 *ie, size_t ie_len)
u32 ieee80211_sta_get_rates(struct ieee80211_local *local,
struct ieee802_11_elems *elems,
enum ieee80211_band band)
void ieee80211_stop_device(struct ieee80211_local *local)
int ieee80211_reconfig(struct ieee80211_local *local)
static int check_mgd_smps(struct ieee80211_if_managed *ifmgd,
enum ieee80211_smps_mode *smps_mode)
void ieee80211_recalc_smps(struct ieee80211_local *local)
static bool ieee80211_id_in_list(const u8 *ids, int n_ids, u8 id)
size_t ieee80211_ie_split(const u8 *ies, size_t ielen,
const u8 *ids, int n_ids, size_t offset)
size_t ieee80211_ie_split_vendor(const u8 *ies, size_t ielen, size_t offset)
