static int iwlagn_disable_bss(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct iwl_rxon_cmd *send)
static int iwlagn_disable_pan(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct iwl_rxon_cmd *send)
static void iwlagn_update_qos(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static int iwlagn_update_beacon(struct iwl_priv *priv,
struct ieee80211_vif *vif)
static int iwlagn_send_rxon_assoc(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static int iwlagn_rxon_disconn(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
static int iwlagn_rxon_connect(struct iwl_priv *priv,
struct iwl_rxon_context *ctx)
int iwlagn_commit_rxon(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
int iwlagn_mac_config(struct ieee80211_hw *hw, u32 changed)
static void iwlagn_check_needed_chains(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct ieee80211_bss_conf *bss_conf)
void iwlagn_bss_info_changed(struct ieee80211_hw *hw,
struct ieee80211_vif *vif,
struct ieee80211_bss_conf *bss_conf,
u32 changes)
void iwlagn_post_scan(struct iwl_priv *priv)
