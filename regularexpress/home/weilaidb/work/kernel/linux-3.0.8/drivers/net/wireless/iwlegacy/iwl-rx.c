int iwl_legacy_rx_queue_space(const struct iwl_rx_queue *q)
EXPORT_SYMBOL(iwl_legacy_rx_queue_space);
void
iwl_legacy_rx_queue_update_write_ptr(struct iwl_priv *priv,
struct iwl_rx_queue *q)
EXPORT_SYMBOL(iwl_legacy_rx_queue_update_write_ptr);
int iwl_legacy_rx_queue_alloc(struct iwl_priv *priv)
EXPORT_SYMBOL(iwl_legacy_rx_queue_alloc);
void iwl_legacy_rx_spectrum_measure_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
EXPORT_SYMBOL(iwl_legacy_rx_spectrum_measure_notif);
void iwl_legacy_recover_from_statistics(struct iwl_priv *priv,
struct iwl_rx_packet *pkt)
EXPORT_SYMBOL(iwl_legacy_recover_from_statistics);
int iwl_legacy_set_decrypted_flag(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
u32 decrypt_res,
struct ieee80211_rx_status *stats)
EXPORT_SYMBOL(iwl_legacy_set_decrypted_flag);
