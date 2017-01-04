#define IWL_ACTIVE_DWELL_TIME_24    (30)
#define IWL_ACTIVE_DWELL_TIME_52    (20)
#define IWL_ACTIVE_DWELL_FACTOR_24GHZ (3)
#define IWL_ACTIVE_DWELL_FACTOR_52GHZ (2)
#define IWL_PASSIVE_DWELL_TIME_24   (20)
#define IWL_PASSIVE_DWELL_TIME_52   (10)
#define IWL_PASSIVE_DWELL_BASE      (100)
#define IWL_CHANNEL_TUNE_TIME       5
static int iwl_send_scan_abort(struct iwl_priv *priv)
static void iwl_complete_scan(struct iwl_priv *priv, bool aborted)
void iwl_force_scan_end(struct iwl_priv *priv)
static void iwl_do_scan_abort(struct iwl_priv *priv)
int iwl_scan_cancel(struct iwl_priv *priv)
int iwl_scan_cancel_timeout(struct iwl_priv *priv, unsigned long ms)
static void iwl_rx_reply_scan(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_scan_start_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_scan_results_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_scan_complete_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwl_setup_rx_scan_handlers(struct iwl_priv *priv)
inline u16 iwl_get_active_dwell_time(struct iwl_priv *priv,
enum ieee80211_band band,
u8 n_probes)
u16 iwl_get_passive_dwell_time(struct iwl_priv *priv,
enum ieee80211_band band,
struct ieee80211_vif *vif)
void iwl_init_scan_params(struct iwl_priv *priv)
int __must_check iwl_scan_initiate(struct iwl_priv *priv,
struct ieee80211_vif *vif,
enum iwl_scan_type scan_type,
enum ieee80211_band band)
int iwl_mac_hw_scan(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct cfg80211_scan_request *req)
void iwl_internal_short_hw_scan(struct iwl_priv *priv)
static void iwl_bg_start_internal_scan(struct work_struct *work)
static void iwl_bg_scan_check(struct work_struct *data)
u16 iwl_fill_probe_req(struct iwl_priv *priv, struct ieee80211_mgmt *frame,
const u8 *ta, const u8 *ies, int ie_len, int left)
static void iwl_bg_abort_scan(struct work_struct *work)
static void iwl_bg_scan_completed(struct work_struct *work)
void iwl_setup_scan_deferred_work(struct iwl_priv *priv)
void iwl_cancel_scan_deferred_work(struct iwl_priv *priv)
