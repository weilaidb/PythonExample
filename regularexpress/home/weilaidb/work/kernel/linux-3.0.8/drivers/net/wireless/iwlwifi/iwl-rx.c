int iwl_rx_queue_space(const struct iwl_rx_queue *q)
void iwl_rx_queue_update_write_ptr(struct iwl_priv *priv, struct iwl_rx_queue *q)
int iwl_rx_queue_alloc(struct iwl_priv *priv)
static void iwl_rx_reply_error(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_csa(struct iwl_priv *priv, struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_spectrum_measure_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_pm_sleep_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_pm_debug_statistics_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_beacon_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
#define ACK_CNT_RATIO (50)
#define BA_TIMEOUT_CNT (5)
#define BA_TIMEOUT_MAX (16)
static bool iwl_good_ack_health(struct iwl_priv *priv,
struct statistics_tx *cur)
static bool iwl_good_plcp_health(struct iwl_priv *priv,
struct statistics_rx_phy *cur_ofdm,
struct statistics_rx_ht_phy *cur_ofdm_ht,
unsigned int msecs)
static void iwl_recover_from_statistics(struct iwl_priv *priv,
struct statistics_rx_phy *cur_ofdm,
struct statistics_rx_ht_phy *cur_ofdm_ht,
struct statistics_tx *tx,
unsigned long stamp)
static void iwl_rx_calc_noise(struct iwl_priv *priv)
static void accum_stats(__le32 *prev, __le32 *cur, __le32 *delta,
__le32 *max_delta, __le32 *accum, int size)
static void
iwl_accumulative_statistics(struct iwl_priv *priv,
struct statistics_general_common *common,
struct statistics_rx_non_phy *rx_non_phy,
struct statistics_rx_phy *rx_ofdm,
struct statistics_rx_ht_phy *rx_ofdm_ht,
struct statistics_rx_phy *rx_cck,
struct statistics_tx *tx,
struct statistics_bt_activity *bt_activity)
static inline void
iwl_accumulative_statistics(struct iwl_priv *priv,
struct statistics_general_common *common,
struct statistics_rx_non_phy *rx_non_phy,
struct statistics_rx_phy *rx_ofdm,
struct statistics_rx_ht_phy *rx_ofdm_ht,
struct statistics_rx_phy *rx_cck,
struct statistics_tx *tx,
struct statistics_bt_activity *bt_activity)
static void iwl_rx_statistics(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_reply_statistics(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_card_state_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_missed_beacon_notif(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static void iwl_rx_reply_rx_phy(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
static int iwl_set_decrypted_flag(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
u32 decrypt_res,
struct ieee80211_rx_status *stats)
static void iwl_pass_packet_to_mac80211(struct iwl_priv *priv,
struct ieee80211_hdr *hdr,
u16 len,
u32 ampdu_status,
struct iwl_rx_mem_buffer *rxb,
struct ieee80211_rx_status *stats)
static u32 iwl_translate_rx_status(struct iwl_priv *priv, u32 decrypt_in)
static void iwl_rx_reply_rx(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
void iwl_setup_rx_handlers(struct iwl_priv *priv)
