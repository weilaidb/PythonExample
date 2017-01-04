static void iwl_legacy_sta_ucode_activate(struct iwl_priv *priv, u8 sta_id)
static int iwl_legacy_process_add_sta_resp(struct iwl_priv *priv,
struct iwl_legacy_addsta_cmd *addsta,
struct iwl_rx_packet *pkt,
bool sync)
static void iwl_legacy_add_sta_callback(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt)
int iwl_legacy_send_add_sta(struct iwl_priv *priv,
struct iwl_legacy_addsta_cmd *sta, u8 flags)
EXPORT_SYMBOL(iwl_legacy_send_add_sta);
static void iwl_legacy_set_ht_add_station(struct iwl_priv *priv, u8 index,
struct ieee80211_sta *sta,
struct iwl_rxon_context *ctx)
u8 iwl_legacy_prep_station(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
const u8 *addr, bool is_ap, struct ieee80211_sta *sta)
EXPORT_SYMBOL_GPL(iwl_legacy_prep_station);
#define STA_WAIT_TIMEOUT (HZ/2)
int
iwl_legacy_add_station_common(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
const u8 *addr, bool is_ap,
struct ieee80211_sta *sta, u8 *sta_id_r)
EXPORT_SYMBOL(iwl_legacy_add_station_common);
static void iwl_legacy_sta_ucode_deactivate(struct iwl_priv *priv, u8 sta_id)
static int iwl_legacy_send_remove_station(struct iwl_priv *priv,
const u8 *addr, int sta_id,
bool temporary)
int iwl_legacy_remove_station(struct iwl_priv *priv, const u8 sta_id,
const u8 *addr)
EXPORT_SYMBOL_GPL(iwl_legacy_remove_station);
void iwl_legacy_clear_ucode_stations(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_clear_ucode_stations);
void
iwl_legacy_restore_stations(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
EXPORT_SYMBOL(iwl_legacy_restore_stations);
int iwl_legacy_get_free_ucode_key_index(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_get_free_ucode_key_index);
void iwl_legacy_dealloc_bcast_stations(struct iwl_priv *priv)
EXPORT_SYMBOL_GPL(iwl_legacy_dealloc_bcast_stations);
static void iwl_legacy_dump_lq_cmd(struct iwl_priv *priv,
struct iwl_link_quality_cmd *lq)
static inline void iwl_legacy_dump_lq_cmd(struct iwl_priv *priv,
struct iwl_link_quality_cmd *lq)
static bool iwl_legacy_is_lq_table_valid(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct iwl_link_quality_cmd *lq)
int iwl_legacy_send_lq_cmd(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
struct iwl_link_quality_cmd *lq, u8 flags, bool init)
EXPORT_SYMBOL(iwl_legacy_send_lq_cmd);
int iwl_legacy_mac_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
EXPORT_SYMBOL(iwl_legacy_mac_sta_remove);
