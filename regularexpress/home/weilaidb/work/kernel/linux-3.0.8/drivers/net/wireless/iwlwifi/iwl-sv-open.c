static
struct nla_policy iwl_testmode_gnl_msg_policy[IWL_TM_ATTR_MAX] = ;
static inline int get_event_length(struct iwl_rx_mem_buffer *rxb)
static void iwl_testmode_ucode_rx_pkt(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwl_testmode_init(struct iwl_priv *priv)
static void iwl_trace_cleanup(struct iwl_priv *priv)
void iwl_testmode_cleanup(struct iwl_priv *priv)
static int iwl_testmode_ucode(struct ieee80211_hw *hw, struct nlattr **tb)
static int iwl_testmode_reg(struct ieee80211_hw *hw, struct nlattr **tb)
static int iwl_testmode_cfg_init_calib(struct iwl_priv *priv)
static int iwl_testmode_driver(struct ieee80211_hw *hw, struct nlattr **tb)
static int iwl_testmode_trace(struct ieee80211_hw *hw, struct nlattr **tb)
int iwl_testmode_cmd(struct ieee80211_hw *hw, void *data, int len)
