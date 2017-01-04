#define CREATE_TRACE_POINTS
int ath5k_modparam_nohwcrypt;
module_param_named(nohwcrypt, ath5k_modparam_nohwcrypt, bool, S_IRUGO);
MODULE_PARM_DESC(nohwcrypt, "Disable hardware encryption.");
static int modparam_all_channels;
module_param_named(all_channels, modparam_all_channels, bool, S_IRUGO);
MODULE_PARM_DESC(all_channels, "Expose all channels the device can use.");
static int modparam_fastchanswitch;
module_param_named(fastchanswitch, modparam_fastchanswitch, bool, S_IRUGO);
MODULE_PARM_DESC(fastchanswitch, "Enable fast channel switching for AR2413/AR5413 radios.");
MODULE_AUTHOR("Jiri Slaby");
MODULE_AUTHOR("Nick Kossifidis");
MODULE_DESCRIPTION("Support for 5xxx series of Atheros 802.11 wireless LAN cards.");
MODULE_SUPPORTED_DEVICE("Atheros 5xxx WLAN cards");
MODULE_LICENSE("Dual BSD/GPL");
static int ath5k_init(struct ieee80211_hw *hw);
static int ath5k_reset(struct ath5k_softc *sc, struct ieee80211_channel *chan,
bool skip_pcu);
int ath5k_beacon_update(struct ieee80211_hw *hw, struct ieee80211_vif *vif);
void ath5k_beacon_update_timers(struct ath5k_softc *sc, u64 bc_tsf);
static const struct ath5k_srev_name srev_names[] = ;
static const struct ieee80211_rate ath5k_rates[] = ;
static inline u64 ath5k_extend_tsf(struct ath5k_hw *ah, u32 rstamp)
const char *
ath5k_chip_name(enum ath5k_srev_type type, u_int16_t val)
static unsigned int ath5k_ioread32(void *hw_priv, u32 reg_offset)
static void ath5k_iowrite32(void *hw_priv, u32 val, u32 reg_offset)
static const struct ath_ops ath5k_common_ops = ;
static int ath5k_reg_notifier(struct wiphy *wiphy, struct regulatory_request *request)
static bool ath5k_is_standard_channel(short chan, enum ieee80211_band band)
static unsigned int
ath5k_setup_channels(struct ath5k_hw *ah, struct ieee80211_channel *channels,
unsigned int mode, unsigned int max)
static void
ath5k_setup_rate_idx(struct ath5k_softc *sc, struct ieee80211_supported_band *b)
static int
ath5k_setup_bands(struct ieee80211_hw *hw)
int
ath5k_chan_set(struct ath5k_softc *sc, struct ieee80211_channel *chan)
void ath5k_vif_iter(void *data, u8 *mac, struct ieee80211_vif *vif)
void
ath5k_update_bssid_mask_and_opmode(struct ath5k_softc *sc,
struct ieee80211_vif *vif)
static inline int
ath5k_hw_to_driver_rix(struct ath5k_softc *sc, int hw_rix)
static
struct sk_buff *ath5k_rx_skb_alloc(struct ath5k_softc *sc, dma_addr_t *skb_addr)
static int
ath5k_rxbuf_setup(struct ath5k_softc *sc, struct ath5k_buf *bf)
static enum ath5k_pkt_type get_hw_packet_type(struct sk_buff *skb)
static int
ath5k_txbuf_setup(struct ath5k_softc *sc, struct ath5k_buf *bf,
struct ath5k_txq *txq, int padsize)
static int
ath5k_desc_alloc(struct ath5k_softc *sc)
void
ath5k_txbuf_free_skb(struct ath5k_softc *sc, struct ath5k_buf *bf)
void
ath5k_rxbuf_free_skb(struct ath5k_softc *sc, struct ath5k_buf *bf)
static void
ath5k_desc_free(struct ath5k_softc *sc)
static struct ath5k_txq *
ath5k_txq_setup(struct ath5k_softc *sc,
int qtype, int subtype)
static int
ath5k_beaconq_setup(struct ath5k_hw *ah)
static int
ath5k_beaconq_config(struct ath5k_softc *sc)
static void
ath5k_drain_tx_buffs(struct ath5k_softc *sc)
static void
ath5k_txq_release(struct ath5k_softc *sc)
static int
ath5k_rx_start(struct ath5k_softc *sc)
static void
ath5k_rx_stop(struct ath5k_softc *sc)
static unsigned int
ath5k_rx_decrypted(struct ath5k_softc *sc, struct sk_buff *skb,
struct ath5k_rx_status *rs)
static void
ath5k_check_ibss_tsf(struct ath5k_softc *sc, struct sk_buff *skb,
struct ieee80211_rx_status *rxs)
static void
ath5k_update_beacon_rssi(struct ath5k_softc *sc, struct sk_buff *skb, int rssi)
static int ath5k_common_padpos(struct sk_buff *skb)
static int ath5k_add_padding(struct sk_buff *skb)
static int ath5k_remove_padding(struct sk_buff *skb)
static void
ath5k_receive_frame(struct ath5k_softc *sc, struct sk_buff *skb,
struct ath5k_rx_status *rs)
static bool
ath5k_receive_frame_ok(struct ath5k_softc *sc, struct ath5k_rx_status *rs)
static void
ath5k_set_current_imask(struct ath5k_softc *sc)
static void
ath5k_tasklet_rx(unsigned long data)
void
ath5k_tx_queue(struct ieee80211_hw *hw, struct sk_buff *skb,
struct ath5k_txq *txq)
static void
ath5k_tx_frame_completed(struct ath5k_softc *sc, struct sk_buff *skb,
struct ath5k_txq *txq, struct ath5k_tx_status *ts)
static void
ath5k_tx_processq(struct ath5k_softc *sc, struct ath5k_txq *txq)
static void
ath5k_tasklet_tx(unsigned long data)
static int
ath5k_beacon_setup(struct ath5k_softc *sc, struct ath5k_buf *bf)
int
ath5k_beacon_update(struct ieee80211_hw *hw, struct ieee80211_vif *vif)
static void
ath5k_beacon_send(struct ath5k_softc *sc)
void
ath5k_beacon_update_timers(struct ath5k_softc *sc, u64 bc_tsf)
void
ath5k_beacon_config(struct ath5k_softc *sc)
static void ath5k_tasklet_beacon(unsigned long data)
static void
ath5k_intr_calibration_poll(struct ath5k_hw *ah)
static void
ath5k_schedule_rx(struct ath5k_softc *sc)
static void
ath5k_schedule_tx(struct ath5k_softc *sc)
irqreturn_t
ath5k_intr(int irq, void *dev_id)
static void
ath5k_tasklet_calibrate(unsigned long data)
static void
ath5k_tasklet_ani(unsigned long data)
static void
ath5k_tx_complete_poll_work(struct work_struct *work)
int
ath5k_init_softc(struct ath5k_softc *sc, const struct ath_bus_ops *bus_ops)
static int
ath5k_stop_locked(struct ath5k_softc *sc)
int
ath5k_init_hw(struct ath5k_softc *sc)
static void stop_tasklets(struct ath5k_softc *sc)
int
ath5k_stop_hw(struct ath5k_softc *sc)
static int
ath5k_reset(struct ath5k_softc *sc, struct ieee80211_channel *chan,
bool skip_pcu)
static void ath5k_reset_work(struct work_struct *work)
static int
ath5k_init(struct ieee80211_hw *hw)
void
ath5k_deinit_softc(struct ath5k_softc *sc)
bool
ath_any_vif_assoc(struct ath5k_softc *sc)
void
set_beacon_filter(struct ieee80211_hw *hw, bool enable)
