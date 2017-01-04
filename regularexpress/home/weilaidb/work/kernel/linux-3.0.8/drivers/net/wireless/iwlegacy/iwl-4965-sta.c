static struct iwl_link_quality_cmd *
iwl4965_sta_alloc_lq(struct iwl_priv *priv, u8 sta_id)
int
iwl4965_add_bssid_station(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
const u8 *addr, u8 *sta_id_r)
static int iwl4965_static_wepkey_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
bool send_if_empty)
int iwl4965_restore_default_wep_keys(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
int iwl4965_remove_default_wep_key(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf)
int iwl4965_set_default_wep_key(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf)
static int iwl4965_set_wep_dynamic_key_info(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
static int iwl4965_set_ccmp_dynamic_key_info(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
static int iwl4965_set_tkip_dynamic_key_info(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
void iwl4965_update_tkip_key(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf,
struct ieee80211_sta *sta, u32 iv32, u16 *phase1key)
int iwl4965_remove_dynamic_key(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf,
u8 sta_id)
int iwl4965_set_dynamic_key(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
struct ieee80211_key_conf *keyconf, u8 sta_id)
int iwl4965_alloc_bcast_station(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static int iwl4965_update_bcast_station(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
int iwl4965_update_bcast_stations(struct iwl_priv *priv)
int iwl4965_sta_tx_modify_enable_tid(struct iwl_priv *priv, int sta_id, int tid)
int iwl4965_sta_rx_agg_start(struct iwl_priv *priv, struct ieee80211_sta *sta,
int tid, u16 ssn)
int iwl4965_sta_rx_agg_stop(struct iwl_priv *priv, struct ieee80211_sta *sta,
int tid)
void
iwl4965_sta_modify_sleep_tx_count(struct iwl_priv *priv, int sta_id, int cnt)
