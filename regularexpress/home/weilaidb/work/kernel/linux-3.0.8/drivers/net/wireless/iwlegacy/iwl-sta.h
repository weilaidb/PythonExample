#define __iwl_legacy_sta_h__
#define HW_KEY_DYNAMIC 0
#define HW_KEY_DEFAULT 1
#define IWL_STA_DRIVER_ACTIVE BIT(0)
#define IWL_STA_UCODE_ACTIVE  BIT(1)
#define IWL_STA_UCODE_INPROGRESS  BIT(2)
#define IWL_STA_LOCAL BIT(3)
#define IWL_STA_BCAST BIT(4)
void iwl_legacy_restore_stations(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
void iwl_legacy_clear_ucode_stations(struct iwl_priv *priv,
struct iwl_rxon_context *ctx);
void iwl_legacy_dealloc_bcast_stations(struct iwl_priv *priv);
int iwl_legacy_get_free_ucode_key_index(struct iwl_priv *priv);
int iwl_legacy_send_add_sta(struct iwl_priv *priv,
struct iwl_legacy_addsta_cmd *sta, u8 flags);
int iwl_legacy_add_station_common(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
const u8 *addr, bool is_ap,
struct ieee80211_sta *sta, u8 *sta_id_r);
int iwl_legacy_remove_station(struct iwl_priv *priv,
const u8 sta_id,
const u8 *addr);
int iwl_legacy_mac_sta_remove(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_sta *sta);
u8 iwl_legacy_prep_station(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
const u8 *addr, bool is_ap,
struct ieee80211_sta *sta);
int iwl_legacy_send_lq_cmd(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct iwl_link_quality_cmd *lq,
u8 flags, bool init);
static inline void iwl_legacy_clear_driver_stations(struct iwl_priv *priv)
static inline int iwl_legacy_sta_id(struct ieee80211_sta *sta)
static inline int iwl_legacy_sta_id_or_broadcast(struct iwl_priv *priv,
struct iwl_rxon_context *context,
struct ieee80211_sta *sta)
