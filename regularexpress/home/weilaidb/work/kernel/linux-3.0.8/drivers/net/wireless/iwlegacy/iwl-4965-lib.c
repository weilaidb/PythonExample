void iwl4965_check_abort_status(struct iwl_priv *priv,
u8 frame_count, u32 status)
struct iwl_mod_params iwl4965_mod_params = ;
void iwl4965_rx_queue_reset(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
int iwl4965_rx_init(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
static void iwl4965_set_pwr_vmain(struct iwl_priv *priv)
int iwl4965_hw_nic_init(struct iwl_priv *priv)
static inline __le32 iwl4965_dma_addr2rbd_ptr(struct iwl_priv *priv,
dma_addr_t dma_addr)
void iwl4965_rx_queue_restock(struct iwl_priv *priv)
static void iwl4965_rx_allocate(struct iwl_priv *priv, gfp_t priority)
void iwl4965_rx_replenish(struct iwl_priv *priv)
void iwl4965_rx_replenish_now(struct iwl_priv *priv)
void iwl4965_rx_queue_free(struct iwl_priv *priv, struct iwl_rx_queue *rxq)
int iwl4965_rxq_stop(struct iwl_priv *priv)
int iwl4965_hwrate_to_mac80211_idx(u32 rate_n_flags, enum ieee80211_band band)
static int iwl4965_calc_rssi(struct iwl_priv *priv,
struct iwl_rx_phy_res *rx_resp)
static u32 iwl4965_translate_rx_status(struct iwl_priv *priv, u32 decrypt_in)
static void iwl4965_pass_packet_to_mac80211(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
u16 len,
u32 ampdu_status,
struct iwl_rx_mem_buffer *rxb,
struct ieee80211_rx_status *stats)
void iwl4965_rx_reply_rx(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwl4965_rx_reply_rx_phy(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static int iwl4965_get_single_channel_for_scan(struct iwl_priv *priv,
struct ieee80211_vif *vif,
enum ieee80211_band band,
struct iwl_scan_channel *scan_ch)
static int iwl4965_get_channels_for_scan(struct iwl_priv *priv,
struct ieee80211_vif *vif,
enum ieee80211_band band,
u8 is_active, u8 n_probes,
struct iwl_scan_channel *scan_ch)
int iwl4965_request_scan(struct iwl_priv *priv, struct ieee80211_vif *vif)
int iwl4965_manage_ibss_station(struct iwl_priv *priv,
struct ieee80211_vif *vif, bool add)
void iwl4965_free_tfds_in_queue(struct iwl_priv *priv,
int sta_id, int tid, int freed)
#define IWL_TX_QUEUE_MSK	0xfffff
static bool iwl4965_is_single_rx_stream(struct iwl_priv *priv)
#define IWL_NUM_RX_CHAINS_MULTIPLE	3
#define IWL_NUM_RX_CHAINS_SINGLE	2
#define IWL_NUM_IDLE_CHAINS_DUAL	2
#define IWL_NUM_IDLE_CHAINS_SINGLE	1
static int iwl4965_get_active_rx_chain_count(struct iwl_priv *priv)
static int
iwl4965_get_idle_rx_chain_count(struct iwl_priv *priv, int active_cnt)
static u8 iwl4965_count_chain_bitmap(u32 chain_bitmap)
void iwl4965_set_rxon_chain(struct iwl_priv *priv, struct iwl_rxon_context *ctx)
u8 iwl4965_toggle_tx_ant(struct iwl_priv *priv, u8 ant, u8 valid)
static const char *iwl4965_get_fh_string(int cmd)
int iwl4965_dump_fh(struct iwl_priv *priv, char **buf, bool display)
