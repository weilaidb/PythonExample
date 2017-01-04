void iwl4965_rx_missed_beacon_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl4965_rx_calc_noise(struct iwl_priv *priv)
static void iwl4965_accumulative_statistics(struct iwl_priv *priv,
__le32 *stats)
#define REG_RECALIB_PERIOD (60)
bool iwl4965_good_plcp_health(struct iwl_priv *priv,
struct iwl_rx_packet *pkt)
void iwl4965_rx_statistics(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwl4965_reply_statistics(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
