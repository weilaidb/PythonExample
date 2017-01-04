static void iwl_sta_ucode_activate(struct iwl_priv *priv, u8 sta_id)
static int iwl_process_add_sta_resp(struct iwl_priv *priv,
struct iwl_addsta_cmd *addsta,
struct iwl_rx_packet *pkt,
bool sync)
static void iwl_add_sta_callback(struct iwl_priv *priv,
struct iwl_device_cmd *cmd,
struct iwl_rx_packet *pkt)
int iwl_send_add_sta(struct iwl_priv *priv,
struct iwl_addsta_cmd *sta, u8 flags)
static void iwl_set_ht_add_station(struct iwl_priv *priv, u8 index,
struct ieee80211_sta *sta,
struct iwl_rxon_context *ctx)
u8 iwl_prep_station(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
const u8 *addr, bool is_ap, struct ieee80211_sta *sta)
#define STA_WAIT_TIMEOUT (HZ/2)
int iwl_add_station_common(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
const u8 *addr, bool is_ap,
struct ieee80211_sta *sta, u8 *sta_id_r)
static void iwl_sta_ucode_deactivate(struct iwl_priv *priv, u8 sta_id)
static int iwl_send_remove_station(struct iwl_priv *priv,
const u8 *addr, int sta_id,
bool temporary)
int iwl_remove_station(struct iwl_priv *priv, const u8 sta_id,
const u8 *addr)
void iwl_clear_ucode_stations(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
void iwl_restore_stations(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
void iwl_reprogram_ap_sta(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
int iwl_get_free_ucode_key_index(struct iwl_priv *priv)
void iwl_dealloc_bcast_stations(struct iwl_priv *priv)
static void iwl_dump_lq_cmd(struct iwl_priv *priv,
struct iwl_link_quality_cmd *lq)
static inline void iwl_dump_lq_cmd(struct iwl_priv *priv,
struct iwl_link_quality_cmd *lq)
static bool is_lq_table_valid(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct iwl_link_quality_cmd *lq)
int iwl_send_lq_cmd(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
struct iwl_link_quality_cmd *lq, u8 flags, bool init)
int iwl_mac_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta)
